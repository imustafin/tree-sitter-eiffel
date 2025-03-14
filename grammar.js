/**
 * @file Parser for Eiffel programming language
 * @author Ilgiz Mustafin <ilgimustafin@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  UNARY: 2, // UNARY > SIGN so that -1 is parsed as (unary (-) (1))
  ACTUALS: 2,
  TYPE: 2,
};

const EAT_SPACES = token.immediate(/[ \t]*/);

const target = $ => choice(
  $.current,
  $.result,
  $.call,
  $.bracket_expression,
  $.manifest_type,
  $.at_cursor,
  seq('(', $.expression, ')')
);

const join1 = (node, separator)  => seq(
  node,
  repeat(seq(separator, node))
);

module.exports = grammar({
  name: 'eiffel',
  extras: $ => [/\s+/, $.comment],
  conflicts: $ => [
    // In Tuple_type parameters: 'TUPLE' '[' (identifier_token) ','
    [$.class_name, $.identifier],
  ],
  word: $ => $._id,
  reserved: {
    global: $ => [
      'across',
      'agent',
      'alias',
      'all',
      'and',
      'as',
      'assign',
      'attribute',
      'check',
      'class',
      'convert',
      'create',
      'Current',
      'debug',
      'deferred',
      'do',
      'else',
      'elseif',
      'end',
      'ensure',
      'expanded',
      'export',
      'external',
      'False',
      'feature',
      'from',
      'frozen',
      'if',
      'implies',
      'inherit',
      'inspect',
      'invariant',
      'like',
      'local',
      'loop',
      'not',
      'note',
      'obsolete',
      'old',
      'once',
      'only',
      'or',
      'Precursor',
      'redefine',
      'rename',
      'require',
      'rescue',
      'Result',
      'retry',
      'select',
      'separate',
      'then',
      'True',
      'TUPLE',
      'undefine',
      'until',
      'variant',
      'Void',
      'when',
      'xor'
    ]
  },
  rules: {
    source_file: $ => optional($.class_declaration),

    comment: $ => token(seq('--', token.immediate(/[^\r\n]*(\r?\n)?/))),

    _header_comment: $ => seq(
      choice(
        // Header comment starts on the next line
        choice(token.immediate('\r\n'), token.immediate('\n')),
        // Or header comment starts on the current line
        alias($.comment, $.header_comment),
      ),
      repeat(alias($.comment, $.header_comment)),
      optional(choice('\r\n', '\n'))
    ),

    class_declaration: $ => seq(
      optional($.notes),
      optional(field('mark', $.header_mark)),
      'class',
      $.class_name,
      optional($.formal_generics),
      optional($.obsolete),
      repeat($.inheritance),
      repeat($.creation_clause),
      optional($.converters),
      repeat($.feature_clause),
      optional($.invariant),
      optional($.notes),
      'end'
    ),

    converters: $ => seq(
      'convert',
      $.converter,
      repeat(seq(',', $.converter))
    ),

    converter: $ => choice(
      $.conversion_procedure,
      $.conversion_query
    ),

    conversion_procedure: $ => seq(
      $.identifier,
      '(',
      '{',
      $._type_list,
      '}',
      ')'
    ),

    conversion_query: $ => seq(
      $.identifier,
      ':',
      '{',
      $._type_list,
      '}'
    ),

    _type_list: $ => seq(
      $._type,
      repeat(seq(',', $._type))
    ),

    creation_clause: $ => seq(
      'create',
      optional($.clients),
      optional($._header_comment),
      join1($.identifier, ',')
    ),

    inheritance: $ => seq(
      'inherit',
      optional($.non_conformance),
      repeat($.parent)
    ),

    non_conformance: $ => seq(
      '{',
      'NONE',
      '}'
    ),

    parent: $ => seq(
      $.class_type,
      optional($.feature_adaptation)
    ),

    // Just 'end' is not valid, there should be at least one clause before it
    feature_adaptation: $ => seq(
      repeat1(choice(
        $.new_exports,
        $.undefine,
        $.redefine,
        $.rename,
        $.select,
      )),
      'end',
    ),

    select: $ => seq(
      'select',
      join1($.identifier, ',')
    ),

    new_exports: $ => seq(
      'export',
      repeat($.new_export_item)
    ),

    new_export_item: $ => seq(
      $.clients,
      optional($._header_comment),
      choice(
        'all',
        join1($.identifier, ',')
      )
    ),

    rename: $ => seq(
      'rename',
      $.rename_pair,
      repeat(seq(',', $.rename_pair))
    ),

    rename_pair: $ => seq(
      $.identifier,
      'as',
      $.extended_feature_name
    ),

    extended_feature_name: $ => seq(
      $.identifier,
      optional(seq(
        'alias',
        $._manifest_string, // TODO: Alias_name should be here
        optional('convert')
      ))
    ),

    unary: $ => choice(
      $.unary_not,
      $.unary_plus_minus,
      $.free_operator
    ),

    unary_not: $ => 'not',

    unary_plus_minus: $ => prec(PREC.UNARY, choice('+', '-')),

    redefine: $ => seq(
      'redefine',
      join1($.identifier, ',')
    ),

    undefine: $ => seq(
      'undefine',
      join1($.identifier, ',')
    ),

    class_type: $ => seq(
      optional($.separate_mark),
      optional($.attachment_mark),
      $.class_name,
      optional($.actual_generics)
    ),

    separate_mark: $ => 'separate',

    attachment_mark: $ => choice(
      'attached',
      'detachable'
    ),

    actual_generics: $ => seq(
      '[',
      $._type_list,
      ']'
    ),

    formal_generics: $ => seq(
      '[',
      $.formal_generic,
      repeat(seq(',', $.formal_generic)),
      ']'
    ),

    formal_generic: $ => seq(
      optional('frozen'),
      $.class_name,
      optional($.constraint)
    ),

    constraint: $ => seq(
      '->',
      $.constraining_types,
      optional($.constraint_creators)
    ),

    constraining_types: $ => choice(
      $.single_constraint,
      $.multiple_constraint
    ),

    single_constraint: $ => seq(
      $._type,
      optional(seq($.rename, 'end'))
    ),

    multiple_constraint: $ => seq(
      '{',
      $.single_constraint,
      repeat(seq(',', $.single_constraint)),
      '}'
    ),

    constraint_creators: $ => seq(
      'create',
      join1($.identifier, ','),
      'end'
    ),

    invariant: $ => seq(
      'invariant',
      repeat($.assertion_clause)
    ),

    assertion_clause: $ => seq(
      optional($.tag_mark),
      choice(
        prec.right(2, $.expression),
        $.comment,
        $.object_free_assertion
      ),
      optional(';')
    ),

    tag_mark: $ => seq(
      $.tag,
      ':'
    ),

    object_free_assertion: $ => 'class',

    feature_clause: $ => seq(
      'feature',
      optional($.clients),
      optional($._header_comment),
      field('declarations', repeat($.feature_declaration))
    ),

    clients: $ => seq(
      '{',
      optional(seq($.class_name, repeat(seq(',', $.class_name)))),
      '}'
    ),

    feature_declaration: $ => prec.right(2, seq(
      join1($.new_feature, ','),

      choice(
        // Constant
        seq($._query_mark, $.explicit_value, optional($._header_comment)),

        // Field
        seq($._query_mark, optional($._header_comment)),

        // Routine
        seq(
          optional($.formal_arguments),
          optional($._query_mark),
          optional($._header_comment),
          optional($.obsolete),
          $.attribute_or_routine,
          repeat(';'),
        )
      )
    )),

    _query_mark: $ => seq(
      ':',
      $._type,
      optional($.assigner_mark)
    ),

    assigner_mark: $ => seq(
      'assign',
      $.identifier
    ),

    explicit_value: $ => seq(
      '=',
      $._manifest_constant
    ),

    new_feature: $ => seq(
      optional('frozen'),
      $.extended_feature_name,
      optional('\0')
    ),

    obsolete: $ => seq(
      'obsolete',
      $._manifest_string
    ),

    attribute_or_routine: $ => seq(
      optional($.notes),
      optional($.precondition),
      optional($.local_declarations),
      $.feature_body,
      optional($.postcondition),
      optional($.rescue),
      'end'
    ),

    rescue: $ => seq(
      'rescue',
      repeat($._instruction)
    ),

    local_declarations: $ => seq(
      'local',
      optional($._entity_declaration_list)
    ),

    precondition: $ => prec.left(seq(
      'require',
      optional('else'),
      repeat($.assertion_clause)
    )),

    postcondition: $ => seq(
      'ensure',
      optional('then'),
      repeat($.assertion_clause),
      optional($.only)
    ),

    only: $ => seq(
      'only',
      join1($.identifier, ',')
    ),

    feature_body: $ => choice(
      'deferred',
      $.effective_routine,
      $.attribute,
    ),

    attribute: $ => seq(
      'attribute',
      repeat($._instruction)
    ),

    effective_routine: $ => choice(
      $.internal,
      $.external
    ),

    external: $ => seq(
      'external',
      $._manifest_string, // TODO: External_language
      optional(
        seq(
          'alias',
          $._manifest_string
        )
      )
    ),

    internal: $ => seq(
      $.routine_mark,
      repeat($._instruction)
    ),

    routine_mark: $ => choice(
      'do',
      $.once
    ),

    once: $ => choice(
      'once',
      prec.left(2, seq('once', '(', optional(join1($._manifest_string, ',')), ')'))
    ),

    _instruction: $ => choice(
      ';', // _instruction is hidden, so semicolons will not appear in the tree
      $.assignment,
      $.creation,
      $.call,
      $.conditional,
      $.multi_branch,
      $.loop,
      $.debug,
      $.precursor,
      $.check,
      $.retry,
      $.separate
    ),

    separate: $ => seq(
      'separate',
      join1(seq($.expression, 'as', $.identifier), ','),
      'then',
      repeat($._instruction),
      'end'
    ),

    retry: $ => 'retry',

    check: $ => seq(
      'check',
      repeat($.assertion_clause),
      optional($.notes),
      optional(seq('then', repeat($._instruction))),
      'end'
    ),

    debug: $ => seq(
      prec.left(2, seq(
        'debug',
        optional(seq('(', optional(join1($._manifest_string, ',')), ')')),
      )),
      repeat($._instruction),
      'end'
    ),

    loop: $ => choice(
      seq('⟳', $.identifier, ':', $.expression, '¦', repeat($._instruction), '⟲'),
      seq(
      optional($.iteration),
      optional($.initialization),
      optional($.invariant),
      optional($.exit_condition),
      $.loop_body,
      optional($.variant),
      'end'
    )),

    quantifier_loop: $ => choice(
      seq($.iteration, $.quantifier_loop_body, 'end'),
      seq(
        choice('∀', '∃'),
        $.identifier,
        ':',
        $.expression,
        '¦',
        $.expression
      )
    ),

    quantifier_loop_body: $ => choice(
      seq('all', $.expression),
      seq('some', $.expression)
    ),

    iteration: $ => seq(
      'across',
      $.expression,
      'as',
      $.identifier
    ),

    initialization: $ => prec.left(2, seq(
      'from',
      repeat($._instruction)
    )),

    exit_condition: $ => seq(
      'until',
      $.expression
    ),

    loop_body: $ => seq(
      'loop',
      repeat($._instruction)
    ),

    variant: $ => seq(
      'variant',
      optional($.tag_mark),
      $.expression
    ),

    multi_branch: $ => seq(
      'inspect',
      $.expression,
      repeat($.when_part),
      optional($.else_part),
      'end'
    ),

    multi_branch_expression: $ => seq(
      'inspect',
      $.expression,
      repeat($.when_part_expression),
      optional($.else_part_expression),
      'end'
    ),

    when_part_expression: $ => seq(
      'when',
      join1($.choice, ','),
      'then',
      $.expression
    ),

    when_part: $ => seq(
      'when',
      join1($.choice, ','),
      'then',
      repeat($._instruction)
    ),

    choice: $ => choice(
      $._constant,
      $.constant_interval,
    ),

    _constant: $ => choice(
      $._manifest_constant,
      $.identifier,
      $.class_constant
    ),

    class_constant: $ => seq(
      $.manifest_type,
      '.',
      $.identifier
    ),

    constant_interval: $ => seq(
      $._constant,
      '..',
      $._constant
    ),

    conditional: $ => seq(
      'if',
      $.then_part,
      repeat(seq('elseif', $.then_part)),
      optional($.else_part),
      'end'
    ),

    then_part: $ => seq(
      $.expression,
      'then',
      repeat($._instruction)
    ),

    else_part: $ => seq(
      'else',
      repeat($._instruction)
    ),

    else_part_expression: $ => seq(
      'else',
      $.expression,
    ),

    conditional_expression: $ => seq(
      'if',
      $.then_part_expression,
      repeat(seq('elseif', $.then_part_expression)),
      $.else_part_expression,
      'end'
    ),

    then_part_expression: $ => seq(
      $.expression,
      'then',
      $.expression
    ),

    // Covers normal Assignment and Assigner_call
    assignment: $ => seq(
      choice($.call, $.result, $.bracket_expression),
      choice(
        ':=',
        '?=' // obsolete "Assignment attempt"
      ),
      $.expression
    ),

    call: $ => prec.left(2, seq(
      optional(seq(target($), '.')),
      $.unqualified_call
    )),

    creation: $ => seq(
      'create',
      optional($.manifest_type),
      choice(
        prec.left(100, seq(choice($.result, $.identifier), '.', $.unqualified_call)),
        choice($.result, $.identifier),
      )
    ),

    unqualified_call: $=> choice(
      $.identifier, // without args
      prec.left(PREC.ACTUALS, seq($.identifier, $.actuals)) // with args
    ),

    actuals: $ => seq(
      '(',
      $.expression,
      repeat(seq(',', $.expression)),
      ')'
    ),

    result: $ => 'Result',

    expression: $ => choice(
      /// Basic_expression
      // Read_only
      $.current,

      // Variable
      $.result,

      $.call, // Call includes Identifier (possibility in Variable)
      $.precursor,
      $.equality,
      $.parenthesized,
      $.old,
      $.operator_expression,
      $.bracket_expression,
      $.creation_expression,
      $.conditional_expression,
      $.quantifier_loop,
      $.multi_branch_expression,

      /// Special_expression
      $._manifest_constant,
      $.void,
      $.manifest_tuple,
      $.agent,
      $.object_test,
      $.once_string,
      $.address
    ),

    creation_expression: $ => choice(
      seq('create', $.manifest_type),
      prec.left(2, seq('create', $.manifest_type, '.', $.unqualified_call))
    ),

    bracket_expression: $ => prec.left(2, seq(
      choice(
        target($),
        $.once_string,
        $._manifest_constant,
        $.manifest_tuple
      ),
      '[',
      join1($.expression, ','),
      ']'
    )),

    manifest_tuple: $ => seq(
      '[',
      $.expression,
      repeat(seq(',', $.expression)),
      ']'
    ),

    once_string: $ => seq(
      'once',
      $._manifest_string
    ),

    // Priorities from http://www.gobosoft.com/eiffel/syntax/#Operator
    operator_expression: $ => choice(
      prec.left(200, seq($.unary, $.expression)), // unary precedes binary

      prec.left(100, seq($.expression, $.free_operator, $.expression)),
      prec.right(90, seq($.expression, $.binary_caret, $.expression)), // ^ is right-assoc.!
      prec.left(80, seq($.expression, $.binary_mul_div, $.expression)),
      prec.left(70, seq($.expression, $.binary_plus_minus, $.expression)),
      prec.left(60, seq($.expression, $.binary_comparison, $.expression)),
      prec.left(50, seq($.expression, $.binary_and, $.expression)),
      prec.left(40, seq($.expression, $.binary_or, $.expression)),
      prec.left(30, seq($.expression, $.binary_implies, $.expression))
    ),

    // TODO: Support free operators starting with chars which are other operators
    free_operator: $ => seq(
      choice('#', '|', '&'),
      token.immediate(/[a-zA-Z0-9+\-*/\\.<=>#|&]*/)
    ),

    binary_plus_minus: $ => choice('+', '-'),
    binary_mul_div: $ => choice('*', '/', '//', '\\\\'),
    binary_caret: $ => '^',
    binary_dot_dot: $ => choice('..'),
    binary_comparison: $ => choice('<', '<=', '>=', '>'),
    binary_and: $ => choice('and', 'and then'),
    binary_or: $ => choice('or', 'or else', 'xor'),
    binary_implies: $ => choice('implies', '⇒'),

    old: $ => prec.left(2, seq(
      'old',
      $.expression
    )),

    parenthesized: $ => seq(
      '(',
      $.expression,
      ')'
    ),

    equality: $ => prec.left(2, seq(
      $.expression,
      $.comparison,
      $.expression
    )),

    comparison: $ => choice('=', '/=', '~', '/~'),

    precursor: $ => choice(
      prec.left(PREC.ACTUALS, seq('Precursor', $.actuals)),
      prec.left(PREC.ACTUALS, seq('Precursor',
                                  seq('{', $.class_name, '}'),
                                  $.actuals)),
      seq('Precursor', seq('{', $.class_name, '}')),
      'Precursor'
    ),

    current: $ => 'Current',

    object_test: $ => prec.left(2, seq(
      'attached',
      optional($.manifest_type),
      $.expression,
      optional(seq('as', $.identifier))
    )),

    address: $ => seq('$', $.identifier),

    at_cursor: $ => seq('@', $.identifier),

    agent: $ => choice(
      $.call_agent,
      $.inline_agent
    ),

    inline_agent: $ => prec.left(2, seq(
      'agent',
      optional($.formal_arguments),
      optional(seq(':', $._type)),
      $.attribute_or_routine,
      optional(
        // Agent_actuals
        seq(
          '(',
          optional(join1($._agent_actual, ',')),
          ')'
        )
      )
    )),

    call_agent: $ => choice(
      prec.left(2, seq('agent', $.agent_target, '.', $.agent_unqualified)),
      prec.left(2, seq('agent', $.agent_unqualified))
    ),

    agent_target: $ => prec(2, choice(
      $.identifier,
      $.parenthesized,
      $.manifest_type
    )),

    agent_unqualified: $ => choice(
      $.identifier,
      prec.left(2, seq(
        $.identifier,

        // Agent_actuals
        '(',
        optional(join1($._agent_actual, ',')),
        ')'
      ))
    ),

    _agent_actual: $ => choice($.expression, $.placeholder),

    placeholder: $ => seq(
      optional($.manifest_type),
      '?'
    ),

    manifest_array: $ => seq(
      '<<', optional(join1($.expression, ',')), '>>'
    ),

    void: $ => 'Void',

    formal_arguments: $ => seq(
      '(',
      optional($._entity_declaration_list),
      ')'
    ),

    _entity_declaration_list: $ => join1($.entity_declaration_group, optional(';')),

    entity_declaration_group: $ => seq(
      join1($.identifier, ','),
      ':',
      $._type
    ),

    _type: $ => choice(
      $.class_type,
      $.tuple_type,
      $.anchored,
    ),

    class_type: $ => seq(
      optional($.separate_mark),
      optional($.attachment_mark),
      $.class_name,
      optional($.actual_generics)
    ),

    tuple_type: $ => seq(
      optional($.separate_mark),
      optional($.attachment_mark),
      alias('TUPLE', $.class_name),
      optional(seq('[', $.tuple_parameter_list, ']')),
    ),

    tuple_parameter_list: $ => choice(
      $._type_list,
      $._entity_declaration_list
    ),

    anchored: $ => seq(
      optional($.separate_mark),
      optional($.attachment_mark),
      'like',
      choice($.call, $.current)
    ),

    header_mark: $ => choice('deferred', 'expanded', 'frozen', 'once'),

    notes: $ => seq('note', repeat($.note_entry)),

    note_entry: $ => seq(
      $.tag,
      ':',
      join1(choice($.identifier, $._manifest_constant), ',')
    ),

    _manifest_constant: $ => choice(
      $._manifest_value,
      prec.left(2, seq($.manifest_type, $._manifest_value))
    ),

    manifest_type: $ => seq('{', $._type, '}'),

    _manifest_value: $ => choice(
      $.boolean_constant,
      $.character_constant,
      $.integer_constant,
      $.real_constant,
      $._manifest_string,
      $.manifest_type,
      $.manifest_array
    ),

    _manifest_string: $ => choice(
      $.basic_manifest_string,
      $.verbatim_string,
    ),

    // TODO: Support {} brackets
    // TODO: Support tagged brackets ("named[ ... ]named")
    verbatim_string: $ => seq(
      $.verbatim_string_opener,
      alias(repeat(seq(
        EAT_SPACES,
        choice(
          seq(
            token.immediate(']'),
            choice(
              token.immediate(/[^"][^\n]*\r?\n/),
              token.immediate('\r'),
              token.immediate('\n')
            )
          ),
          token.immediate(/[^\]\r\n][^\n]*\r?\n/),
          token.immediate(/\r?\n/)
        )
      )), $.verbatim_string_content),
      $.verbatim_string_closer,
    ),

    verbatim_string_opener: $ => /"\[[ \t]*\r?\n/,

    verbatim_string_closer: $ => seq(EAT_SPACES, ']"'),

    basic_manifest_string: $ => seq(
      '"',
      optional($.string_content),
      '"'
    ),

    string_content: $ => repeat1(
      choice(
        alias(token(prec(1, /%./)), $.special_text), // escaped Special Character
        token(prec(1, /[^%"]+/)), // simple text span
      )
    ),

    real_constant: $ => seq(
      optional($.sign),
      $.real
    ),

    real: $ => seq(
      choice(
        prec.left(2, seq($.integer, token.immediate('.'), optional($.integer))), // with integral
        seq('.', $.integer) // no integral, only fractional
      ),
      optional($.real_exponent)
    ),

    real_exponent: $ => seq(token.immediate('e'), optional($.sign), $.integer),

    integer_constant: $ => seq(
      optional($.sign),
      $.integer
    ),

    sign: $ => choice('-', '+'),

    integer: $ => /[0-9][0-9_]*/, // TODO: finish Integer

    character_constant: $ => seq("'", $.character, "'"),

    character: $ => /./, // TODO: finish Character

    boolean_constant: $ => choice('True', 'False'),

    class_name: $ => $._id,
    identifier: $ => $._id,
    tag: $ => $._id,

    _id: $ => /[a-zA-Z_][a-zA-Z0-9_]*/
  }
});
