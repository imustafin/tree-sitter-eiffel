module.exports = grammar({
  name: 'eiffel',
  rules: {
    source_file: $ => $.class_declaration,

    comment: $ => token(seq("--", /.*/)),

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
      field('declarations',
            optional(seq($.feature_declaration, repeat(seq(';', $.feature_declaration)))))),

    feature_declaration: $ => seq(
      field('name', $.identifier), // TODO: replace with New_feature_list
      // TODO: Declaration_body
      optional(field('arguments', $.formal_arguments))
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
