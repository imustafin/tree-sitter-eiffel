module.exports = grammar({
  name: 'eiffel',
  extras: $ => [/\s+/, $.comment],
  rules: {
    source_file: $ => $.class_declaration,

    comment: $ => token(seq("--", /[^\n]*/)),

    class_declaration: $ => seq(
      optional(field('notes', $.notes)),
      optional(field('mark', $.header_mark)),
      'class',
      field('name', $.class_name),
      optional(field('features', $.features)),
      'end'
    ),

    features: $ => repeat1($.feature_clause),

    feature_clause: $ => seq(
      'feature',
      // TODO: Clients,
      // TODO: Header_comment
      field('declarations', repeat($.feature_declaration))
    ),

    feature_declaration: $ => seq(
      field('name', $.identifier), // TODO: replace with New_feature_list

      // Declaration_body
      optional(field('arguments', $.formal_arguments)),
      optional(field('query_mark', $._type_mark)),

      // Feature_value
      // TODO: [Explicit_value]
      // TODO: [Obsolete]
      // TODO: [Header_comment]
      optional(field('attribute_or_routine', $.attribute_or_routine))
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
      // TODO: Creation_instruction
      // TODO: Call
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

    assignment: $ => seq(
      $.variable,
      ':=',
      $.expression
    ),

    variable: $ => choice(
      $.identifier,
      'Result'
    ),

    expression: $ => choice(
      $.basic_expression,
      $.special_expression
    ),

    basic_expression: $ => choice(
      // TODO: Read_only
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

    special_expression: $ => choice(
      $.manifest_constant,
      // TODO: Manifest_constant
      // TODO: Manifest_array
      // TODO: Manifest_tuple
      // TODO: Agent
      // TODO: Object_test
      // TODO: Once_string
      // TODO: Address
    ),

    manifest_constant: $ => seq(
      optional($.manifest_type),
      $.manifest_value
    ),

    manifest_type: $ => seq(
      '{',
      $.type,
      '}'
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
      field('name', $.identifier),
      ':',
      $.note_values
    ),

    note_name: $ => seq($.identifier, ':'),

    note_values: $ => seq($.note_item, repeat(seq(',', $.note_item))),

    note_item: $ => choice($.identifier, $.manifest_constant),

    manifest_constant: $ => seq(
      optional($.manifest_type),
      $.manifest_value
    ),

    manifest_type: $ => seq('{', $.type, '}'),

    manifest_value: $ => choice(
      $.boolean_constant
      // TODO: other values
    ),

    boolean_constant: $ => choice('True', 'False'),

    class_name: $ => $.identifier,

    identifier: $ => /[a-zA-Z_]+/
  }
})
