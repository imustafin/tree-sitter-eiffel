#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 206
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 20

enum {
  aux_sym_comment_token1 = 1,
  sym_comment_start = 2,
  anon_sym_class = 3,
  anon_sym_end = 4,
  anon_sym_feature = 5,
  anon_sym_deferred = 6,
  anon_sym_do = 7,
  anon_sym_SEMI = 8,
  anon_sym_DOT = 9,
  anon_sym_Result = 10,
  anon_sym_Current = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_create = 14,
  anon_sym_COMMA = 15,
  anon_sym_COLON_EQ = 16,
  sym_void = 17,
  anon_sym_COLON = 18,
  anon_sym_expanded = 19,
  anon_sym_frozen = 20,
  anon_sym_note = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
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
  sym_comment = 36,
  sym_class_declaration = 37,
  sym_features = 38,
  sym_feature_clause = 39,
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
  aux_sym_compound_repeat1 = 90,
  aux_sym_actuals_repeat1 = 91,
  aux_sym_entity_declaration_list_repeat1 = 92,
  aux_sym_identifier_list_repeat1 = 93,
  aux_sym_notes_repeat1 = 94,
  aux_sym_note_values_repeat1 = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_comment_start] = "comment_start",
  [anon_sym_class] = "class",
  [anon_sym_end] = "end",
  [anon_sym_feature] = "feature",
  [anon_sym_deferred] = "deferred",
  [anon_sym_do] = "do",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_Result] = "Result",
  [anon_sym_Current] = "Current",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_create] = "create",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON_EQ] = ":=",
  [sym_void] = "void",
  [anon_sym_COLON] = ":",
  [anon_sym_expanded] = "expanded",
  [anon_sym_frozen] = "frozen",
  [anon_sym_note] = "note",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_comment] = "comment",
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
  [aux_sym_compound_repeat1] = "compound_repeat1",
  [aux_sym_actuals_repeat1] = "actuals_repeat1",
  [aux_sym_entity_declaration_list_repeat1] = "entity_declaration_list_repeat1",
  [aux_sym_identifier_list_repeat1] = "identifier_list_repeat1",
  [aux_sym_notes_repeat1] = "notes_repeat1",
  [aux_sym_note_values_repeat1] = "note_values_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_comment_start] = sym_comment_start,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_feature] = anon_sym_feature,
  [anon_sym_deferred] = anon_sym_deferred,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Result] = anon_sym_Result,
  [anon_sym_Current] = anon_sym_Current,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_void] = sym_void,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_expanded] = anon_sym_expanded,
  [anon_sym_frozen] = anon_sym_frozen,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_comment] = sym_comment,
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
  [aux_sym_compound_repeat1] = aux_sym_compound_repeat1,
  [aux_sym_actuals_repeat1] = aux_sym_actuals_repeat1,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment_start] = {
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
  [anon_sym_COMMA] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_comment] = {
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
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 6,
  [11] = 11,
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
  [28] = 20,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 29,
  [39] = 30,
  [40] = 40,
  [41] = 41,
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
  [52] = 14,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 34,
  [58] = 43,
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
  [69] = 56,
  [70] = 49,
  [71] = 71,
  [72] = 62,
  [73] = 61,
  [74] = 74,
  [75] = 75,
  [76] = 59,
  [77] = 77,
  [78] = 78,
  [79] = 66,
  [80] = 51,
  [81] = 81,
  [82] = 82,
  [83] = 46,
  [84] = 84,
  [85] = 67,
  [86] = 68,
  [87] = 87,
  [88] = 53,
  [89] = 50,
  [90] = 48,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 14,
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
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 111,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 115,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 137,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 14,
  [143] = 143,
  [144] = 144,
  [145] = 137,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 137,
  [151] = 137,
  [152] = 137,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
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
  [188] = 175,
  [189] = 189,
  [190] = 156,
  [191] = 177,
  [192] = 176,
  [193] = 193,
  [194] = 172,
  [195] = 156,
  [196] = 156,
  [197] = 156,
  [198] = 156,
  [199] = 199,
  [200] = 173,
  [201] = 169,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
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
      if (eof) ADVANCE(72);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == 'V') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(140);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(140);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == 'V') ADVANCE(163);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'R') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ';') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'R') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(140);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(14)
      if (lookahead != 0 &&
          (lookahead < '"' || '%' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 71:
      if (lookahead == 'z') ADVANCE(35);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment_start);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment_start);
      if (!sym_string_content_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment_start);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_class);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_feature);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_feature);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_deferred);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_deferred);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_do);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Result);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Result);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Current);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Current);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_create);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_void);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_void);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_expanded);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_expanded);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_frozen);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_frozen);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (!sym_string_content_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '-') ADVANCE(77);
      if (!sym_string_content_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string_content);
      if (!sym_string_content_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'x') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (!sym_string_content_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_True);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_False);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 113},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 73},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 1},
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
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 113},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 0},
  [205] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment_start] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_feature] = ACTIONS(1),
    [anon_sym_deferred] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Result] = ACTIONS(1),
    [anon_sym_Current] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_void] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_expanded] = ACTIONS(1),
    [anon_sym_frozen] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(178),
    [sym_comment] = STATE(1),
    [sym_class_declaration] = STATE(171),
    [sym_header_mark] = STATE(170),
    [sym_notes] = STATE(97),
    [sym_comment_start] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_deferred] = ACTIONS(7),
    [anon_sym_expanded] = ACTIONS(7),
    [anon_sym_frozen] = ACTIONS(7),
    [anon_sym_note] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_Result,
    ACTIONS(15), 1,
      anon_sym_Current,
    ACTIONS(17), 1,
      sym_void,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
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
    STATE(2), 1,
      sym_comment,
    STATE(10), 1,
      sym_manifest_type,
    STATE(17), 1,
      sym_result,
    STATE(27), 1,
      sym_manifest_constant,
    STATE(88), 1,
      sym_real,
    STATE(89), 1,
      sym_manifest_value,
    STATE(90), 1,
      sym_basic_manifest_string,
    STATE(115), 1,
      sym_sign,
    STATE(193), 1,
      sym_expression,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(23), 2,
      sym_variable,
      sym_current,
    STATE(31), 2,
      sym_basic_expression,
      sym_special_expression,
    STATE(70), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [83] = 25,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(13), 1,
      anon_sym_Result,
    ACTIONS(15), 1,
      anon_sym_Current,
    ACTIONS(17), 1,
      sym_void,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_integer,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_manifest_type,
    STATE(17), 1,
      sym_result,
    STATE(27), 1,
      sym_manifest_constant,
    STATE(48), 1,
      sym_basic_manifest_string,
    STATE(50), 1,
      sym_manifest_value,
    STATE(53), 1,
      sym_real,
    STATE(55), 1,
      sym_expression,
    STATE(129), 1,
      sym_sign,
    ACTIONS(45), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(23), 2,
      sym_variable,
      sym_current,
    STATE(31), 2,
      sym_basic_expression,
      sym_special_expression,
    STATE(49), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [166] = 25,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_Result,
    ACTIONS(15), 1,
      anon_sym_Current,
    ACTIONS(17), 1,
      sym_void,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
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
    STATE(4), 1,
      sym_comment,
    STATE(10), 1,
      sym_manifest_type,
    STATE(17), 1,
      sym_result,
    STATE(27), 1,
      sym_manifest_constant,
    STATE(88), 1,
      sym_real,
    STATE(89), 1,
      sym_manifest_value,
    STATE(90), 1,
      sym_basic_manifest_string,
    STATE(115), 1,
      sym_sign,
    STATE(120), 1,
      sym_expression,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(23), 2,
      sym_variable,
      sym_current,
    STATE(31), 2,
      sym_basic_expression,
      sym_special_expression,
    STATE(70), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [249] = 25,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_Result,
    ACTIONS(15), 1,
      anon_sym_Current,
    ACTIONS(17), 1,
      sym_void,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
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
    STATE(5), 1,
      sym_comment,
    STATE(10), 1,
      sym_manifest_type,
    STATE(17), 1,
      sym_result,
    STATE(27), 1,
      sym_manifest_constant,
    STATE(88), 1,
      sym_real,
    STATE(89), 1,
      sym_manifest_value,
    STATE(90), 1,
      sym_basic_manifest_string,
    STATE(115), 1,
      sym_sign,
    STATE(149), 1,
      sym_expression,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(23), 2,
      sym_variable,
      sym_current,
    STATE(31), 2,
      sym_basic_expression,
      sym_special_expression,
    STATE(70), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [332] = 17,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_integer,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_comment,
    STATE(48), 1,
      sym_basic_manifest_string,
    STATE(53), 1,
      sym_real,
    STATE(56), 1,
      sym_manifest_value,
    STATE(129), 1,
      sym_sign,
    ACTIONS(45), 2,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(49), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(47), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    STATE(49), 6,
      sym_manifest_type,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [395] = 17,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(11), 1,
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
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(69), 1,
      sym_manifest_value,
    STATE(88), 1,
      sym_real,
    STATE(90), 1,
      sym_basic_manifest_string,
    STATE(115), 1,
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
    STATE(70), 6,
      sym_manifest_type,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [457] = 20,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(11), 1,
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
    STATE(8), 1,
      sym_comment,
    STATE(87), 1,
      sym_note_item,
    STATE(88), 1,
      sym_real,
    STATE(89), 1,
      sym_manifest_value,
    STATE(90), 1,
      sym_basic_manifest_string,
    STATE(94), 1,
      sym_manifest_constant,
    STATE(96), 1,
      sym_note_values,
    STATE(115), 1,
      sym_sign,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(70), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [523] = 19,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(11), 1,
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
    STATE(9), 1,
      sym_comment,
    STATE(88), 1,
      sym_real,
    STATE(89), 1,
      sym_manifest_value,
    STATE(90), 1,
      sym_basic_manifest_string,
    STATE(91), 1,
      sym_note_item,
    STATE(94), 1,
      sym_manifest_constant,
    STATE(115), 1,
      sym_sign,
    ACTIONS(31), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(70), 5,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [586] = 16,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(11), 1,
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
    STATE(10), 1,
      sym_comment,
    STATE(69), 1,
      sym_manifest_value,
    STATE(88), 1,
      sym_real,
    STATE(90), 1,
      sym_basic_manifest_string,
    STATE(115), 1,
      sym_sign,
    ACTIONS(49), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(59), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(70), 6,
      sym_manifest_type,
      sym_manifest_string,
      sym_real_constant,
      sym_integer_constant,
      sym_character_constant,
      sym_boolean_constant,
  [642] = 21,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      anon_sym_end,
    ACTIONS(63), 1,
      anon_sym_Result,
    ACTIONS(65), 1,
      anon_sym_Current,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_create,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_compound_repeat1,
    STATE(17), 1,
      sym_result,
    STATE(35), 1,
      sym_unqualified_call,
    STATE(37), 1,
      sym_call,
    STATE(65), 1,
      sym_instruction,
    STATE(160), 1,
      sym_manifest_type,
    STATE(164), 1,
      sym_compound,
    STATE(174), 1,
      sym_target,
    STATE(180), 1,
      sym_parenthesized_target,
    STATE(185), 1,
      sym_variable,
    STATE(36), 2,
      sym_object_call,
      sym_non_object_call,
    STATE(64), 2,
      sym_creation,
      sym_assignment,
  [708] = 19,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(73), 1,
      anon_sym_end,
    ACTIONS(75), 1,
      anon_sym_Result,
    ACTIONS(78), 1,
      anon_sym_Current,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_create,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(17), 1,
      sym_result,
    STATE(35), 1,
      sym_unqualified_call,
    STATE(37), 1,
      sym_call,
    STATE(65), 1,
      sym_instruction,
    STATE(160), 1,
      sym_manifest_type,
    STATE(174), 1,
      sym_target,
    STATE(180), 1,
      sym_parenthesized_target,
    STATE(185), 1,
      sym_variable,
    STATE(12), 2,
      sym_comment,
      aux_sym_compound_repeat1,
    STATE(36), 2,
      sym_object_call,
      sym_non_object_call,
    STATE(64), 2,
      sym_creation,
      sym_assignment,
  [769] = 20,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_Result,
    ACTIONS(65), 1,
      anon_sym_Current,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_create,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_end,
    STATE(12), 1,
      aux_sym_compound_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(17), 1,
      sym_result,
    STATE(35), 1,
      sym_unqualified_call,
    STATE(37), 1,
      sym_call,
    STATE(65), 1,
      sym_instruction,
    STATE(160), 1,
      sym_manifest_type,
    STATE(174), 1,
      sym_target,
    STATE(180), 1,
      sym_parenthesized_target,
    STATE(185), 1,
      sym_variable,
    STATE(36), 2,
      sym_object_call,
      sym_non_object_call,
    STATE(64), 2,
      sym_creation,
      sym_assignment,
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(14), 1,
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
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      sym_integer,
      anon_sym_SQUOTE,
  [859] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(15), 1,
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
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      sym_integer,
      anon_sym_SQUOTE,
  [886] = 14,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(101), 1,
      anon_sym_deferred,
    ACTIONS(103), 1,
      anon_sym_do,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(11), 1,
      sym_routine_mark,
    STATE(16), 1,
      sym_comment,
    STATE(18), 1,
      sym_formal_arguments,
    STATE(24), 1,
      sym__type_mark,
    STATE(127), 1,
      sym_attribute_or_routine,
    STATE(181), 1,
      sym_effective_routine,
    STATE(183), 1,
      sym_internal,
    STATE(187), 1,
      sym_feature_body,
    ACTIONS(99), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [931] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(17), 1,
      sym_comment,
    ACTIONS(109), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(111), 7,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_LBRACE,
  [954] = 12,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(101), 1,
      anon_sym_deferred,
    ACTIONS(103), 1,
      anon_sym_do,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(11), 1,
      sym_routine_mark,
    STATE(18), 1,
      sym_comment,
    STATE(25), 1,
      sym__type_mark,
    STATE(117), 1,
      sym_attribute_or_routine,
    STATE(181), 1,
      sym_effective_routine,
    STATE(183), 1,
      sym_internal,
    STATE(187), 1,
      sym_feature_body,
    ACTIONS(113), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [993] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(95), 1,
      anon_sym_DASH,
    STATE(19), 1,
      sym_comment,
    ACTIONS(97), 10,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      sym_integer,
      anon_sym_SQUOTE,
      anon_sym_True,
      anon_sym_False,
  [1015] = 7,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(119), 1,
      anon_sym_e,
    ACTIONS(121), 1,
      sym_integer,
    STATE(20), 1,
      sym_comment,
    STATE(59), 1,
      sym_real_exponent,
    ACTIONS(117), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(115), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1043] = 7,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(111), 1,
      anon_sym_COLON_EQ,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_comment,
    STATE(41), 1,
      sym_actuals,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
    ACTIONS(123), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1071] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(22), 1,
      sym_comment,
    ACTIONS(129), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(131), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1093] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(23), 1,
      sym_comment,
    ACTIONS(133), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(135), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1114] = 10,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(101), 1,
      anon_sym_deferred,
    ACTIONS(103), 1,
      anon_sym_do,
    STATE(11), 1,
      sym_routine_mark,
    STATE(24), 1,
      sym_comment,
    STATE(116), 1,
      sym_attribute_or_routine,
    STATE(181), 1,
      sym_effective_routine,
    STATE(183), 1,
      sym_internal,
    STATE(187), 1,
      sym_feature_body,
    ACTIONS(137), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1147] = 10,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(101), 1,
      anon_sym_deferred,
    ACTIONS(103), 1,
      anon_sym_do,
    STATE(11), 1,
      sym_routine_mark,
    STATE(25), 1,
      sym_comment,
    STATE(113), 1,
      sym_attribute_or_routine,
    STATE(181), 1,
      sym_effective_routine,
    STATE(183), 1,
      sym_internal,
    STATE(187), 1,
      sym_feature_body,
    ACTIONS(139), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [1180] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(26), 1,
      sym_comment,
    ACTIONS(141), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(143), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1201] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(27), 1,
      sym_comment,
    ACTIONS(145), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(147), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1222] = 7,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(149), 1,
      anon_sym_e,
    ACTIONS(151), 1,
      sym_integer,
    STATE(28), 1,
      sym_comment,
    STATE(76), 1,
      sym_real_exponent,
    ACTIONS(117), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(115), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [1249] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(119), 1,
      anon_sym_e,
    STATE(29), 1,
      sym_comment,
    STATE(59), 1,
      sym_real_exponent,
    ACTIONS(117), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(115), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1274] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(119), 1,
      anon_sym_e,
    STATE(30), 1,
      sym_comment,
    STATE(67), 1,
      sym_real_exponent,
    ACTIONS(155), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(153), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1299] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(31), 1,
      sym_comment,
    ACTIONS(157), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
    ACTIONS(159), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1320] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_comment,
    STATE(41), 1,
      sym_actuals,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
    ACTIONS(123), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1345] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(33), 1,
      sym_comment,
    ACTIONS(163), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(161), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1365] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(169), 1,
      anon_sym_DOT,
    STATE(34), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(165), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1387] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(35), 1,
      sym_comment,
    ACTIONS(173), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(171), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1407] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(36), 1,
      sym_comment,
    ACTIONS(177), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(175), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1427] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(183), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(179), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1449] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(149), 1,
      anon_sym_e,
    STATE(38), 1,
      sym_comment,
    STATE(76), 1,
      sym_real_exponent,
    ACTIONS(117), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(115), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [1473] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(149), 1,
      anon_sym_e,
    STATE(39), 1,
      sym_comment,
    STATE(85), 1,
      sym_real_exponent,
    ACTIONS(155), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(153), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [1497] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(189), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(185), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1519] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(41), 1,
      sym_comment,
    ACTIONS(193), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(191), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1539] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(42), 1,
      sym_comment,
    ACTIONS(197), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(195), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1559] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(169), 1,
      anon_sym_DOT,
    STATE(43), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(199), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1581] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(44), 1,
      sym_comment,
    ACTIONS(205), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(203), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1601] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(45), 1,
      sym_comment,
    ACTIONS(209), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(207), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1621] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(46), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(211), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1640] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(47), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(215), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1659] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(48), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(219), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1678] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(49), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(47), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1697] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(50), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(223), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1716] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(51), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(227), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1735] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(52), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(95), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1754] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(53), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(231), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1773] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(54), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(235), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1792] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(55), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(239), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1811] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(56), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(243), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1830] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(57), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(165), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [1851] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(58), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(199), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [1872] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(59), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(153), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1891] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(60), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(249), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1910] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(61), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(253), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1929] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(62), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(257), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1948] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(63), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(261), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [1967] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(64), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(179), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [1986] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(265), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [2007] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(66), 1,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(271), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [2026] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(67), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(275), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [2045] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(68), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(279), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [2064] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(69), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(243), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2082] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(70), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(47), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2100] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(71), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(283), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [2118] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(72), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(257), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2136] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(73), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(253), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2154] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(74), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_notes_repeat1,
    STATE(99), 1,
      sym_note_entry,
    ACTIONS(287), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [2176] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(74), 1,
      aux_sym_notes_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(99), 1,
      sym_note_entry,
    ACTIONS(291), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [2198] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(76), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(153), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2216] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    STATE(77), 2,
      sym_comment,
      aux_sym_note_values_repeat1,
    ACTIONS(293), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2234] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(78), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(73), 5,
      anon_sym_end,
      anon_sym_Result,
      anon_sym_Current,
      anon_sym_create,
      sym_identifier,
  [2252] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(79), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(271), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2270] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(80), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(227), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2288] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_note_values_repeat1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(300), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2308] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(99), 1,
      sym_note_entry,
    STATE(82), 2,
      sym_comment,
      aux_sym_notes_repeat1,
    ACTIONS(304), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [2328] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(83), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(211), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2346] = 9,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(13), 1,
      anon_sym_Result,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_result,
    STATE(40), 1,
      sym_variable,
    STATE(60), 1,
      sym_creation_call,
    STATE(84), 1,
      sym_comment,
    STATE(101), 1,
      sym_manifest_type,
  [2374] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(85), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(275), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2392] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(86), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(279), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2410] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_note_values_repeat1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(311), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2430] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(88), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(231), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2448] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(89), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(223), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2466] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(90), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(219), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2484] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2501] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(317), 1,
      anon_sym_COLON,
    STATE(92), 1,
      sym_comment,
    ACTIONS(315), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [2518] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(321), 1,
      anon_sym_COLON,
    STATE(93), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [2535] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2552] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      sym_comment,
    ACTIONS(95), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2569] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(96), 1,
      sym_comment,
    ACTIONS(327), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2583] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(329), 1,
      anon_sym_class,
    STATE(97), 1,
      sym_comment,
    STATE(199), 1,
      sym_header_mark,
    ACTIONS(7), 3,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [2601] = 7,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(331), 1,
      anon_sym_end,
    ACTIONS(333), 1,
      anon_sym_feature,
    STATE(98), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_features_repeat1,
    STATE(153), 1,
      sym_feature_clause,
    STATE(159), 1,
      sym_features,
  [2623] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(99), 1,
      sym_comment,
    ACTIONS(335), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [2637] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(114), 1,
      sym_feature_declaration,
    ACTIONS(337), 2,
      anon_sym_end,
      anon_sym_feature,
    STATE(100), 2,
      sym_comment,
      aux_sym_feature_clause_repeat1,
  [2655] = 7,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(13), 1,
      anon_sym_Result,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(17), 1,
      sym_result,
    STATE(40), 1,
      sym_variable,
    STATE(47), 1,
      sym_creation_call,
    STATE(101), 1,
      sym_comment,
  [2677] = 7,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(333), 1,
      anon_sym_feature,
    ACTIONS(342), 1,
      anon_sym_end,
    STATE(102), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_features_repeat1,
    STATE(153), 1,
      sym_feature_clause,
    STATE(165), 1,
      sym_features,
  [2699] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(103), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_feature_clause_repeat1,
    STATE(114), 1,
      sym_feature_declaration,
    ACTIONS(344), 2,
      anon_sym_end,
      anon_sym_feature,
  [2719] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(104), 1,
      sym_comment,
    ACTIONS(348), 5,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_deferred,
      anon_sym_do,
      sym_identifier,
  [2733] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(100), 1,
      aux_sym_feature_clause_repeat1,
    STATE(105), 1,
      sym_comment,
    STATE(114), 1,
      sym_feature_declaration,
    ACTIONS(350), 2,
      anon_sym_end,
      anon_sym_feature,
  [2753] = 7,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(333), 1,
      anon_sym_feature,
    ACTIONS(352), 1,
      anon_sym_end,
    STATE(106), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_features_repeat1,
    STATE(153), 1,
      sym_feature_clause,
    STATE(189), 1,
      sym_features,
  [2775] = 7,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(333), 1,
      anon_sym_feature,
    ACTIONS(354), 1,
      anon_sym_end,
    STATE(107), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_features_repeat1,
    STATE(153), 1,
      sym_feature_clause,
    STATE(161), 1,
      sym_features,
  [2797] = 7,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(108), 1,
      sym_comment,
    STATE(121), 1,
      sym_entity_declaration_group,
    STATE(158), 1,
      sym_identifier_list,
    STATE(163), 1,
      sym_entity_declaration_list,
  [2819] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(360), 1,
      anon_sym_end,
    ACTIONS(362), 1,
      anon_sym_feature,
    STATE(153), 1,
      sym_feature_clause,
    STATE(109), 2,
      sym_comment,
      aux_sym_features_repeat1,
  [2836] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(333), 1,
      anon_sym_feature,
    ACTIONS(365), 1,
      anon_sym_end,
    STATE(109), 1,
      aux_sym_features_repeat1,
    STATE(110), 1,
      sym_comment,
    STATE(153), 1,
      sym_feature_clause,
  [2855] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(367), 1,
      sym_integer,
    STATE(111), 1,
      sym_comment,
    STATE(172), 1,
      sym_sign,
  [2874] = 6,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(369), 1,
      sym_integer,
    STATE(112), 1,
      sym_comment,
    STATE(194), 1,
      sym_sign,
  [2893] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(113), 1,
      sym_comment,
    ACTIONS(371), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2905] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(114), 1,
      sym_comment,
    ACTIONS(373), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2917] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(375), 1,
      sym_integer,
    STATE(83), 1,
      sym_real,
    STATE(115), 1,
      sym_comment,
  [2933] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(116), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2945] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(117), 1,
      sym_comment,
    ACTIONS(379), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2957] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym_actuals_repeat1,
  [2973] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(119), 1,
      sym_comment,
    ACTIONS(385), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [2985] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_actuals_repeat1,
    STATE(120), 1,
      sym_comment,
  [3001] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_entity_declaration_list_repeat1,
  [3017] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_COLON,
    STATE(122), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_identifier_list_repeat1,
  [3033] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(123), 1,
      sym_comment,
    STATE(144), 1,
      sym_entity_declaration_group,
    STATE(158), 1,
      sym_identifier_list,
  [3049] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym_entity_declaration_list_repeat1,
  [3065] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(125), 2,
      sym_comment,
      aux_sym_entity_declaration_list_repeat1,
  [3079] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_COLON,
    STATE(126), 2,
      sym_comment,
      aux_sym_identifier_list_repeat1,
  [3093] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(127), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_end,
      anon_sym_feature,
      sym_identifier,
  [3105] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(128), 2,
      sym_comment,
      aux_sym_actuals_repeat1,
  [3119] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      sym_integer,
    STATE(46), 1,
      sym_real,
    STATE(129), 1,
      sym_comment,
  [3135] = 5,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_COLON,
    STATE(122), 1,
      aux_sym_identifier_list_repeat1,
    STATE(130), 1,
      sym_comment,
  [3151] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(42), 1,
      sym_unqualified_call,
    STATE(131), 1,
      sym_comment,
  [3164] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(132), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [3175] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(104), 1,
      sym_type,
    STATE(133), 1,
      sym_comment,
  [3188] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(131), 1,
      anon_sym_COLON_EQ,
    ACTIONS(183), 1,
      anon_sym_DOT,
    STATE(134), 1,
      sym_comment,
  [3201] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(102), 1,
      sym_class_name,
    STATE(135), 1,
      sym_comment,
  [3214] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(33), 1,
      sym_unqualified_call,
    STATE(136), 1,
      sym_comment,
  [3227] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(137), 1,
      sym_comment,
    STATE(198), 1,
      sym_type,
  [3240] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(138), 1,
      sym_comment,
    STATE(156), 1,
      sym_type,
  [3253] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(139), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_DOT,
      sym_integer,
  [3264] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(98), 1,
      sym_class_name,
    STATE(140), 1,
      sym_comment,
  [3277] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(107), 1,
      sym_class_name,
    STATE(141), 1,
      sym_comment,
  [3290] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(142), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_Result,
      sym_identifier,
  [3301] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(106), 1,
      sym_class_name,
    STATE(143), 1,
      sym_comment,
  [3314] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(144), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [3325] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(145), 1,
      sym_comment,
    STATE(190), 1,
      sym_type,
  [3338] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(146), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [3349] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(146), 1,
      sym_type,
    STATE(147), 1,
      sym_comment,
  [3362] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(54), 1,
      sym_unqualified_call,
    STATE(148), 1,
      sym_comment,
  [3375] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(149), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3386] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(150), 1,
      sym_comment,
    STATE(195), 1,
      sym_type,
  [3399] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(151), 1,
      sym_comment,
    STATE(196), 1,
      sym_type,
  [3412] = 4,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(152), 1,
      sym_comment,
    STATE(197), 1,
      sym_type,
  [3425] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(153), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_end,
      anon_sym_feature,
  [3436] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    STATE(154), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_end,
      anon_sym_feature,
  [3447] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(434), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym_comment,
  [3457] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_comment,
  [3467] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_comment,
  [3477] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(440), 1,
      anon_sym_COLON,
    STATE(158), 1,
      sym_comment,
  [3487] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(442), 1,
      anon_sym_end,
    STATE(159), 1,
      sym_comment,
  [3497] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(444), 1,
      anon_sym_DOT,
    STATE(160), 1,
      sym_comment,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(446), 1,
      anon_sym_end,
    STATE(161), 1,
      sym_comment,
  [3517] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(448), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym_comment,
  [3527] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym_comment,
  [3537] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(452), 1,
      anon_sym_end,
    STATE(164), 1,
      sym_comment,
  [3547] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(454), 1,
      anon_sym_end,
    STATE(165), 1,
      sym_comment,
  [3557] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      sym_comment,
  [3567] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_comment,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
      sym_comment,
  [3587] = 3,
    ACTIONS(462), 1,
      sym_comment_start,
    ACTIONS(464), 1,
      sym_character,
    STATE(169), 1,
      sym_comment,
  [3597] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(466), 1,
      anon_sym_class,
    STATE(170), 1,
      sym_comment,
  [3607] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      sym_comment,
  [3617] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(470), 1,
      sym_integer,
    STATE(172), 1,
      sym_comment,
  [3627] = 3,
    ACTIONS(462), 1,
      sym_comment_start,
    ACTIONS(472), 1,
      sym_string_content,
    STATE(173), 1,
      sym_comment,
  [3637] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(474), 1,
      anon_sym_DOT,
    STATE(174), 1,
      sym_comment,
  [3647] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(476), 1,
      sym_integer,
    STATE(175), 1,
      sym_comment,
  [3657] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(478), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      sym_comment,
  [3667] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      sym_comment,
  [3677] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_comment,
  [3687] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_comment,
  [3697] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(183), 1,
      anon_sym_DOT,
    STATE(180), 1,
      sym_comment,
  [3707] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(486), 1,
      anon_sym_end,
    STATE(181), 1,
      sym_comment,
  [3717] = 3,
    ACTIONS(462), 1,
      sym_comment_start,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    STATE(182), 1,
      sym_comment,
  [3727] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(490), 1,
      anon_sym_end,
    STATE(183), 1,
      sym_comment,
  [3737] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(492), 1,
      anon_sym_class,
    STATE(184), 1,
      sym_comment,
  [3747] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(494), 1,
      anon_sym_COLON_EQ,
    STATE(185), 1,
      sym_comment,
  [3757] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(186), 1,
      sym_comment,
  [3767] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(498), 1,
      anon_sym_end,
    STATE(187), 1,
      sym_comment,
  [3777] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(500), 1,
      sym_integer,
    STATE(188), 1,
      sym_comment,
  [3787] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(502), 1,
      anon_sym_end,
    STATE(189), 1,
      sym_comment,
  [3797] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      sym_comment,
  [3807] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_comment,
  [3817] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    STATE(192), 1,
      sym_comment,
  [3827] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_comment,
  [3837] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(512), 1,
      sym_integer,
    STATE(194), 1,
      sym_comment,
  [3847] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_comment,
  [3857] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_comment,
  [3867] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_comment,
  [3877] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_comment,
  [3887] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(522), 1,
      anon_sym_class,
    STATE(199), 1,
      sym_comment,
  [3897] = 3,
    ACTIONS(462), 1,
      sym_comment_start,
    ACTIONS(524), 1,
      sym_string_content,
    STATE(200), 1,
      sym_comment,
  [3907] = 3,
    ACTIONS(462), 1,
      sym_comment_start,
    ACTIONS(526), 1,
      sym_character,
    STATE(201), 1,
      sym_comment,
  [3917] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    STATE(202), 1,
      sym_comment,
  [3927] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(203), 1,
      sym_comment,
  [3937] = 3,
    ACTIONS(3), 1,
      sym_comment_start,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_comment,
  [3947] = 1,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 249,
  [SMALL_STATE(6)] = 332,
  [SMALL_STATE(7)] = 395,
  [SMALL_STATE(8)] = 457,
  [SMALL_STATE(9)] = 523,
  [SMALL_STATE(10)] = 586,
  [SMALL_STATE(11)] = 642,
  [SMALL_STATE(12)] = 708,
  [SMALL_STATE(13)] = 769,
  [SMALL_STATE(14)] = 832,
  [SMALL_STATE(15)] = 859,
  [SMALL_STATE(16)] = 886,
  [SMALL_STATE(17)] = 931,
  [SMALL_STATE(18)] = 954,
  [SMALL_STATE(19)] = 993,
  [SMALL_STATE(20)] = 1015,
  [SMALL_STATE(21)] = 1043,
  [SMALL_STATE(22)] = 1071,
  [SMALL_STATE(23)] = 1093,
  [SMALL_STATE(24)] = 1114,
  [SMALL_STATE(25)] = 1147,
  [SMALL_STATE(26)] = 1180,
  [SMALL_STATE(27)] = 1201,
  [SMALL_STATE(28)] = 1222,
  [SMALL_STATE(29)] = 1249,
  [SMALL_STATE(30)] = 1274,
  [SMALL_STATE(31)] = 1299,
  [SMALL_STATE(32)] = 1320,
  [SMALL_STATE(33)] = 1345,
  [SMALL_STATE(34)] = 1365,
  [SMALL_STATE(35)] = 1387,
  [SMALL_STATE(36)] = 1407,
  [SMALL_STATE(37)] = 1427,
  [SMALL_STATE(38)] = 1449,
  [SMALL_STATE(39)] = 1473,
  [SMALL_STATE(40)] = 1497,
  [SMALL_STATE(41)] = 1519,
  [SMALL_STATE(42)] = 1539,
  [SMALL_STATE(43)] = 1559,
  [SMALL_STATE(44)] = 1581,
  [SMALL_STATE(45)] = 1601,
  [SMALL_STATE(46)] = 1621,
  [SMALL_STATE(47)] = 1640,
  [SMALL_STATE(48)] = 1659,
  [SMALL_STATE(49)] = 1678,
  [SMALL_STATE(50)] = 1697,
  [SMALL_STATE(51)] = 1716,
  [SMALL_STATE(52)] = 1735,
  [SMALL_STATE(53)] = 1754,
  [SMALL_STATE(54)] = 1773,
  [SMALL_STATE(55)] = 1792,
  [SMALL_STATE(56)] = 1811,
  [SMALL_STATE(57)] = 1830,
  [SMALL_STATE(58)] = 1851,
  [SMALL_STATE(59)] = 1872,
  [SMALL_STATE(60)] = 1891,
  [SMALL_STATE(61)] = 1910,
  [SMALL_STATE(62)] = 1929,
  [SMALL_STATE(63)] = 1948,
  [SMALL_STATE(64)] = 1967,
  [SMALL_STATE(65)] = 1986,
  [SMALL_STATE(66)] = 2007,
  [SMALL_STATE(67)] = 2026,
  [SMALL_STATE(68)] = 2045,
  [SMALL_STATE(69)] = 2064,
  [SMALL_STATE(70)] = 2082,
  [SMALL_STATE(71)] = 2100,
  [SMALL_STATE(72)] = 2118,
  [SMALL_STATE(73)] = 2136,
  [SMALL_STATE(74)] = 2154,
  [SMALL_STATE(75)] = 2176,
  [SMALL_STATE(76)] = 2198,
  [SMALL_STATE(77)] = 2216,
  [SMALL_STATE(78)] = 2234,
  [SMALL_STATE(79)] = 2252,
  [SMALL_STATE(80)] = 2270,
  [SMALL_STATE(81)] = 2288,
  [SMALL_STATE(82)] = 2308,
  [SMALL_STATE(83)] = 2328,
  [SMALL_STATE(84)] = 2346,
  [SMALL_STATE(85)] = 2374,
  [SMALL_STATE(86)] = 2392,
  [SMALL_STATE(87)] = 2410,
  [SMALL_STATE(88)] = 2430,
  [SMALL_STATE(89)] = 2448,
  [SMALL_STATE(90)] = 2466,
  [SMALL_STATE(91)] = 2484,
  [SMALL_STATE(92)] = 2501,
  [SMALL_STATE(93)] = 2518,
  [SMALL_STATE(94)] = 2535,
  [SMALL_STATE(95)] = 2552,
  [SMALL_STATE(96)] = 2569,
  [SMALL_STATE(97)] = 2583,
  [SMALL_STATE(98)] = 2601,
  [SMALL_STATE(99)] = 2623,
  [SMALL_STATE(100)] = 2637,
  [SMALL_STATE(101)] = 2655,
  [SMALL_STATE(102)] = 2677,
  [SMALL_STATE(103)] = 2699,
  [SMALL_STATE(104)] = 2719,
  [SMALL_STATE(105)] = 2733,
  [SMALL_STATE(106)] = 2753,
  [SMALL_STATE(107)] = 2775,
  [SMALL_STATE(108)] = 2797,
  [SMALL_STATE(109)] = 2819,
  [SMALL_STATE(110)] = 2836,
  [SMALL_STATE(111)] = 2855,
  [SMALL_STATE(112)] = 2874,
  [SMALL_STATE(113)] = 2893,
  [SMALL_STATE(114)] = 2905,
  [SMALL_STATE(115)] = 2917,
  [SMALL_STATE(116)] = 2933,
  [SMALL_STATE(117)] = 2945,
  [SMALL_STATE(118)] = 2957,
  [SMALL_STATE(119)] = 2973,
  [SMALL_STATE(120)] = 2985,
  [SMALL_STATE(121)] = 3001,
  [SMALL_STATE(122)] = 3017,
  [SMALL_STATE(123)] = 3033,
  [SMALL_STATE(124)] = 3049,
  [SMALL_STATE(125)] = 3065,
  [SMALL_STATE(126)] = 3079,
  [SMALL_STATE(127)] = 3093,
  [SMALL_STATE(128)] = 3105,
  [SMALL_STATE(129)] = 3119,
  [SMALL_STATE(130)] = 3135,
  [SMALL_STATE(131)] = 3151,
  [SMALL_STATE(132)] = 3164,
  [SMALL_STATE(133)] = 3175,
  [SMALL_STATE(134)] = 3188,
  [SMALL_STATE(135)] = 3201,
  [SMALL_STATE(136)] = 3214,
  [SMALL_STATE(137)] = 3227,
  [SMALL_STATE(138)] = 3240,
  [SMALL_STATE(139)] = 3253,
  [SMALL_STATE(140)] = 3264,
  [SMALL_STATE(141)] = 3277,
  [SMALL_STATE(142)] = 3290,
  [SMALL_STATE(143)] = 3301,
  [SMALL_STATE(144)] = 3314,
  [SMALL_STATE(145)] = 3325,
  [SMALL_STATE(146)] = 3338,
  [SMALL_STATE(147)] = 3349,
  [SMALL_STATE(148)] = 3362,
  [SMALL_STATE(149)] = 3375,
  [SMALL_STATE(150)] = 3386,
  [SMALL_STATE(151)] = 3399,
  [SMALL_STATE(152)] = 3412,
  [SMALL_STATE(153)] = 3425,
  [SMALL_STATE(154)] = 3436,
  [SMALL_STATE(155)] = 3447,
  [SMALL_STATE(156)] = 3457,
  [SMALL_STATE(157)] = 3467,
  [SMALL_STATE(158)] = 3477,
  [SMALL_STATE(159)] = 3487,
  [SMALL_STATE(160)] = 3497,
  [SMALL_STATE(161)] = 3507,
  [SMALL_STATE(162)] = 3517,
  [SMALL_STATE(163)] = 3527,
  [SMALL_STATE(164)] = 3537,
  [SMALL_STATE(165)] = 3547,
  [SMALL_STATE(166)] = 3557,
  [SMALL_STATE(167)] = 3567,
  [SMALL_STATE(168)] = 3577,
  [SMALL_STATE(169)] = 3587,
  [SMALL_STATE(170)] = 3597,
  [SMALL_STATE(171)] = 3607,
  [SMALL_STATE(172)] = 3617,
  [SMALL_STATE(173)] = 3627,
  [SMALL_STATE(174)] = 3637,
  [SMALL_STATE(175)] = 3647,
  [SMALL_STATE(176)] = 3657,
  [SMALL_STATE(177)] = 3667,
  [SMALL_STATE(178)] = 3677,
  [SMALL_STATE(179)] = 3687,
  [SMALL_STATE(180)] = 3697,
  [SMALL_STATE(181)] = 3707,
  [SMALL_STATE(182)] = 3717,
  [SMALL_STATE(183)] = 3727,
  [SMALL_STATE(184)] = 3737,
  [SMALL_STATE(185)] = 3747,
  [SMALL_STATE(186)] = 3757,
  [SMALL_STATE(187)] = 3767,
  [SMALL_STATE(188)] = 3777,
  [SMALL_STATE(189)] = 3787,
  [SMALL_STATE(190)] = 3797,
  [SMALL_STATE(191)] = 3807,
  [SMALL_STATE(192)] = 3817,
  [SMALL_STATE(193)] = 3827,
  [SMALL_STATE(194)] = 3837,
  [SMALL_STATE(195)] = 3847,
  [SMALL_STATE(196)] = 3857,
  [SMALL_STATE(197)] = 3867,
  [SMALL_STATE(198)] = 3877,
  [SMALL_STATE(199)] = 3887,
  [SMALL_STATE(200)] = 3897,
  [SMALL_STATE(201)] = 3907,
  [SMALL_STATE(202)] = 3917,
  [SMALL_STATE(203)] = 3927,
  [SMALL_STATE(204)] = 3937,
  [SMALL_STATE(205)] = 3947,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_value, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_value, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_internal, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(134),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(180),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(84),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(138),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 2), SHIFT_REPEAT(21),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_type, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_type, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 1, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 2, .production_id = 9),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_call, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_call, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_expression, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expression, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 2, .production_id = 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 16),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_current, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_current, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_expression, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_expression, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_object_call, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_object_call, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_constant, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_constant, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_call, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_call, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation_call, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creation_call, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_call, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_call, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_call, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_call, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_constant, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_constant, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actuals, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actuals, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actuals, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actuals, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_constant, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_constant, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creation, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_string, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_string, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_constant, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_constant, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_constant, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_constant, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_constant, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_constant, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation_call, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creation_call, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_constant, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_constant, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creation, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_manifest_string, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_manifest_string, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_constant, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_constant, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_repeat1, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_exponent, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_exponent, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real_exponent, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real_exponent, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_routine_mark, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine_mark, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notes, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notes, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_values_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_values_repeat1, 2), SHIFT_REPEAT(9),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_values, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_notes_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_notes_repeat1, 2), SHIFT_REPEAT(155),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_values, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_values_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_arguments, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_arguments, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formal_arguments, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_arguments, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_item, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_item, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_entry, 3, .production_id = 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_notes_repeat1, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feature_clause_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_feature_clause_repeat1, 2), SHIFT_REPEAT(16),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_mark, 2, .production_id = 13),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 2, .production_id = 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_features_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_features_repeat1, 2), SHIFT_REPEAT(103),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_features, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 4, .production_id = 18),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_feature_clause_repeat1, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 14),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 3, .production_id = 15),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_or_routine, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_list, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_list, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_declaration_list_repeat1, 2), SHIFT_REPEAT(123),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_declaration_list_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(203),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_declaration, 2, .production_id = 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actuals_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actuals_repeat1, 2), SHIFT_REPEAT(5),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sign, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_group, 3, .production_id = 19),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_features_repeat1, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 5),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_target, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internal, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 12),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 11),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 10),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [482] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_body, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_routine, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_mark, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 6),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, .production_id = 17),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
