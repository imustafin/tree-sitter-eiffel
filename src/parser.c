#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 20

enum {
  sym_comment = 1,
  anon_sym_class = 2,
  anon_sym_end = 3,
  anon_sym_feature = 4,
  anon_sym_deferred = 5,
  anon_sym_do = 6,
  anon_sym_SEMI = 7,
  anon_sym_COLON_EQ = 8,
  anon_sym_Result = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_COLON = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_COMMA = 15,
  anon_sym_expanded = 16,
  anon_sym_frozen = 17,
  anon_sym_note = 18,
  anon_sym_True = 19,
  anon_sym_False = 20,
  sym_identifier = 21,
  sym_source_file = 22,
  sym_class_declaration = 23,
  sym_features = 24,
  sym_feature_clause = 25,
  sym_feature_declaration = 26,
  sym_attribute_or_routine = 27,
  sym_feature_body = 28,
  sym_effective_routine = 29,
  sym_internal = 30,
  sym_routine_mark = 31,
  sym_compound = 32,
  sym_instruction = 33,
  sym_assignment = 34,
  sym_variable = 35,
  sym_expression = 36,
  sym_basic_expression = 37,
  sym_special_expression = 38,
  sym_manifest_constant = 39,
  sym_manifest_type = 40,
  sym__type_mark = 41,
  sym_formal_arguments = 42,
  sym_entity_declaration_list = 43,
  sym_entity_declaration_group = 44,
  sym_identifier_list = 45,
  sym_type = 46,
  sym_header_mark = 47,
  sym_notes = 48,
  sym_note_entry = 49,
  sym_note_values = 50,
  sym_note_item = 51,
  sym_manifest_value = 52,
  sym_boolean_constant = 53,
  sym_class_name = 54,
  aux_sym_features_repeat1 = 55,
  aux_sym_feature_clause_repeat1 = 56,
  aux_sym_compound_repeat1 = 57,
  aux_sym_entity_declaration_list_repeat1 = 58,
  aux_sym_identifier_list_repeat1 = 59,
  aux_sym_notes_repeat1 = 60,
  aux_sym_note_values_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_class] = "class",
  [anon_sym_end] = "end",
  [anon_sym_feature] = "feature",
  [anon_sym_deferred] = "deferred",
  [anon_sym_do] = "do",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_Result] = "Result",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_expanded] = "expanded",
  [anon_sym_frozen] = "frozen",
  [anon_sym_note] = "note",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_class_declaration] = "class_declaration",
  [sym_features] = "features",
  [sym_feature_clause] = "feature_clause",
  [sym_feature_declaration] = "feature_declaration",
  [sym_attribute_or_routine] = "attribute_or_routine",
  [sym_feature_body] = "feature_body",
  [sym_effective_routine] = "effective_routine",
  [sym_internal] = "internal",
  [sym_routine_mark] = "routine_mark",
  [sym_compound] = "compound",
  [sym_instruction] = "instruction",
  [sym_assignment] = "assignment",
  [sym_variable] = "variable",
  [sym_expression] = "expression",
  [sym_basic_expression] = "basic_expression",
  [sym_special_expression] = "special_expression",
  [sym_manifest_constant] = "manifest_constant",
  [sym_manifest_type] = "manifest_type",
  [sym__type_mark] = "_type_mark",
  [sym_formal_arguments] = "formal_arguments",
  [sym_entity_declaration_list] = "entity_declaration_list",
  [sym_entity_declaration_group] = "entity_declaration_group",
  [sym_identifier_list] = "identifier_list",
  [sym_type] = "type",
  [sym_header_mark] = "header_mark",
  [sym_notes] = "notes",
  [sym_note_entry] = "note_entry",
  [sym_note_values] = "note_values",
  [sym_note_item] = "note_item",
  [sym_manifest_value] = "manifest_value",
  [sym_boolean_constant] = "boolean_constant",
  [sym_class_name] = "class_name",
  [aux_sym_features_repeat1] = "features_repeat1",
  [aux_sym_feature_clause_repeat1] = "feature_clause_repeat1",
  [aux_sym_compound_repeat1] = "compound_repeat1",
  [aux_sym_entity_declaration_list_repeat1] = "entity_declaration_list_repeat1",
  [aux_sym_identifier_list_repeat1] = "identifier_list_repeat1",
  [aux_sym_notes_repeat1] = "notes_repeat1",
  [aux_sym_note_values_repeat1] = "note_values_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_feature] = anon_sym_feature,
  [anon_sym_deferred] = anon_sym_deferred,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_Result] = anon_sym_Result,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_expanded] = anon_sym_expanded,
  [anon_sym_frozen] = anon_sym_frozen,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_class_declaration] = sym_class_declaration,
  [sym_features] = sym_features,
  [sym_feature_clause] = sym_feature_clause,
  [sym_feature_declaration] = sym_feature_declaration,
  [sym_attribute_or_routine] = sym_attribute_or_routine,
  [sym_feature_body] = sym_feature_body,
  [sym_effective_routine] = sym_effective_routine,
  [sym_internal] = sym_internal,
  [sym_routine_mark] = sym_routine_mark,
  [sym_compound] = sym_compound,
  [sym_instruction] = sym_instruction,
  [sym_assignment] = sym_assignment,
  [sym_variable] = sym_variable,
  [sym_expression] = sym_expression,
  [sym_basic_expression] = sym_basic_expression,
  [sym_special_expression] = sym_special_expression,
  [sym_manifest_constant] = sym_manifest_constant,
  [sym_manifest_type] = sym_manifest_type,
  [sym__type_mark] = sym__type_mark,
  [sym_formal_arguments] = sym_formal_arguments,
  [sym_entity_declaration_list] = sym_entity_declaration_list,
  [sym_entity_declaration_group] = sym_entity_declaration_group,
  [sym_identifier_list] = sym_identifier_list,
  [sym_type] = sym_type,
  [sym_header_mark] = sym_header_mark,
  [sym_notes] = sym_notes,
  [sym_note_entry] = sym_note_entry,
  [sym_note_values] = sym_note_values,
  [sym_note_item] = sym_note_item,
  [sym_manifest_value] = sym_manifest_value,
  [sym_boolean_constant] = sym_boolean_constant,
  [sym_class_name] = sym_class_name,
  [aux_sym_features_repeat1] = aux_sym_features_repeat1,
  [aux_sym_feature_clause_repeat1] = aux_sym_feature_clause_repeat1,
  [aux_sym_compound_repeat1] = aux_sym_compound_repeat1,
  [aux_sym_entity_declaration_list_repeat1] = aux_sym_entity_declaration_list_repeat1,
  [aux_sym_identifier_list_repeat1] = aux_sym_identifier_list_repeat1,
  [aux_sym_notes_repeat1] = aux_sym_notes_repeat1,
  [aux_sym_note_values_repeat1] = aux_sym_note_values_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_feature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deferred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expanded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frozen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_features] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_or_routine] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_body] = {
    .visible = true,
    .named = true,
  },
  [sym_effective_routine] = {
    .visible = true,
    .named = true,
  },
  [sym_internal] = {
    .visible = true,
    .named = true,
  },
  [sym_routine_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_compound] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_special_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_manifest_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_manifest_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type_mark] = {
    .visible = false,
    .named = true,
  },
  [sym_formal_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_declaration_group] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_header_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_notes] = {
    .visible = true,
    .named = true,
  },
  [sym_note_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_note_values] = {
    .visible = true,
    .named = true,
  },
  [sym_note_item] = {
    .visible = true,
    .named = true,
  },
  [sym_manifest_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_features_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feature_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_notes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_values_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_attribute_or_routine = 2,
  field_declarations = 3,
  field_features = 4,
  field_identifiers = 5,
  field_mark = 6,
  field_name = 7,
  field_notes = 8,
  field_query_mark = 9,
  field_type = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_attribute_or_routine] = "attribute_or_routine",
  [field_declarations] = "declarations",
  [field_features] = "features",
  [field_identifiers] = "identifiers",
  [field_mark] = "mark",
  [field_name] = "name",
  [field_notes] = "notes",
  [field_query_mark] = "query_mark",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 1},
  [14] = {.index = 26, .length = 4},
  [15] = {.index = 30, .length = 3},
  [16] = {.index = 33, .length = 4},
  [17] = {.index = 37, .length = 4},
  [18] = {.index = 41, .length = 5},
  [19] = {.index = 46, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_declarations, 1},
  [3] =
    {field_features, 2},
    {field_name, 1},
  [5] =
    {field_mark, 0},
    {field_name, 2},
  [7] =
    {field_name, 2},
    {field_notes, 0},
  [9] =
    {field_attribute_or_routine, 1},
    {field_name, 0},
  [11] =
    {field_name, 0},
    {field_query_mark, 1},
    {field_type, 1, .inherited = true},
  [14] =
    {field_arguments, 1},
    {field_name, 0},
  [16] =
    {field_features, 3},
    {field_mark, 0},
    {field_name, 2},
  [19] =
    {field_features, 3},
    {field_name, 2},
    {field_notes, 0},
  [22] =
    {field_mark, 1},
    {field_name, 3},
    {field_notes, 0},
  [25] =
    {field_type, 1},
  [26] =
    {field_attribute_or_routine, 2},
    {field_name, 0},
    {field_query_mark, 1},
    {field_type, 1, .inherited = true},
  [30] =
    {field_arguments, 1},
    {field_attribute_or_routine, 2},
    {field_name, 0},
  [33] =
    {field_arguments, 1},
    {field_name, 0},
    {field_query_mark, 2},
    {field_type, 2, .inherited = true},
  [37] =
    {field_features, 4},
    {field_mark, 1},
    {field_name, 3},
    {field_notes, 0},
  [41] =
    {field_arguments, 1},
    {field_attribute_or_routine, 3},
    {field_name, 0},
    {field_query_mark, 2},
    {field_type, 2, .inherited = true},
  [46] =
    {field_identifiers, 0},
    {field_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 24,
  [42] = 42,
  [43] = 43,
  [44] = 25,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 22,
  [52] = 20,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'z') ADVANCE(25);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_class);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_feature);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_feature);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_deferred);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_deferred);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_do);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Result);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Result);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_expanded);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_expanded);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_frozen);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_frozen);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_True);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_False);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_feature] = ACTIONS(1),
    [anon_sym_deferred] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_Result] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_expanded] = ACTIONS(1),
    [anon_sym_frozen] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(89),
    [sym_class_declaration] = STATE(81),
    [sym_header_mark] = STATE(92),
    [sym_notes] = STATE(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_deferred] = ACTIONS(7),
    [anon_sym_expanded] = ACTIONS(7),
    [anon_sym_frozen] = ACTIONS(7),
    [anon_sym_note] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_deferred,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_formal_arguments,
    STATE(6), 1,
      sym__type_mark,
    STATE(10), 1,
      sym_routine_mark,
    STATE(62), 1,
      sym_attribute_or_routine,
    STATE(96), 1,
      sym_feature_body,
    STATE(97), 1,
      sym_internal,
    STATE(98), 1,
      sym_effective_routine,
    ACTIONS(11), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [42] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_expression,
    STATE(41), 1,
      sym_boolean_constant,
    STATE(42), 1,
      sym_variable,
    STATE(43), 1,
      sym_manifest_constant,
    STATE(48), 1,
      sym_manifest_type,
    STATE(52), 1,
      sym_manifest_value,
    ACTIONS(21), 2,
      anon_sym_Result,
      sym_identifier,
    ACTIONS(25), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(40), 2,
      sym_basic_expression,
      sym_special_expression,
  [79] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_deferred,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_COLON,
    STATE(5), 1,
      sym__type_mark,
    STATE(10), 1,
      sym_routine_mark,
    STATE(63), 1,
      sym_attribute_or_routine,
    STATE(96), 1,
      sym_feature_body,
    STATE(97), 1,
      sym_internal,
    STATE(98), 1,
      sym_effective_routine,
    ACTIONS(27), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [115] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_deferred,
    ACTIONS(15), 1,
      anon_sym_do,
    STATE(10), 1,
      sym_routine_mark,
    STATE(58), 1,
      sym_attribute_or_routine,
    STATE(96), 1,
      sym_feature_body,
    STATE(97), 1,
      sym_internal,
    STATE(98), 1,
      sym_effective_routine,
    ACTIONS(29), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [145] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_deferred,
    ACTIONS(15), 1,
      anon_sym_do,
    STATE(10), 1,
      sym_routine_mark,
    STATE(54), 1,
      sym_attribute_or_routine,
    STATE(96), 1,
      sym_feature_body,
    STATE(97), 1,
      sym_internal,
    STATE(98), 1,
      sym_effective_routine,
    ACTIONS(31), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [175] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(18), 1,
      sym_note_item,
    STATE(20), 1,
      sym_manifest_value,
    STATE(24), 1,
      sym_boolean_constant,
    STATE(26), 1,
      sym_manifest_constant,
    STATE(35), 1,
      sym_note_values,
    STATE(45), 1,
      sym_manifest_type,
    ACTIONS(33), 2,
      anon_sym_True,
      anon_sym_False,
  [207] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(19), 1,
      sym_note_item,
    STATE(20), 1,
      sym_manifest_value,
    STATE(24), 1,
      sym_boolean_constant,
    STATE(26), 1,
      sym_manifest_constant,
    STATE(45), 1,
      sym_manifest_type,
    ACTIONS(33), 2,
      anon_sym_True,
      anon_sym_False,
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(37), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [252] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_end,
    STATE(14), 1,
      aux_sym_compound_repeat1,
    STATE(46), 1,
      sym_assignment,
    STATE(47), 1,
      sym_instruction,
    STATE(95), 1,
      sym_variable,
    STATE(103), 1,
      sym_compound,
    ACTIONS(21), 2,
      anon_sym_Result,
      sym_identifier,
  [278] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_end,
    STATE(11), 1,
      aux_sym_compound_repeat1,
    STATE(46), 1,
      sym_assignment,
    STATE(47), 1,
      sym_instruction,
    STATE(95), 1,
      sym_variable,
    ACTIONS(45), 2,
      anon_sym_Result,
      sym_identifier,
  [301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(16), 2,
      sym_note_entry,
      aux_sym_notes_repeat1,
    ACTIONS(48), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_note_values_repeat1,
    ACTIONS(52), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [335] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(11), 1,
      aux_sym_compound_repeat1,
    STATE(46), 1,
      sym_assignment,
    STATE(47), 1,
      sym_instruction,
    STATE(95), 1,
      sym_variable,
    ACTIONS(21), 2,
      anon_sym_Result,
      sym_identifier,
  [358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_note_values_repeat1,
    ACTIONS(59), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(17), 2,
      sym_note_entry,
      aux_sym_notes_repeat1,
    ACTIONS(63), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(17), 2,
      sym_note_entry,
      aux_sym_notes_repeat1,
    ACTIONS(65), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_note_values_repeat1,
    ACTIONS(70), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(52), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(74), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_COLON,
    ACTIONS(78), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(82), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_COLON,
    ACTIONS(86), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(90), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(94), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(98), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_class,
    STATE(94), 1,
      sym_header_mark,
    ACTIONS(7), 3,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [553] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_end,
    ACTIONS(106), 1,
      anon_sym_feature,
    STATE(99), 1,
      sym_features,
    STATE(50), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(108), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(29), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(113), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(29), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
    ACTIONS(119), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [624] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(66), 1,
      sym_entity_declaration_group,
    STATE(80), 1,
      sym_entity_declaration_list,
    STATE(87), 1,
      sym_identifier_list,
  [643] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_feature,
    ACTIONS(127), 1,
      anon_sym_end,
    STATE(105), 1,
      sym_features,
    STATE(50), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(131), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(30), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [686] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_feature,
    ACTIONS(133), 1,
      anon_sym_end,
    STATE(101), 1,
      sym_features,
    STATE(50), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [703] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_feature,
    ACTIONS(135), 1,
      anon_sym_end,
    STATE(79), 1,
      sym_features,
    STATE(50), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    ACTIONS(137), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(141), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(90), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    ACTIONS(145), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    ACTIONS(149), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    ACTIONS(94), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_manifest_value,
    STATE(24), 1,
      sym_boolean_constant,
    ACTIONS(153), 2,
      anon_sym_True,
      anon_sym_False,
  [806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(155), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    ACTIONS(159), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      sym_boolean_constant,
    STATE(51), 1,
      sym_manifest_value,
    ACTIONS(163), 2,
      anon_sym_True,
      anon_sym_False,
  [844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_end,
    ACTIONS(167), 1,
      anon_sym_feature,
    STATE(49), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_feature,
    ACTIONS(170), 1,
      anon_sym_end,
    STATE(49), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    ACTIONS(82), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_SEMI,
    ACTIONS(74), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_identifier_list_repeat1,
  [909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_entity_declaration_list_repeat1,
  [940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_identifier_list_repeat1,
  [953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_end,
      anon_sym_Result,
      sym_identifier,
  [971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_entity_declaration_list_repeat1,
  [984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(74), 1,
      sym_entity_declaration_group,
    STATE(87), 1,
      sym_identifier_list,
  [997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_COLON,
    STATE(53), 1,
      aux_sym_identifier_list_repeat1,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_entity_declaration_list_repeat1,
  [1050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    STATE(31), 1,
      sym_type,
  [1068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(38), 1,
      sym_class_name,
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    STATE(93), 1,
      sym_type,
  [1088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(28), 1,
      sym_class_name,
  [1098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(37), 1,
      sym_class_name,
  [1116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_end,
      anon_sym_feature,
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(34), 1,
      sym_class_name,
  [1142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_identifier,
    STATE(72), 1,
      sym_type,
  [1152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_True,
      anon_sym_False,
  [1160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_end,
  [1167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
  [1174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [1181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
  [1188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_identifier,
  [1195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
  [1202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [1209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [1216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COLON,
  [1223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_class,
  [1244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_COLON,
  [1251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_class,
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
  [1265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_class,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COLON_EQ,
  [1279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_end,
  [1286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_end,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_end,
  [1300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_end,
  [1307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [1314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_end,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
  [1328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_end,
  [1335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
  [1342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 236,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 278,
  [SMALL_STATE(12)] = 301,
  [SMALL_STATE(13)] = 318,
  [SMALL_STATE(14)] = 335,
  [SMALL_STATE(15)] = 358,
  [SMALL_STATE(16)] = 375,
  [SMALL_STATE(17)] = 392,
  [SMALL_STATE(18)] = 409,
  [SMALL_STATE(19)] = 426,
  [SMALL_STATE(20)] = 440,
  [SMALL_STATE(21)] = 454,
  [SMALL_STATE(22)] = 468,
  [SMALL_STATE(23)] = 482,
  [SMALL_STATE(24)] = 496,
  [SMALL_STATE(25)] = 510,
  [SMALL_STATE(26)] = 524,
  [SMALL_STATE(27)] = 538,
  [SMALL_STATE(28)] = 553,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 585,
  [SMALL_STATE(31)] = 600,
  [SMALL_STATE(32)] = 611,
  [SMALL_STATE(33)] = 624,
  [SMALL_STATE(34)] = 643,
  [SMALL_STATE(35)] = 660,
  [SMALL_STATE(36)] = 671,
  [SMALL_STATE(37)] = 686,
  [SMALL_STATE(38)] = 703,
  [SMALL_STATE(39)] = 720,
  [SMALL_STATE(40)] = 732,
  [SMALL_STATE(41)] = 744,
  [SMALL_STATE(42)] = 756,
  [SMALL_STATE(43)] = 768,
  [SMALL_STATE(44)] = 780,
  [SMALL_STATE(45)] = 792,
  [SMALL_STATE(46)] = 806,
  [SMALL_STATE(47)] = 818,
  [SMALL_STATE(48)] = 830,
  [SMALL_STATE(49)] = 844,
  [SMALL_STATE(50)] = 858,
  [SMALL_STATE(51)] = 872,
  [SMALL_STATE(52)] = 884,
  [SMALL_STATE(53)] = 896,
  [SMALL_STATE(54)] = 909,
  [SMALL_STATE(55)] = 918,
  [SMALL_STATE(56)] = 927,
  [SMALL_STATE(57)] = 940,
  [SMALL_STATE(58)] = 953,
  [SMALL_STATE(59)] = 962,
  [SMALL_STATE(60)] = 971,
  [SMALL_STATE(61)] = 984,
  [SMALL_STATE(62)] = 997,
  [SMALL_STATE(63)] = 1006,
  [SMALL_STATE(64)] = 1015,
  [SMALL_STATE(65)] = 1028,
  [SMALL_STATE(66)] = 1037,
  [SMALL_STATE(67)] = 1050,
  [SMALL_STATE(68)] = 1058,
  [SMALL_STATE(69)] = 1068,
  [SMALL_STATE(70)] = 1078,
  [SMALL_STATE(71)] = 1088,
  [SMALL_STATE(72)] = 1098,
  [SMALL_STATE(73)] = 1106,
  [SMALL_STATE(74)] = 1116,
  [SMALL_STATE(75)] = 1124,
  [SMALL_STATE(76)] = 1132,
  [SMALL_STATE(77)] = 1142,
  [SMALL_STATE(78)] = 1152,
  [SMALL_STATE(79)] = 1160,
  [SMALL_STATE(80)] = 1167,
  [SMALL_STATE(81)] = 1174,
  [SMALL_STATE(82)] = 1181,
  [SMALL_STATE(83)] = 1188,
  [SMALL_STATE(84)] = 1195,
  [SMALL_STATE(85)] = 1202,
  [SMALL_STATE(86)] = 1209,
  [SMALL_STATE(87)] = 1216,
  [SMALL_STATE(88)] = 1223,
  [SMALL_STATE(89)] = 1230,
  [SMALL_STATE(90)] = 1237,
  [SMALL_STATE(91)] = 1244,
  [SMALL_STATE(92)] = 1251,
  [SMALL_STATE(93)] = 1258,
  [SMALL_STATE(94)] = 1265,
  [SMALL_STATE(95)] = 1272,
  [SMALL_STATE(96)] = 1279,
  [SMALL_STATE(97)] = 1286,
  [SMALL_STATE(98)] = 1293,
  [SMALL_STATE(99)] = 1300,
  [SMALL_STATE(100)] = 1307,
  [SMALL_STATE(101)] = 1314,
  [SMALL_STATE(102)] = 1321,
  [SMALL_STATE(103)] = 1328,
  [SMALL_STATE(104)] = 1335,
  [SMALL_STATE(105)] = 1342,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 1, .production_id = 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 2, .production_id = 9),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 16),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 2, .production_id = 8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_internal, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(32),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notes, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_values_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_values_repeat1, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_values, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notes, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_notes_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_notes_repeat1, 2), SHIFT_REPEAT(91),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_values, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_values_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_constant, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_constant, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_arguments, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_arguments, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_constant, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_constant, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_arguments, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_arguments, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_value, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_value, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_constant, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_constant, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_item, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_item, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feature_clause_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_feature_clause_repeat1, 2), SHIFT_REPEAT(2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 2, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_mark, 2, .production_id = 13),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_entry, 3, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_expression, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expression, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_expression, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_expression, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_features_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_features_repeat1, 2), SHIFT_REPEAT(36),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_features, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 14),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_routine_mark, 1),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_declaration_list_repeat1, 2), SHIFT_REPEAT(61),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_declaration_list_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(83),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 4, .production_id = 18),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_list, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 2, .production_id = 7),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 15),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_or_routine, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_list, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_group, 3, .production_id = 19),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_type, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, .production_id = 17),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 12),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 11),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 10),
  [236] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_mark, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_routine, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_body, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internal, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eiffel(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
