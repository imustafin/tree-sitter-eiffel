const PREC = {
  ACTUALS: 2,
  TYPE: 2,
  HEADER_COMMENT: 2,
};

SIMPLE_CHARS = '[^@^$\\~\n`#\t|%\'"\\[\\]{}]';

module.exports = grammar({
  name: 'eiffel',
  extras: $ => [/\s+/, $.comment],
  rules: {
    source_file: $ => $.class_declaration,

    // Simple comment is one line
    comment: $ => /--[^\n]*\n/,

    // Header comments are multi-line
    //
    // Header comment starts with -- and consumes until end of line.
    // The next line can be the continuation of this comment.
    //
    // Blank line (without --) ends the current comment.
    // To do that we use [ \t] which matches spaces but does not match \n.
    header_comment: $ => token(prec(
      PREC.HEADER_COMMENT,
      /--[^\n]*\n([ \t]*--[^\n]*\n)*/
    )),

    class_declaration: $ => seq(
      optional(field('notes', $.notes)),
      optional(field('mark', $.header_mark)),
      'class',
      $.class_name,
      optional($.formal_generics),
      optional($.obsolete),
      repeat($.inheritance),
      repeat($.creation_clause),
      optional($.converters),
      optional(field('features', $.features)),
      optional($.notes),
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
      $.type,
      repeat(seq(',', $.type))
    ),

    creation_clause: $ => seq(
      'create',
      optional($.clients),
      optional($.header_comment),
      $._feature_list
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
    feature_adaptation: $ => choice(
      seq(
        $.undefine,
        optional($.redefine),
        optional($.rename),
        optional($.new_exports),
        optional($.select),
        'end',
      ),
      seq(
        $.redefine,
        optional($.rename),
        optional($.new_exports),
        optional($.select),
        'end'
      ),
      seq(
        $.rename,
        optional($.new_exports),
        optional($.select),
        'end'
      ),
      seq(
        $.new_exports,
        optional($.select),
        'end'
      ),
      seq(
        $.select,
        'end'
      ),
    ),

    select: $ => seq(
      'select',
      $._feature_list
    ),

    new_exports: $ => seq(
      'export',
      repeat($.new_export_item)
    ),

    new_export_item: $ => seq(
      $.clients,
      optional($.header_comment),
      choice(
        alias('all', $.export_all),
        $._feature_list
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
        $.manifest_string, // TODO: Alias_name should be here
        optional('convert')
      ))
    ),

    operator: $ => choice(
      $.unary,
      $.binary
    ),

    unary: $ => choice(
      'not',
      '+',
      '-',
      // TODO: Free_unary
    ),

    binary: $ => choice(
      '+',
      '-',
      '*',
      '/',
      '//',
      '\\\\',
      '^',
      '..',
      '<',
      '>',
      '<=',
      '>=',
      'and',
      'or',
      'xor',
      'and then',
      'or else',
      'implies',
      // TODO: Free_binary
    ),

    redefine: $ => seq(
      'redefine',
      $._feature_list
    ),

    undefine: $ => seq(
      'undefine',
      $._feature_list
    ),

    _feature_list: $ => seq(
      $.identifier,
      repeat(seq(',', $.identifier))
    ),

    class_type: $ => seq(
      optional($.attachment_mark),
      $.class_name,
      optional($.actual_generics)
    ),

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
      $.identifier,
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
      $.type,
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
      $.identifier,
      repeat(seq(',', $.identifier)),
      'end'
    ),

    invariant: $ => seq(
      'invariant',
      repeat($.assertion_clause)
    ),

    assertion_clause: $ => seq(
      optional($.tag_mark),
      $.unlabeled_assertion_clause
    ),

    tag_mark: $ => seq(
      $.identifier,
      ':'
    ),

    unlabeled_assertion_clause: $ => choice(
      $.expression,
      $.comment,
      $.object_free_assertion
    ),

    object_free_assertion: $ => 'class',

    features: $ => repeat1($.feature_clause),

    feature_clause: $ => seq(
      'feature',
      optional($.clients),
      optional($.header_comment),
      field('declarations', repeat($.feature_declaration))
    ),

    clients: $ => seq(
      '{',
      optional(seq($.identifier, repeat(seq(',', $.identifier)))),
      '}'
    ),

    feature_declaration: $ => seq(
      $.new_feature,
      repeat(seq(',', $.new_feature)),

      // Declaration_body
      optional(field('arguments', $.formal_arguments)),
      optional(field('query_mark', $._type_mark)),

      // Feature_value
      optional($.explicit_value),
      optional($.obsolete),
      optional($.header_comment),
      optional(field('attribute_or_routine', $.attribute_or_routine))
    ),

    explicit_value: $ => seq(
      '=',
      $._manifest_constant
    ),

    new_feature: $ => seq(
      optional(alias('frozen', $.frozen)),
      $.extended_feature_name
    ),

    obsolete: $ => seq(
      'obsolete',
      $.manifest_string
    ),

    attribute_or_routine: $ => seq(
      optional($.precondition),
      optional($.local_declarations),
      $.feature_body,
      optional($.postcondition),
      optional($.rescue),
      'end'
    ),

    rescue: $ => seq(
      'rescue',
      repeat($.instruction)
    ),

    local_declarations: $ => seq(
      'local',
      $.entity_declaration_list
    ),

    precondition: $ => seq(
      'require',
      optional('else'),
      repeat($.assertion_clause)
    ),

    postcondition: $ => seq(
      'ensure',
      optional('then'),
      repeat($.assertion_clause)
    ),

    feature_body: $ => choice(
      'deferred',
      $.effective_routine,
      $.attribute,
    ),

    attribute: $ => seq(
      'attribute',
      repeat($.instruction)
    ),

    effective_routine: $ => choice(
      $.internal,
      $.external
    ),

    external: $ => seq(
      'external',
      $.manifest_string, // TODO: External_language
      optional(
        seq(
          'alias',
          $.manifest_string
        )
      )
    ),

    internal: $ => seq(
      $.routine_mark,
      repeat($.instruction)
    ),

    routine_mark: $ => choice('do'),

    instruction: $ => choice(
      $.assigner_call,
      $.creation,
      $.call,
      $.conditional,
      $.multi_branch,
      $.loop,
      $.debug,
      $.precursor,
      $.check,
      $.retry
    ),

    retry: $ => 'retry',

    check: $ => seq(
      'check',
      repeat($.assertion_clause),
      optional($.notes),
      'end'
    ),

    debug: $ => seq(
      prec.left(2, seq(
        'debug',
        optional(seq('(', $.manifest_string, repeat(seq(',', $.manifest_string)), ')')),
      )),
      repeat($.instruction),
      'end'
    ),

    loop: $ => seq(
      optional($.iteration),
      optional($.initialization),
      optional($.invariant),
      optional($.exit_condition),
      $.loop_body,
      optional($.variant),
      'end'
    ),

    iteration: $ => seq(
      'across',
      $.expression,
      'as',
      $.identifier
    ),

    initialization: $ => prec.left(2, seq(
      'from',
      repeat($.instruction)
    )),

    exit_condition: $ => seq(
      'until',
      $.expression
    ),

    loop_body: $ => choice(
      seq('loop', repeat($.instruction)),
      seq('all', $.expression),
      seq('some', $.expression)
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

    when_part: $ => seq(
      'when',
      $.choice,
      repeat(seq(',', $.choice)),
      'then',
      repeat($.instruction)
    ),

    choice: $ => choice(
      $._constant,
      $.constant_interval,
    ),

    _constant: $ => choice(
      $._manifest_constant,
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
      repeat($.instruction)
    ),

    else_part: $ => seq(
      'else',
      repeat($.instruction)
    ),

    conditional_expression: $ => seq(
      'if',
      $.then_part_expression,
      repeat(seq('elseif', $.then_part_expression)),
      'else',
      $.expression,
      'end'
    ),

    then_part_expression: $ => seq(
      $.expression,
      'then',
      $.expression
    ),

    assigner_call: $ => seq(
      $.call,
      ':=',
      $.expression
    ),

    call: $ => seq(
      optional(seq(
        choice($.call, seq('(', $.expression, ')')),
        '.'
      )),
      $.unqualified_call
    ),

    creation: $ => seq(
      'create',
      optional($.manifest_type),
      $.creation_call
    ),

    creation_call: $ => seq(
      choice(
        $.identifier,
        $.result
      ),
      optional(seq('.', $.unqualified_call))
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
      $.basic_expression,
      $.special_expression
    ),

    basic_expression: $ => choice(
      // Read_only
      $.current,

      // Variable
      $.result,

      $.call, // Call includes Identifier (possibility in Variable)
      $.precursor,
      $.equality,
      // TODO: Parenthesized
      // TODO: Old
      // TODO: Operator_expression
      // TODO: Bracket_expression
      // TODO: Creation_expression
      $.conditional_expression
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

    special_expression: $ => choice(
      $._manifest_constant,
      $.void,
      // TODO: Manifest_array
      // TODO: Manifest_tuple
      // TODO: Agent
      // TODO: Object_test
      // TODO: Once_string
      // TODO: Address
    ),

    void: $ => 'Void',

    _type_mark: $ => seq(
      ":",
      field('type', $.type)
    ),

    formal_arguments: $ => seq(
      '(',
      optional($.entity_declaration_list),
      ')'
    ),

    entity_declaration_list: $ => seq(
      $.entity_declaration_group,
      repeat(seq(optional(';'), $.entity_declaration_group))
    ),

    entity_declaration_group: $ => seq(
      field('identifiers', $.identifier_list),
      ':',
      field('type', $.type)
    ),

    identifier_list: $ => seq(
      $.identifier, repeat(seq(',', $.identifier))
    ),

    // TODO: specify more
    type: $ => $.identifier,

    header_mark: $ => choice('deferred', 'expanded', 'frozen'),

    notes: $ => seq(
      'note',
      repeat(
        seq($.note_entry)
      )
    ),

    note_entry: $ => seq(
      $.identifier,
      ':',
      $.note_values
    ),

    note_name: $ => seq($.identifier, ':'),

    note_values: $ => seq($.note_item, repeat(seq(',', $.note_item))),

    note_item: $ => choice($.identifier, $._manifest_constant),

    _manifest_constant: $ => choice(
      $._manifest_value,
      prec.left(PREC.TYPE, seq($.manifest_type, $._manifest_value))
    ),

    manifest_type: $ => seq('{', $.type, '}'),

    _manifest_value: $ => choice(
      $.boolean_constant,
      $.character_constant,
      $.integer_constant,
      $.real_constant,
      $.manifest_string,
      $.manifest_type
    ),

    manifest_string: $ => choice(
      $.basic_manifest_string,
      // TODO: Verbatim_string
    ),

    basic_manifest_string: $ => seq('"', $.string_content, '"'),

    string_content: $ => new RegExp(SIMPLE_CHARS + '*'),

    real_constant: $ => seq(
      optional($.sign),
      $.real
    ),

    real: $ => seq(
      choice(
        prec.left(2, seq($.integer, token.immediate('.'), optional($.integer))), // with integral
        seq(token.immediate('.'), $.integer) // no integral, only fractional
      ),
      optional($.real_exponent)
    ),

    real_exponent: $ => seq(token.immediate('e'), optional($.sign), $.integer),

    integer_constant: $ => seq(
      optional($.sign),
      $.integer
    ),

    sign: $ => choice('-', '+'),

    integer: $ => /[0-9]+/, // TODO: finish Integer

    character_constant: $ => seq("'", $.character, "'"),

    character: $ => new RegExp(SIMPLE_CHARS), // TODO: finish Character

    boolean_constant: $ => choice('True', 'False'),

    class_name: $ => $.identifier,

    identifier: $ => /[a-zA-Z_]+/,
  }
})
