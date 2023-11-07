#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 26

enum {
  sym_comment = 1,
  sym_header_comment = 2,
  anon_sym_class = 3,
  anon_sym_end = 4,
  anon_sym_feature = 5,
  anon_sym_LBRACE = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACE = 8,
  anon_sym_deferred = 9,
  anon_sym_do = 10,
  anon_sym_SEMI = 11,
  anon_sym_DOT = 12,
  anon_sym_Result = 13,
  anon_sym_Current = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_create = 17,
  anon_sym_COLON_EQ = 18,
  sym_void = 19,
  anon_sym_COLON = 20,
  anon_sym_expanded = 21,
  anon_sym_frozen = 22,
  anon_sym_note = 23,
  anon_sym_DQUOTE = 24,
  sym_string_content = 25,
  anon_sym_e = 26,
  anon_sym_DASH = 27,
  anon_sym_PLUS = 28,
  sym_integer = 29,
  anon_sym_SQUOTE = 30,
  sym_character = 31,
  anon_sym_True = 32,
  anon_sym_False = 33,
  sym_identifier = 34,
  sym_source_file = 35,
  sym_class_declaration = 36,
  sym_features = 37,
  sym_feature_clause = 38,
  sym_clients = 39,
  sym_feature_declaration = 40,
  sym_attribute_or_routine = 41,
  sym_feature_body = 42,
  sym_effective_routine = 43,
  sym_internal = 44,
  sym_routine_mark = 45,
  sym_compound = 46,
  sym_instruction = 47,
  sym_call = 48,
  sym_object_call = 49,
  sym_non_object_call = 50,
  sym_target = 51,
  sym_parenthesized_target = 52,
  sym_creation = 53,
  sym_creation_call = 54,
  sym_unqualified_call = 55,
  sym_actuals = 56,
  sym_assignment = 57,
  sym_variable = 58,
  sym_result = 59,
  sym_expression = 60,
  sym_basic_expression = 61,
  sym_current = 62,
  sym_special_expression = 63,
  sym_manifest_constant = 64,
  sym__type_mark = 65,
  sym_formal_arguments = 66,
  sym_entity_declaration_list = 67,
  sym_entity_declaration_group = 68,
  sym_identifier_list = 69,
  sym_type = 70,
  sym_header_mark = 71,
  sym_notes = 72,
  sym_note_entry = 73,
  sym_note_values = 74,
  sym_note_item = 75,
  sym_manifest_type = 76,
  sym_manifest_value = 77,
  sym_manifest_string = 78,
  sym_basic_manifest_string = 79,
  sym_real_constant = 80,
  sym_real = 81,
  sym_real_exponent = 82,
  sym_integer_constant = 83,
  sym_sign = 84,
  sym_character_constant = 85,
  sym_boolean_constant = 86,
  sym_class_name = 87,
  aux_sym_features_repeat1 = 88,
  aux_sym_feature_clause_repeat1 = 89,
  aux_sym_clients_repeat1 = 90,
  aux_sym_compound_repeat1 = 91,
  aux_sym_actuals_repeat1 = 92,
  aux_sym_entity_declaration_list_repeat1 = 93,
  aux_sym_notes_repeat1 = 94,
  aux_sym_note_values_repeat1 = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_header_comment] = "header_comment",
  [anon_sym_class] = "class",
  [anon_sym_end] = "end",
  [anon_sym_feature] = "feature",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_deferred] = "deferred",
  [anon_sym_do] = "do",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_Result] = "Result",
  [anon_sym_Current] = "Current",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_create] = "create",
  [anon_sym_COLON_EQ] = ":=",
  [sym_void] = "void",
  [anon_sym_COLON] = ":",
  [anon_sym_expanded] = "expanded",
  [anon_sym_frozen] = "frozen",
  [anon_sym_note] = "note",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [anon_sym_e] = "e",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [sym_integer] = "integer",
  [anon_sym_SQUOTE] = "'",
  [sym_character] = "character",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_class_declaration] = "class_declaration",
  [sym_features] = "features",
  [sym_feature_clause] = "feature_clause",
  [sym_clients] = "clients",
  [sym_feature_declaration] = "feature_declaration",
  [sym_attribute_or_routine] = "attribute_or_routine",
  [sym_feature_body] = "feature_body",
  [sym_effective_routine] = "effective_routine",
  [sym_internal] = "internal",
  [sym_routine_mark] = "routine_mark",
  [sym_compound] = "compound",
  [sym_instruction] = "instruction",
  [sym_call] = "call",
  [sym_object_call] = "object_call",
  [sym_non_object_call] = "non_object_call",
  [sym_target] = "target",
  [sym_parenthesized_target] = "parenthesized_target",
  [sym_creation] = "creation",
  [sym_creation_call] = "creation_call",
  [sym_unqualified_call] = "unqualified_call",
  [sym_actuals] = "actuals",
  [sym_assignment] = "assignment",
  [sym_variable] = "variable",
  [sym_result] = "result",
  [sym_expression] = "expression",
  [sym_basic_expression] = "basic_expression",
  [sym_current] = "current",
  [sym_special_expression] = "special_expression",
  [sym_manifest_constant] = "manifest_constant",
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
  [sym_manifest_type] = "manifest_type",
  [sym_manifest_value] = "manifest_value",
  [sym_manifest_string] = "manifest_string",
  [sym_basic_manifest_string] = "basic_manifest_string",
  [sym_real_constant] = "real_constant",
  [sym_real] = "real",
  [sym_real_exponent] = "real_exponent",
  [sym_integer_constant] = "integer_constant",
  [sym_sign] = "sign",
  [sym_character_constant] = "character_constant",
  [sym_boolean_constant] = "boolean_constant",
  [sym_class_name] = "class_name",
  [aux_sym_features_repeat1] = "features_repeat1",
  [aux_sym_feature_clause_repeat1] = "feature_clause_repeat1",
  [aux_sym_clients_repeat1] = "clients_repeat1",
  [aux_sym_compound_repeat1] = "compound_repeat1",
  [aux_sym_actuals_repeat1] = "actuals_repeat1",
  [aux_sym_entity_declaration_list_repeat1] = "entity_declaration_list_repeat1",
  [aux_sym_notes_repeat1] = "notes_repeat1",
  [aux_sym_note_values_repeat1] = "note_values_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_header_comment] = sym_header_comment,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_feature] = anon_sym_feature,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_deferred] = anon_sym_deferred,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Result] = anon_sym_Result,
  [anon_sym_Current] = anon_sym_Current,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_void] = sym_void,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_expanded] = anon_sym_expanded,
  [anon_sym_frozen] = anon_sym_frozen,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_integer] = sym_integer,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_character] = sym_character,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_class_declaration] = sym_class_declaration,
  [sym_features] = sym_features,
  [sym_feature_clause] = sym_feature_clause,
  [sym_clients] = sym_clients,
  [sym_feature_declaration] = sym_feature_declaration,
  [sym_attribute_or_routine] = sym_attribute_or_routine,
  [sym_feature_body] = sym_feature_body,
  [sym_effective_routine] = sym_effective_routine,
  [sym_internal] = sym_internal,
  [sym_routine_mark] = sym_routine_mark,
  [sym_compound] = sym_compound,
  [sym_instruction] = sym_instruction,
  [sym_call] = sym_call,
  [sym_object_call] = sym_object_call,
  [sym_non_object_call] = sym_non_object_call,
  [sym_target] = sym_target,
  [sym_parenthesized_target] = sym_parenthesized_target,
  [sym_creation] = sym_creation,
  [sym_creation_call] = sym_creation_call,
  [sym_unqualified_call] = sym_unqualified_call,
  [sym_actuals] = sym_actuals,
  [sym_assignment] = sym_assignment,
  [sym_variable] = sym_variable,
  [sym_result] = sym_result,
  [sym_expression] = sym_expression,
  [sym_basic_expression] = sym_basic_expression,
  [sym_current] = sym_current,
  [sym_special_expression] = sym_special_expression,
  [sym_manifest_constant] = sym_manifest_constant,
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
  [sym_manifest_type] = sym_manifest_type,
  [sym_manifest_value] = sym_manifest_value,
  [sym_manifest_string] = sym_manifest_string,
  [sym_basic_manifest_string] = sym_basic_manifest_string,
  [sym_real_constant] = sym_real_constant,
  [sym_real] = sym_real,
  [sym_real_exponent] = sym_real_exponent,
  [sym_integer_constant] = sym_integer_constant,
  [sym_sign] = sym_sign,
  [sym_character_constant] = sym_character_constant,
  [sym_boolean_constant] = sym_boolean_constant,
  [sym_class_name] = sym_class_name,
  [aux_sym_features_repeat1] = aux_sym_features_repeat1,
  [aux_sym_feature_clause_repeat1] = aux_sym_feature_clause_repeat1,
  [aux_sym_clients_repeat1] = aux_sym_clients_repeat1,
  [aux_sym_compound_repeat1] = aux_sym_compound_repeat1,
  [aux_sym_actuals_repeat1] = aux_sym_actuals_repeat1,
  [aux_sym_entity_declaration_list_repeat1] = aux_sym_entity_declaration_list_repeat1,
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
  [sym_header_comment] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Current] = {
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
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_void] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
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
  [sym_clients] = {
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
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_object_call] = {
    .visible = true,
    .named = true,
  },
  [sym_non_object_call] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_target] = {
    .visible = true,
    .named = true,
  },
  [sym_creation] = {
    .visible = true,
    .named = true,
  },
  [sym_creation_call] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_call] = {
    .visible = true,
    .named = true,
  },
  [sym_actuals] = {
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
  [sym_result] = {
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
  [sym_current] = {
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
  [sym_manifest_type] = {
    .visible = true,
    .named = true,
  },
  [sym_manifest_value] = {
    .visible = true,
    .named = true,
  },
  [sym_manifest_string] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_manifest_string] = {
    .visible = true,
    .named = true,
  },
  [sym_real_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [sym_real_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_character_constant] = {
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
  [aux_sym_clients_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_actuals_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_declaration_list_repeat1] = {
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
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 3},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 1},
  [16] = {.index = 29, .length = 4},
  [17] = {.index = 33, .length = 3},
  [18] = {.index = 36, .length = 4},
  [19] = {.index = 40, .length = 1},
  [20] = {.index = 41, .length = 4},
  [21] = {.index = 45, .length = 4},
  [22] = {.index = 49, .length = 3},
  [23] = {.index = 52, .length = 5},
  [24] = {.index = 57, .length = 2},
  [25] = {.index = 59, .length = 5},
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
    {field_declarations, 2},
  [10] =
    {field_attribute_or_routine, 1},
    {field_name, 0},
  [12] =
    {field_name, 0},
    {field_query_mark, 1},
    {field_type, 1, .inherited = true},
  [15] =
    {field_arguments, 1},
    {field_name, 0},
  [17] =
    {field_features, 3},
    {field_mark, 0},
    {field_name, 2},
  [20] =
    {field_features, 3},
    {field_name, 2},
    {field_notes, 0},
  [23] =
    {field_mark, 1},
    {field_name, 3},
    {field_notes, 0},
  [26] =
    {field_attribute_or_routine, 2},
    {field_name, 0},
  [28] =
    {field_type, 1},
  [29] =
    {field_attribute_or_routine, 2},
    {field_name, 0},
    {field_query_mark, 1},
    {field_type, 1, .inherited = true},
  [33] =
    {field_arguments, 1},
    {field_attribute_or_routine, 2},
    {field_name, 0},
  [36] =
    {field_arguments, 1},
    {field_name, 0},
    {field_query_mark, 2},
    {field_type, 2, .inherited = true},
  [40] =
    {field_declarations, 3},
  [41] =
    {field_features, 4},
    {field_mark, 1},
    {field_name, 3},
    {field_notes, 0},
  [45] =
    {field_attribute_or_routine, 3},
    {field_name, 0},
    {field_query_mark, 1},
    {field_type, 1, .inherited = true},
  [49] =
    {field_arguments, 1},
    {field_attribute_or_routine, 3},
    {field_name, 0},
  [52] =
    {field_arguments, 1},
    {field_attribute_or_routine, 3},
    {field_name, 0},
    {field_query_mark, 2},
    {field_type, 2, .inherited = true},
  [57] =
    {field_identifiers, 0},
    {field_type, 2},
  [59] =
    {field_arguments, 1},
    {field_attribute_or_routine, 4},
    {field_name, 0},
    {field_query_mark, 2},
    {field_type, 2, .inherited = true},
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
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 14,
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
  [32] = 23,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 40,
  [41] = 35,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 40,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 43,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 14,
  [73] = 64,
  [74] = 74,
  [75] = 75,
  [76] = 55,
  [77] = 56,
  [78] = 78,
  [79] = 57,
  [80] = 80,
  [81] = 59,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 71,
  [86] = 86,
  [87] = 67,
  [88] = 65,
  [89] = 61,
  [90] = 90,
  [91] = 70,
  [92] = 92,
  [93] = 69,
  [94] = 63,
  [95] = 95,
  [96] = 50,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 14,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 101,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 142,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 14,
  [159] = 159,
  [160] = 151,
  [161] = 161,
  [162] = 162,
  [163] = 151,
  [164] = 151,
  [165] = 165,
  [166] = 151,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 151,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 202,
  [204] = 204,
  [205] = 181,
  [206] = 180,
  [207] = 178,
  [208] = 208,
  [209] = 189,
  [210] = 181,
  [211] = 181,
  [212] = 181,
  [213] = 181,
  [214] = 214,
  [215] = 199,
  [216] = 196,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
};

static inline bool sym_string_content_character_set_1(int32_t c) {
  return (c < '@'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '%' || c == '\''))
    : (c <= '@' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= '^')
      : (c <= '`' || (c >= '{' && c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(73);
      if (lookahead == 'F') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == 'V') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == 'V') ADVANCE(166);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(186);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(17)
      if (lookahead != 0 &&
          (lookahead < '"' || '%' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(126);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 77:
      if (lookahead == 'z') ADVANCE(41);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_header_comment);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_class);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_feature);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_feature);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_deferred);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_deferred);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_do);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_Result);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_Result);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_Current);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Current);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_create);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_void);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_void);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_expanded);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_expanded);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_frozen);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_frozen);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\t' ||
          ('"' <= lookahead && lookahead <= '%') ||
          lookahead == '\'' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(1);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (!sym_string_content_character_set_1(lookahead)) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '-') ADVANCE(115);
      if (!sym_string_content_character_set_1(lookahead)) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string_content);
      if (!sym_string_content_character_set_1(lookahead)) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (!sym_string_content_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_True);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_False);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 16},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 16},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 16},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 116},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 116},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_feature] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_deferred] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Result] = ACTIONS(1),
    [anon_sym_Current] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_void] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_expanded] = ACTIONS(1),
    [anon_sym_frozen] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(198),
    [sym_class_declaration] = STATE(193),
    [sym_header_mark] = STATE(186),
    [sym_notes] = STATE(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_deferred] = ACTIONS(7),
    [anon_sym_expanded] = ACTIONS(7),
    [anon_sym_frozen] = ACTIONS(7),
    [anon_sym_note] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_Result,
    ACTIONS(17), 1,
      anon_sym_Current,
    ACTIONS(19), 1,
      sym_void,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      sym_integer,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(11), 1,
      sym_manifest_type,
    STATE(18), 1,
      sym_result,
    STATE(26), 1,
      sym_manifest_constant,
    STATE(87), 1,
      sym_manifest_value,
    STATE(91), 1,
      sym_basic_manifest_string,
    STATE(93), 1,
      sym_real,
    STATE(145), 1,
      sym_sign,
    STATE(218), 1,
      sym_expression,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(25), 2,
      sym_variable,
      sym_current,
    STATE(28), 2,
      sym_basic_expression,
      sym_special_expression,
    STATE(89), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [80] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_Result,
    ACTIONS(17), 1,
      anon_sym_Current,
    ACTIONS(19), 1,
      sym_void,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      sym_integer,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(11), 1,
      sym_manifest_type,
    STATE(18), 1,
      sym_result,
    STATE(26), 1,
      sym_manifest_constant,
    STATE(87), 1,
      sym_manifest_value,
    STATE(91), 1,
      sym_basic_manifest_string,
    STATE(93), 1,
      sym_real,
    STATE(145), 1,
      sym_sign,
    STATE(171), 1,
      sym_expression,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(25), 2,
      sym_variable,
      sym_current,
    STATE(28), 2,
      sym_basic_expression,
      sym_special_expression,
    STATE(89), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [160] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_Result,
    ACTIONS(17), 1,
      anon_sym_Current,
    ACTIONS(19), 1,
      sym_void,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_integer,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym_manifest_type,
    STATE(18), 1,
      sym_result,
    STATE(26), 1,
      sym_manifest_constant,
    STATE(58), 1,
      sym_expression,
    STATE(67), 1,
      sym_manifest_value,
    STATE(69), 1,
      sym_real,
    STATE(70), 1,
      sym_basic_manifest_string,
    STATE(142), 1,
      sym_sign,
    ACTIONS(45), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(25), 2,
      sym_variable,
      sym_current,
    STATE(28), 2,
      sym_basic_expression,
      sym_special_expression,
    STATE(61), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [240] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_Result,
    ACTIONS(17), 1,
      anon_sym_Current,
    ACTIONS(19), 1,
      sym_void,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      sym_integer,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(11), 1,
      sym_manifest_type,
    STATE(18), 1,
      sym_result,
    STATE(26), 1,
      sym_manifest_constant,
    STATE(87), 1,
      sym_manifest_value,
    STATE(91), 1,
      sym_basic_manifest_string,
    STATE(93), 1,
      sym_real,
    STATE(138), 1,
      sym_expression,
    STATE(145), 1,
      sym_sign,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(25), 2,
      sym_variable,
      sym_current,
    STATE(28), 2,
      sym_basic_expression,
      sym_special_expression,
    STATE(89), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [320] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_integer,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_manifest_value,
    STATE(69), 1,
      sym_real,
    STATE(70), 1,
      sym_basic_manifest_string,
    STATE(142), 1,
      sym_sign,
    ACTIONS(45), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(51), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(47), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    STATE(61), 6,
      sym_manifest_type,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [380] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      sym_integer,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_manifest_value,
    STATE(91), 1,
      sym_basic_manifest_string,
    STATE(93), 1,
      sym_real,
    STATE(145), 1,
      sym_sign,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(47), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
    STATE(89), 6,
      sym_manifest_type,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [439] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      sym_integer,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(7), 1,
      sym_manifest_type,
    STATE(86), 1,
      sym_note_item,
    STATE(87), 1,
      sym_manifest_value,
    STATE(91), 1,
      sym_basic_manifest_string,
    STATE(93), 1,
      sym_real,
    STATE(98), 1,
      sym_manifest_constant,
    STATE(106), 1,
      sym_note_values,
    STATE(145), 1,
      sym_sign,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(89), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [502] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      sym_integer,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(7), 1,
      sym_manifest_type,
    STATE(87), 1,
      sym_manifest_value,
    STATE(91), 1,
      sym_basic_manifest_string,
    STATE(93), 1,
      sym_real,
    STATE(98), 1,
      sym_manifest_constant,
    STATE(100), 1,
      sym_note_item,
    STATE(145), 1,
      sym_sign,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(89), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [562] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_end,
    ACTIONS(61), 1,
      anon_sym_Result,
    ACTIONS(63), 1,
      anon_sym_Current,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_create,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym_compound_repeat1,
    STATE(18), 1,
      sym_result,
    STATE(46), 1,
      sym_call,
    STATE(47), 1,
      sym_unqualified_call,
    STATE(53), 1,
      sym_instruction,
    STATE(173), 1,
      sym_parenthesized_target,
    STATE(200), 1,
      sym_compound,
    STATE(208), 1,
      sym_target,
    STATE(214), 1,
      sym_variable,
    STATE(217), 1,
      sym_manifest_type,
    STATE(38), 2,
      sym_object_call,
      sym_non_object_call,
    STATE(52), 2,
      sym_creation,
      sym_assignment,
  [625] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      sym_integer,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_manifest_value,
    STATE(91), 1,
      sym_basic_manifest_string,
    STATE(93), 1,
      sym_real,
    STATE(145), 1,
      sym_sign,
    ACTIONS(51), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(71), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(89), 6,
      sym_manifest_type,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [678] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_Result,
    ACTIONS(63), 1,
      anon_sym_Current,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_create,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_end,
    STATE(13), 1,
      aux_sym_compound_repeat1,
    STATE(18), 1,
      sym_result,
    STATE(46), 1,
      sym_call,
    STATE(47), 1,
      sym_unqualified_call,
    STATE(53), 1,
      sym_instruction,
    STATE(173), 1,
      sym_parenthesized_target,
    STATE(208), 1,
      sym_target,
    STATE(214), 1,
      sym_variable,
    STATE(217), 1,
      sym_manifest_type,
    STATE(38), 2,
      sym_object_call,
      sym_non_object_call,
    STATE(52), 2,
      sym_creation,
      sym_assignment,
  [738] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_end,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_Result,
    ACTIONS(83), 1,
      anon_sym_Current,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_create,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym_compound_repeat1,
    STATE(18), 1,
      sym_result,
    STATE(46), 1,
      sym_call,
    STATE(47), 1,
      sym_unqualified_call,
    STATE(53), 1,
      sym_instruction,
    STATE(173), 1,
      sym_parenthesized_target,
    STATE(208), 1,
      sym_target,
    STATE(214), 1,
      sym_variable,
    STATE(217), 1,
      sym_manifest_type,
    STATE(38), 2,
      sym_object_call,
      sym_non_object_call,
    STATE(52), 2,
      sym_creation,
      sym_assignment,
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 8,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      anon_sym_DASH,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(97), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      sym_integer,
      anon_sym_SQUOTE,
  [822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 8,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      anon_sym_DASH,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
    ACTIONS(97), 8,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      sym_integer,
      anon_sym_SQUOTE,
  [846] = 14,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_header_comment,
    ACTIONS(105), 1,
      anon_sym_deferred,
    ACTIONS(107), 1,
      anon_sym_do,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_COLON,
    STATE(10), 1,
      sym_routine_mark,
    STATE(17), 1,
      sym_formal_arguments,
    STATE(22), 1,
      sym__type_mark,
    STATE(140), 1,
      sym_attribute_or_routine,
    STATE(183), 1,
      sym_internal,
    STATE(184), 1,
      sym_feature_body,
    STATE(188), 1,
      sym_effective_routine,
    ACTIONS(103), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [891] = 12,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_deferred,
    ACTIONS(107), 1,
      anon_sym_do,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      sym_header_comment,
    STATE(10), 1,
      sym_routine_mark,
    STATE(21), 1,
      sym__type_mark,
    STATE(134), 1,
      sym_attribute_or_routine,
    STATE(183), 1,
      sym_internal,
    STATE(184), 1,
      sym_feature_body,
    STATE(188), 1,
      sym_effective_routine,
    ACTIONS(115), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(119), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
  [950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(97), 10,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      sym_integer,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_False,
  [969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(123), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [988] = 10,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_deferred,
    ACTIONS(107), 1,
      anon_sym_do,
    ACTIONS(125), 1,
      sym_header_comment,
    STATE(10), 1,
      sym_routine_mark,
    STATE(144), 1,
      sym_attribute_or_routine,
    STATE(183), 1,
      sym_internal,
    STATE(184), 1,
      sym_feature_body,
    STATE(188), 1,
      sym_effective_routine,
    ACTIONS(127), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1021] = 10,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_deferred,
    ACTIONS(107), 1,
      anon_sym_do,
    ACTIONS(129), 1,
      sym_header_comment,
    STATE(10), 1,
      sym_routine_mark,
    STATE(135), 1,
      sym_attribute_or_routine,
    STATE(183), 1,
      sym_internal,
    STATE(184), 1,
      sym_feature_body,
    STATE(188), 1,
      sym_effective_routine,
    ACTIONS(131), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1054] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_e,
    ACTIONS(139), 1,
      sym_integer,
    STATE(57), 1,
      sym_real_exponent,
    ACTIONS(135), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(133), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1079] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_COLON_EQ,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_actuals,
    ACTIONS(143), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
    ACTIONS(141), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(149), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(153), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(157), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(161), 5,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1176] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_deferred,
    ACTIONS(107), 1,
      anon_sym_do,
    STATE(10), 1,
      sym_routine_mark,
    STATE(146), 1,
      sym_attribute_or_routine,
    STATE(183), 1,
      sym_internal,
    STATE(184), 1,
      sym_feature_body,
    STATE(188), 1,
      sym_effective_routine,
    ACTIONS(163), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1206] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_deferred,
    ACTIONS(107), 1,
      anon_sym_do,
    STATE(10), 1,
      sym_routine_mark,
    STATE(136), 1,
      sym_attribute_or_routine,
    STATE(183), 1,
      sym_internal,
    STATE(184), 1,
      sym_feature_body,
    STATE(188), 1,
      sym_effective_routine,
    ACTIONS(165), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1236] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_deferred,
    ACTIONS(107), 1,
      anon_sym_do,
    STATE(10), 1,
      sym_routine_mark,
    STATE(130), 1,
      sym_attribute_or_routine,
    STATE(183), 1,
      sym_internal,
    STATE(184), 1,
      sym_feature_body,
    STATE(188), 1,
      sym_effective_routine,
    ACTIONS(167), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_e,
    ACTIONS(171), 1,
      sym_integer,
    STATE(79), 1,
      sym_real_exponent,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(133), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [1290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_actuals,
    ACTIONS(143), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
    ACTIONS(141), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1312] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_deferred,
    ACTIONS(107), 1,
      anon_sym_do,
    STATE(10), 1,
      sym_routine_mark,
    STATE(128), 1,
      sym_attribute_or_routine,
    STATE(183), 1,
      sym_internal,
    STATE(184), 1,
      sym_feature_body,
    STATE(188), 1,
      sym_effective_routine,
    ACTIONS(173), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_e,
    STATE(57), 1,
      sym_real_exponent,
    ACTIONS(135), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(133), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1364] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_e,
    STATE(63), 1,
      sym_real_exponent,
    ACTIONS(177), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(175), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(179), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(183), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_e,
    STATE(94), 1,
      sym_real_exponent,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(175), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(189), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(187), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1460] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_e,
    STATE(79), 1,
      sym_real_exponent,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(133), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [1481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(193), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(199), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(197), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(201), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(205), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(211), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(209), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(215), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(219), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(225), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(223), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(229), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(233), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(209), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    ACTIONS(239), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(237), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(243), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(247), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(251), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(175), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(255), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(259), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1785] = 7,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_header_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(97), 1,
      sym_clients,
    ACTIONS(265), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(111), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [1809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(47), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(187), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [1843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(273), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(277), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(281), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(197), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [1909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(285), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(289), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(293), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(297), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(301), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(95), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [2005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(277), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(75), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [2035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_note_values_repeat1,
    ACTIONS(307), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(247), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(251), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_note_values_repeat1,
    ACTIONS(312), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(175), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2114] = 3,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(316), 2,
      sym_header_comment,
      anon_sym_COLON,
    ACTIONS(318), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [2129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(259), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(82), 2,
      sym_note_entry,
      aux_sym_notes_repeat1,
    ACTIONS(320), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [2161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(92), 2,
      sym_note_entry,
      aux_sym_notes_repeat1,
    ACTIONS(325), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [2178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(329), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [2193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(301), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_note_values_repeat1,
    ACTIONS(333), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(285), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(281), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(47), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2270] = 3,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(335), 2,
      sym_header_comment,
      anon_sym_COLON,
    ACTIONS(337), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [2285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(297), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(82), 2,
      sym_note_entry,
      aux_sym_notes_repeat1,
    ACTIONS(339), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [2317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(293), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(273), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2347] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_Result,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_result,
    STATE(49), 1,
      sym_variable,
    STATE(68), 1,
      sym_creation_call,
    STATE(115), 1,
      sym_manifest_type,
  [2372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(229), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2387] = 5,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(343), 1,
      sym_header_comment,
    ACTIONS(345), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(109), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [2405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(347), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2419] = 3,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_header_comment,
    ACTIONS(353), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [2433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(307), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2447] = 3,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_header_comment,
    ACTIONS(359), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [2461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(95), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(361), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(104), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [2490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(363), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(104), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [2505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(368), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(103), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [2520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_end,
    ACTIONS(374), 1,
      anon_sym_feature,
    STATE(172), 1,
      sym_features,
    STATE(117), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [2548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_feature,
    ACTIONS(376), 1,
      anon_sym_end,
    STATE(219), 1,
      sym_features,
    STATE(117), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [2565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(378), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(104), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [2580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_class,
    STATE(195), 1,
      sym_header_mark,
    ACTIONS(7), 3,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [2595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(382), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(104), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [2610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_feature,
    ACTIONS(384), 1,
      anon_sym_end,
    STATE(192), 1,
      sym_features,
    STATE(117), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [2627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(345), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(109), 2,
      sym_feature_declaration,
      aux_sym_feature_clause_repeat1,
  [2642] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(137), 1,
      sym_entity_declaration_group,
    STATE(179), 1,
      sym_entity_declaration_list,
    STATE(185), 1,
      sym_identifier_list,
  [2661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_Result,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(18), 1,
      sym_result,
    STATE(49), 1,
      sym_variable,
    STATE(54), 1,
      sym_creation_call,
  [2680] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_feature,
    ACTIONS(390), 1,
      anon_sym_end,
    STATE(190), 1,
      sym_features,
    STATE(117), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [2697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_feature,
    ACTIONS(392), 1,
      anon_sym_end,
    STATE(121), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [2711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(394), 1,
      sym_integer,
    STATE(189), 1,
      sym_sign,
  [2727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(396), 1,
      sym_integer,
    STATE(209), 1,
      sym_sign,
  [2743] = 3,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_header_comment,
    ACTIONS(400), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_end,
    ACTIONS(404), 1,
      anon_sym_feature,
    STATE(121), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [2769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_clients_repeat1,
    ACTIONS(410), 2,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [2783] = 3,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_header_comment,
    ACTIONS(414), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2795] = 3,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_header_comment,
    ACTIONS(418), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_actuals_repeat1,
  [2820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_actuals_repeat1,
  [2833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      aux_sym_clients_repeat1,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_COLON,
    STATE(122), 1,
      aux_sym_clients_repeat1,
  [2868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(157), 1,
      sym_entity_declaration_group,
    STATE(185), 1,
      sym_identifier_list,
  [2890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_entity_declaration_list_repeat1,
  [2903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_COLON,
    STATE(129), 1,
      aux_sym_clients_repeat1,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_entity_declaration_list_repeat1,
  [2956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_actuals_repeat1,
  [2969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_entity_declaration_list_repeat1,
  [3000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(462), 1,
      sym_integer,
    STATE(59), 1,
      sym_real,
  [3013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [3022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [3031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(468), 1,
      sym_integer,
    STATE(81), 1,
      sym_real,
  [3044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [3053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      aux_sym_clients_repeat1,
  [3066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [3075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(45), 1,
      sym_unqualified_call,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_identifier,
    STATE(116), 1,
      sym_class_name,
  [3095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(213), 1,
      sym_type,
  [3105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_identifier,
    STATE(112), 1,
      sym_class_name,
  [3115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(37), 1,
      sym_unqualified_call,
  [3125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COLON_EQ,
    ACTIONS(213), 1,
      anon_sym_DOT,
  [3135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(99), 1,
      sym_type,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOT,
      sym_integer,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [3161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_Result,
      sym_identifier,
  [3169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [3177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(181), 1,
      sym_type,
  [3187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(51), 1,
      sym_unqualified_call,
  [3197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_identifier,
    STATE(108), 1,
      sym_class_name,
  [3207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(205), 1,
      sym_type,
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(210), 1,
      sym_type,
  [3227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_end,
      anon_sym_feature,
  [3235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(211), 1,
      sym_type,
  [3245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    ACTIONS(490), 1,
      sym_identifier,
  [3255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(159), 1,
      sym_type,
  [3265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_identifier,
    STATE(107), 1,
      sym_class_name,
  [3275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(212), 1,
      sym_type,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_end,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DOT,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
  [3321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_SQUOTE,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_COLON,
  [3370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_end,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_end,
  [3384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_COLON,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_class,
  [3398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_DOT,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_end,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_integer,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_end,
  [3426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_end,
  [3440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
  [3454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_class,
  [3461] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_character,
  [3468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
  [3475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
  [3482] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_string_content,
  [3489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_end,
  [3496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_class,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_integer,
  [3510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_integer,
  [3517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
  [3524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
  [3531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
  [3538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_SQUOTE,
  [3545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_DOT,
  [3552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_integer,
  [3559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
  [3566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
  [3573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
  [3580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
  [3587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COLON_EQ,
  [3594] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_string_content,
  [3601] = 2,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_character,
  [3608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_DOT,
  [3615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [3622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_end,
  [3629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 240,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 380,
  [SMALL_STATE(8)] = 439,
  [SMALL_STATE(9)] = 502,
  [SMALL_STATE(10)] = 562,
  [SMALL_STATE(11)] = 625,
  [SMALL_STATE(12)] = 678,
  [SMALL_STATE(13)] = 738,
  [SMALL_STATE(14)] = 798,
  [SMALL_STATE(15)] = 822,
  [SMALL_STATE(16)] = 846,
  [SMALL_STATE(17)] = 891,
  [SMALL_STATE(18)] = 930,
  [SMALL_STATE(19)] = 950,
  [SMALL_STATE(20)] = 969,
  [SMALL_STATE(21)] = 988,
  [SMALL_STATE(22)] = 1021,
  [SMALL_STATE(23)] = 1054,
  [SMALL_STATE(24)] = 1079,
  [SMALL_STATE(25)] = 1104,
  [SMALL_STATE(26)] = 1122,
  [SMALL_STATE(27)] = 1140,
  [SMALL_STATE(28)] = 1158,
  [SMALL_STATE(29)] = 1176,
  [SMALL_STATE(30)] = 1206,
  [SMALL_STATE(31)] = 1236,
  [SMALL_STATE(32)] = 1266,
  [SMALL_STATE(33)] = 1290,
  [SMALL_STATE(34)] = 1312,
  [SMALL_STATE(35)] = 1342,
  [SMALL_STATE(36)] = 1364,
  [SMALL_STATE(37)] = 1386,
  [SMALL_STATE(38)] = 1403,
  [SMALL_STATE(39)] = 1420,
  [SMALL_STATE(40)] = 1441,
  [SMALL_STATE(41)] = 1460,
  [SMALL_STATE(42)] = 1481,
  [SMALL_STATE(43)] = 1498,
  [SMALL_STATE(44)] = 1517,
  [SMALL_STATE(45)] = 1534,
  [SMALL_STATE(46)] = 1551,
  [SMALL_STATE(47)] = 1570,
  [SMALL_STATE(48)] = 1587,
  [SMALL_STATE(49)] = 1604,
  [SMALL_STATE(50)] = 1623,
  [SMALL_STATE(51)] = 1639,
  [SMALL_STATE(52)] = 1655,
  [SMALL_STATE(53)] = 1671,
  [SMALL_STATE(54)] = 1689,
  [SMALL_STATE(55)] = 1705,
  [SMALL_STATE(56)] = 1721,
  [SMALL_STATE(57)] = 1737,
  [SMALL_STATE(58)] = 1753,
  [SMALL_STATE(59)] = 1769,
  [SMALL_STATE(60)] = 1785,
  [SMALL_STATE(61)] = 1809,
  [SMALL_STATE(62)] = 1825,
  [SMALL_STATE(63)] = 1843,
  [SMALL_STATE(64)] = 1859,
  [SMALL_STATE(65)] = 1875,
  [SMALL_STATE(66)] = 1891,
  [SMALL_STATE(67)] = 1909,
  [SMALL_STATE(68)] = 1925,
  [SMALL_STATE(69)] = 1941,
  [SMALL_STATE(70)] = 1957,
  [SMALL_STATE(71)] = 1973,
  [SMALL_STATE(72)] = 1989,
  [SMALL_STATE(73)] = 2005,
  [SMALL_STATE(74)] = 2020,
  [SMALL_STATE(75)] = 2035,
  [SMALL_STATE(76)] = 2052,
  [SMALL_STATE(77)] = 2067,
  [SMALL_STATE(78)] = 2082,
  [SMALL_STATE(79)] = 2099,
  [SMALL_STATE(80)] = 2114,
  [SMALL_STATE(81)] = 2129,
  [SMALL_STATE(82)] = 2144,
  [SMALL_STATE(83)] = 2161,
  [SMALL_STATE(84)] = 2178,
  [SMALL_STATE(85)] = 2193,
  [SMALL_STATE(86)] = 2208,
  [SMALL_STATE(87)] = 2225,
  [SMALL_STATE(88)] = 2240,
  [SMALL_STATE(89)] = 2255,
  [SMALL_STATE(90)] = 2270,
  [SMALL_STATE(91)] = 2285,
  [SMALL_STATE(92)] = 2300,
  [SMALL_STATE(93)] = 2317,
  [SMALL_STATE(94)] = 2332,
  [SMALL_STATE(95)] = 2347,
  [SMALL_STATE(96)] = 2372,
  [SMALL_STATE(97)] = 2387,
  [SMALL_STATE(98)] = 2405,
  [SMALL_STATE(99)] = 2419,
  [SMALL_STATE(100)] = 2433,
  [SMALL_STATE(101)] = 2447,
  [SMALL_STATE(102)] = 2461,
  [SMALL_STATE(103)] = 2475,
  [SMALL_STATE(104)] = 2490,
  [SMALL_STATE(105)] = 2505,
  [SMALL_STATE(106)] = 2520,
  [SMALL_STATE(107)] = 2531,
  [SMALL_STATE(108)] = 2548,
  [SMALL_STATE(109)] = 2565,
  [SMALL_STATE(110)] = 2580,
  [SMALL_STATE(111)] = 2595,
  [SMALL_STATE(112)] = 2610,
  [SMALL_STATE(113)] = 2627,
  [SMALL_STATE(114)] = 2642,
  [SMALL_STATE(115)] = 2661,
  [SMALL_STATE(116)] = 2680,
  [SMALL_STATE(117)] = 2697,
  [SMALL_STATE(118)] = 2711,
  [SMALL_STATE(119)] = 2727,
  [SMALL_STATE(120)] = 2743,
  [SMALL_STATE(121)] = 2755,
  [SMALL_STATE(122)] = 2769,
  [SMALL_STATE(123)] = 2783,
  [SMALL_STATE(124)] = 2795,
  [SMALL_STATE(125)] = 2807,
  [SMALL_STATE(126)] = 2820,
  [SMALL_STATE(127)] = 2833,
  [SMALL_STATE(128)] = 2846,
  [SMALL_STATE(129)] = 2855,
  [SMALL_STATE(130)] = 2868,
  [SMALL_STATE(131)] = 2877,
  [SMALL_STATE(132)] = 2890,
  [SMALL_STATE(133)] = 2903,
  [SMALL_STATE(134)] = 2916,
  [SMALL_STATE(135)] = 2925,
  [SMALL_STATE(136)] = 2934,
  [SMALL_STATE(137)] = 2943,
  [SMALL_STATE(138)] = 2956,
  [SMALL_STATE(139)] = 2969,
  [SMALL_STATE(140)] = 2978,
  [SMALL_STATE(141)] = 2987,
  [SMALL_STATE(142)] = 3000,
  [SMALL_STATE(143)] = 3013,
  [SMALL_STATE(144)] = 3022,
  [SMALL_STATE(145)] = 3031,
  [SMALL_STATE(146)] = 3044,
  [SMALL_STATE(147)] = 3053,
  [SMALL_STATE(148)] = 3066,
  [SMALL_STATE(149)] = 3075,
  [SMALL_STATE(150)] = 3085,
  [SMALL_STATE(151)] = 3095,
  [SMALL_STATE(152)] = 3105,
  [SMALL_STATE(153)] = 3115,
  [SMALL_STATE(154)] = 3125,
  [SMALL_STATE(155)] = 3135,
  [SMALL_STATE(156)] = 3145,
  [SMALL_STATE(157)] = 3153,
  [SMALL_STATE(158)] = 3161,
  [SMALL_STATE(159)] = 3169,
  [SMALL_STATE(160)] = 3177,
  [SMALL_STATE(161)] = 3187,
  [SMALL_STATE(162)] = 3197,
  [SMALL_STATE(163)] = 3207,
  [SMALL_STATE(164)] = 3217,
  [SMALL_STATE(165)] = 3227,
  [SMALL_STATE(166)] = 3235,
  [SMALL_STATE(167)] = 3245,
  [SMALL_STATE(168)] = 3255,
  [SMALL_STATE(169)] = 3265,
  [SMALL_STATE(170)] = 3275,
  [SMALL_STATE(171)] = 3285,
  [SMALL_STATE(172)] = 3293,
  [SMALL_STATE(173)] = 3300,
  [SMALL_STATE(174)] = 3307,
  [SMALL_STATE(175)] = 3314,
  [SMALL_STATE(176)] = 3321,
  [SMALL_STATE(177)] = 3328,
  [SMALL_STATE(178)] = 3335,
  [SMALL_STATE(179)] = 3342,
  [SMALL_STATE(180)] = 3349,
  [SMALL_STATE(181)] = 3356,
  [SMALL_STATE(182)] = 3363,
  [SMALL_STATE(183)] = 3370,
  [SMALL_STATE(184)] = 3377,
  [SMALL_STATE(185)] = 3384,
  [SMALL_STATE(186)] = 3391,
  [SMALL_STATE(187)] = 3398,
  [SMALL_STATE(188)] = 3405,
  [SMALL_STATE(189)] = 3412,
  [SMALL_STATE(190)] = 3419,
  [SMALL_STATE(191)] = 3426,
  [SMALL_STATE(192)] = 3433,
  [SMALL_STATE(193)] = 3440,
  [SMALL_STATE(194)] = 3447,
  [SMALL_STATE(195)] = 3454,
  [SMALL_STATE(196)] = 3461,
  [SMALL_STATE(197)] = 3468,
  [SMALL_STATE(198)] = 3475,
  [SMALL_STATE(199)] = 3482,
  [SMALL_STATE(200)] = 3489,
  [SMALL_STATE(201)] = 3496,
  [SMALL_STATE(202)] = 3503,
  [SMALL_STATE(203)] = 3510,
  [SMALL_STATE(204)] = 3517,
  [SMALL_STATE(205)] = 3524,
  [SMALL_STATE(206)] = 3531,
  [SMALL_STATE(207)] = 3538,
  [SMALL_STATE(208)] = 3545,
  [SMALL_STATE(209)] = 3552,
  [SMALL_STATE(210)] = 3559,
  [SMALL_STATE(211)] = 3566,
  [SMALL_STATE(212)] = 3573,
  [SMALL_STATE(213)] = 3580,
  [SMALL_STATE(214)] = 3587,
  [SMALL_STATE(215)] = 3594,
  [SMALL_STATE(216)] = 3601,
  [SMALL_STATE(217)] = 3608,
  [SMALL_STATE(218)] = 3615,
  [SMALL_STATE(219)] = 3622,
  [SMALL_STATE(220)] = 3629,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_value, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_value, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_internal, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(160),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(154),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(173),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(95),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(24),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_type, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_type, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 1, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 2, .production_id = 10),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 18),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 2, .production_id = 9),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_call, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_call, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_expression, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expression, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_expression, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_expression, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_current, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_current, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 10),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 9),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 4, .production_id = 18),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 2, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_call, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_call, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_constant, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_constant, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actuals, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actuals, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_constant, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_constant, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actuals, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actuals, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_object_call, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_object_call, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_call, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_call, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_call, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_call, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation_call, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creation_call, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_exponent, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_exponent, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation_call, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creation_call, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_repeat1, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creation, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_constant, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_constant, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_manifest_string, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_manifest_string, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_constant, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_constant, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_constant, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_constant, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_exponent, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_exponent, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_constant, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_constant, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creation, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_constant, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_constant, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_string, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_string, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_constant, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_constant, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_values_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_values_repeat1, 2), SHIFT_REPEAT(9),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_values, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_arguments, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_arguments, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_notes_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_notes_repeat1, 2), SHIFT_REPEAT(182),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notes, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_routine_mark, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine_mark, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_values, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_arguments, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_arguments, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notes, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_item, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_item, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_mark, 2, .production_id = 15),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_mark, 2, .production_id = 15),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_values_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 4, .production_id = 19),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feature_clause_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_feature_clause_repeat1, 2), SHIFT_REPEAT(16),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_entry, 3, .production_id = 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 3, .production_id = 7),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 2, .production_id = 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_features, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clients, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clients, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_features_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_features_repeat1, 2), SHIFT_REPEAT(60),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clients_repeat1, 2), SHIFT_REPEAT(176),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clients_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clients, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clients, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clients, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clients, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actuals_repeat1, 2), SHIFT_REPEAT(3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actuals_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 14),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 5, .production_id = 25),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_list, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 17),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 16),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 4, .production_id = 21),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_list, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 2, .production_id = 8),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_declaration_list_repeat1, 2), SHIFT_REPEAT(131),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_declaration_list_repeat1, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_or_routine, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 4, .production_id = 23),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 4, .production_id = 22),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sign, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_group, 3, .production_id = 24),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, .production_id = 20),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 12),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 11),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_routine, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_target, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_body, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 6),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 5),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 13),
  [542] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internal, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_mark, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, .production_id = 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 4),
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
