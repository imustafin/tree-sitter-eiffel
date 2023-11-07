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
      // TODO: Formal_generics
      optional($.obsolete),
      // TODO: Inheritance
      // TODO: Creators
      // TODO: Converters
      optional(field('features', $.features)),
      optional($.notes),
      optional($.invariant),
      optional($.notes),
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
      $.boolean_expression,
      $.comment,
      'class'
    ),

    boolean_expression: $ => choice(
      $.basic_expression,
      $.boolean_constant,
      // TODO: Object_test
    ),

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
      field('name', $.identifier), // TODO: replace with New_feature_list

      // Declaration_body
      optional(field('arguments', $.formal_arguments)),
      optional(field('query_mark', $._type_mark)),

      // Feature_value
      // TODO: [Explicit_value]
      optional($.obsolete),
      optional($.header_comment),
      optional(field('attribute_or_routine', $.attribute_or_routine))
    ),

    obsolete: $ => seq(
      'obsolete',
      $.manifest_string
    ),

    attribute_or_routine: $ => seq(
      // TODO: [Precondition]
      // TODO: [Local_declarations]
      $.feature_body,
      // TODO: [Postcondition]
      // TODO: [Rescue]
      'end'
    ),

    feature_body: $ => choice(
      'deferred',
      $.effective_routine,
      // TODO: Attribute
    ),

    effective_routine: $ => choice(
      $.internal,
      // TODO: External
    ),

    internal: $ => seq(
      $.routine_mark,
      optional($.compound)
    ),

    routine_mark: $ => choice('do'),

    // This rule requires at least one instruction.
    // To accept empty compunds, use optional($.compound)
    compound: $ => repeat1(
      seq($.instruction, optional(';'))
    ),

    instruction: $ => choice(
      $.creation,
      $.call,
      $.assignment,
      // TODO: Assigner_call
      // TODO: Conditional
      // TODO: Multi_branch
      // TODO: Loop
      // TODO: Debug
      // TODO: Precursor
      // TODO: Check
      // TODO: Retry
    ),

    call: $ => choice(
      $.object_call,
      $.non_object_call
    ),

    object_call: $ => seq(
      optional(seq($.target, '.')),
      $.unqualified_call
    ),

    non_object_call: $ => seq(
      $.manifest_type,
      '.',
      $.unqualified_call
    ),

    target: $ => choice(
      'Result',
      'Current',
      $.call,
      $.parenthesized_target
    ),

    parenthesized_target: $ => seq(
      '(',
      $.expression,
      ')'
    ),

    creation: $ => seq(
      'create',
      optional($.manifest_type),
      $.creation_call
    ),

    creation_call: $ => seq(
      $.variable,
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

    assignment: $ => seq(
      $.variable,
      ':=',
      $.expression
    ),

    variable: $ => choice(
      $.identifier,
      $.result
    ),

    result: $ => 'Result',

    expression: $ => choice(
      $.basic_expression,
      $.special_expression
    ),

    basic_expression: $ => choice(
      // Read_only
      $.current,

      $.variable,
      // TODO: Call
      // TODO: Precursor
      // TODO: Equality
      // TODO: Parenthesized
      // TODO: Old
      // TODO: Operator_expression
      // TODO: Bracket_expression
      // TODO: Creation_expression
      // TODO: Conditional_expression
    ),

    current: $ => 'Current',

    special_expression: $ => choice(
      $.manifest_constant,
      $.void,
      // TODO: Manifest_array
      // TODO: Manifest_tuple
      // TODO: Agent
      // TODO: Object_test
      // TODO: Once_string
      // TODO: Address
    ),

    void: $ => 'Void',

    manifest_constant: $ => seq(
      optional($.manifest_type),
      $.manifest_value
    ),

    _type_mark: $ => seq(
      ":",
      field('type', $.type)
    ),

    formal_arguments: $ => seq(
      '(',
      optional($.entity_declaration_list),
      ')'
    ),

    entity_declaration_list: $ =>seq(
      $.entity_declaration_group, repeat(seq(';', $.entity_declaration_group))
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

    note_item: $ => choice($.identifier, $.manifest_constant),

    manifest_constant: $ => choice(
      $.manifest_value,
      prec.left(PREC.TYPE, seq($.manifest_type, $.manifest_value))
    ),

    manifest_type: $ => seq('{', $.type, '}'),

    manifest_value: $ => choice(
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
        seq($.integer, '.', optional($.integer)), // with integral
        seq('.', $.integer) // no integral, only fractional
      ),
      optional($.real_exponent)
    ),

    real_exponent: $ => seq('e', optional($.sign), $.integer),

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
