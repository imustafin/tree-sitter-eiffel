#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum {
  sym_comment = 1,
  anon_sym_class = 2,
  anon_sym_end = 3,
  anon_sym_feature = 4,
  anon_sym_SEMI = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COLON = 8,
  anon_sym_COMMA = 9,
  anon_sym_deferred = 10,
  anon_sym_expanded = 11,
  anon_sym_frozen = 12,
  anon_sym_note = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_True = 16,
  anon_sym_False = 17,
  sym_identifier = 18,
  sym_source_file = 19,
  sym_class_declaration = 20,
  sym_features = 21,
  sym_feature_clause = 22,
  sym_feature_declaration = 23,
  sym_formal_arguments = 24,
  sym_entity_declaration_list = 25,
  sym_entity_declaration_group = 26,
  sym_identifier_list = 27,
  sym_type = 28,
  sym_header_mark = 29,
  sym_notes = 30,
  sym_note_entry = 31,
  sym_note_values = 32,
  sym_note_item = 33,
  sym_manifest_constant = 34,
  sym_manifest_type = 35,
  sym_manifest_value = 36,
  sym_boolean_constant = 37,
  sym_class_name = 38,
  aux_sym_features_repeat1 = 39,
  aux_sym_feature_clause_repeat1 = 40,
  aux_sym_entity_declaration_list_repeat1 = 41,
  aux_sym_identifier_list_repeat1 = 42,
  aux_sym_notes_repeat1 = 43,
  aux_sym_note_values_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_class] = "class",
  [anon_sym_end] = "end",
  [anon_sym_feature] = "feature",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_deferred] = "deferred",
  [anon_sym_expanded] = "expanded",
  [anon_sym_frozen] = "frozen",
  [anon_sym_note] = "note",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_class_declaration] = "class_declaration",
  [sym_features] = "features",
  [sym_feature_clause] = "feature_clause",
  [sym_feature_declaration] = "feature_declaration",
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
  [sym_manifest_constant] = "manifest_constant",
  [sym_manifest_type] = "manifest_type",
  [sym_manifest_value] = "manifest_value",
  [sym_boolean_constant] = "boolean_constant",
  [sym_class_name] = "class_name",
  [aux_sym_features_repeat1] = "features_repeat1",
  [aux_sym_feature_clause_repeat1] = "feature_clause_repeat1",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_deferred] = anon_sym_deferred,
  [anon_sym_expanded] = anon_sym_expanded,
  [anon_sym_frozen] = anon_sym_frozen,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_class_declaration] = sym_class_declaration,
  [sym_features] = sym_features,
  [sym_feature_clause] = sym_feature_clause,
  [sym_feature_declaration] = sym_feature_declaration,
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
  [sym_manifest_constant] = sym_manifest_constant,
  [sym_manifest_type] = sym_manifest_type,
  [sym_manifest_value] = sym_manifest_value,
  [sym_boolean_constant] = sym_boolean_constant,
  [sym_class_name] = sym_class_name,
  [aux_sym_features_repeat1] = aux_sym_features_repeat1,
  [aux_sym_feature_clause_repeat1] = aux_sym_feature_clause_repeat1,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deferred] = {
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
  [sym_manifest_constant] = {
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
  field_declarations = 2,
  field_features = 3,
  field_identifiers = 4,
  field_mark = 5,
  field_name = 6,
  field_notes = 7,
  field_type = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_declarations] = "declarations",
  [field_features] = "features",
  [field_identifiers] = "identifiers",
  [field_mark] = "mark",
  [field_name] = "name",
  [field_notes] = "notes",
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
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 4},
  [13] = {.index = 26, .length = 2},
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
    {field_arguments, 1},
    {field_name, 0},
  [11] =
    {field_declarations, 1},
    {field_declarations, 2},
  [13] =
    {field_features, 3},
    {field_mark, 0},
    {field_name, 2},
  [16] =
    {field_features, 3},
    {field_name, 2},
    {field_notes, 0},
  [19] =
    {field_mark, 1},
    {field_name, 3},
    {field_notes, 0},
  [22] =
    {field_features, 4},
    {field_mark, 1},
    {field_name, 3},
    {field_notes, 0},
  [26] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 2:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'z') ADVANCE(19);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_class);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_feature);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_feature);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_deferred);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_deferred);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_expanded);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_expanded);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_frozen);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_frozen);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_True);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_False);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_feature] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_deferred] = ACTIONS(1),
    [anon_sym_expanded] = ACTIONS(1),
    [anon_sym_frozen] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym_class_declaration] = STATE(61),
    [sym_header_mark] = STATE(58),
    [sym_notes] = STATE(16),
    [anon_sym_class] = ACTIONS(3),
    [anon_sym_deferred] = ACTIONS(5),
    [anon_sym_expanded] = ACTIONS(5),
    [anon_sym_frozen] = ACTIONS(5),
    [anon_sym_note] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(6), 1,
      sym_note_item,
    STATE(11), 1,
      sym_boolean_constant,
    STATE(12), 1,
      sym_manifest_value,
    STATE(14), 1,
      sym_manifest_constant,
    STATE(23), 1,
      sym_note_values,
    STATE(27), 1,
      sym_manifest_type,
    ACTIONS(11), 2,
      anon_sym_True,
      anon_sym_False,
  [29] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(11), 1,
      sym_boolean_constant,
    STATE(12), 1,
      sym_manifest_value,
    STATE(13), 1,
      sym_note_item,
    STATE(14), 1,
      sym_manifest_constant,
    STATE(27), 1,
      sym_manifest_type,
    ACTIONS(11), 2,
      anon_sym_True,
      anon_sym_False,
  [55] = 3,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(8), 2,
      sym_note_entry,
      aux_sym_notes_repeat1,
    ACTIONS(15), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [69] = 3,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_note_values_repeat1,
    ACTIONS(19), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [83] = 3,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_note_values_repeat1,
    ACTIONS(24), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [97] = 3,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(4), 2,
      sym_note_entry,
      aux_sym_notes_repeat1,
    ACTIONS(28), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [111] = 3,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(8), 2,
      sym_note_entry,
      aux_sym_notes_repeat1,
    ACTIONS(30), 4,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [125] = 3,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_note_values_repeat1,
    ACTIONS(35), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [139] = 2,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(37), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [150] = 2,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(41), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [161] = 2,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(45), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [172] = 2,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(19), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [183] = 2,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(51), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [194] = 2,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(55), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [205] = 3,
    ACTIONS(59), 1,
      anon_sym_class,
    STATE(70), 1,
      sym_header_mark,
    ACTIONS(5), 3,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
  [217] = 4,
    ACTIONS(61), 1,
      anon_sym_end,
    ACTIONS(63), 1,
      anon_sym_feature,
    STATE(76), 1,
      sym_features,
    STATE(26), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [231] = 5,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(31), 1,
      sym_entity_declaration_group,
    STATE(57), 1,
      sym_entity_declaration_list,
    STATE(59), 1,
      sym_identifier_list,
  [247] = 4,
    ACTIONS(63), 1,
      anon_sym_feature,
    ACTIONS(69), 1,
      anon_sym_end,
    STATE(55), 1,
      sym_features,
    STATE(26), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [261] = 4,
    ACTIONS(63), 1,
      anon_sym_feature,
    ACTIONS(71), 1,
      anon_sym_end,
    STATE(74), 1,
      sym_features,
    STATE(26), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [275] = 4,
    ACTIONS(63), 1,
      anon_sym_feature,
    ACTIONS(73), 1,
      anon_sym_end,
    STATE(72), 1,
      sym_features,
    STATE(26), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [289] = 3,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_formal_arguments,
    ACTIONS(75), 3,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_SEMI,
  [301] = 1,
    ACTIONS(79), 5,
      anon_sym_class,
      anon_sym_deferred,
      anon_sym_expanded,
      anon_sym_frozen,
      sym_identifier,
  [309] = 3,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      aux_sym_feature_clause_repeat1,
    ACTIONS(81), 2,
      anon_sym_end,
      anon_sym_feature,
  [320] = 3,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(28), 1,
      sym_feature_declaration,
    ACTIONS(85), 2,
      anon_sym_end,
      anon_sym_feature,
  [331] = 3,
    ACTIONS(63), 1,
      anon_sym_feature,
    ACTIONS(89), 1,
      anon_sym_end,
    STATE(30), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [342] = 3,
    STATE(10), 1,
      sym_manifest_value,
    STATE(11), 1,
      sym_boolean_constant,
    ACTIONS(91), 2,
      anon_sym_True,
      anon_sym_False,
  [353] = 3,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      aux_sym_feature_clause_repeat1,
    ACTIONS(93), 2,
      anon_sym_end,
      anon_sym_feature,
  [364] = 3,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      aux_sym_feature_clause_repeat1,
    ACTIONS(95), 2,
      anon_sym_end,
      anon_sym_feature,
  [375] = 3,
    ACTIONS(100), 1,
      anon_sym_end,
    ACTIONS(102), 1,
      anon_sym_feature,
    STATE(30), 2,
      sym_feature_clause,
      aux_sym_features_repeat1,
  [386] = 3,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_entity_declaration_list_repeat1,
  [396] = 1,
    ACTIONS(109), 3,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_SEMI,
  [402] = 3,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_identifier_list_repeat1,
  [412] = 1,
    ACTIONS(95), 3,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_SEMI,
  [418] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_COLON,
    STATE(38), 1,
      aux_sym_identifier_list_repeat1,
  [428] = 3,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_entity_declaration_list_repeat1,
  [438] = 1,
    ACTIONS(122), 3,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_SEMI,
  [444] = 3,
    ACTIONS(124), 1,
      anon_sym_COLON,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_identifier_list_repeat1,
  [454] = 1,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [460] = 1,
    ACTIONS(131), 3,
      anon_sym_end,
      anon_sym_feature,
      anon_sym_SEMI,
  [466] = 3,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_entity_declaration_list_repeat1,
  [476] = 3,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(47), 1,
      sym_entity_declaration_group,
    STATE(59), 1,
      sym_identifier_list,
  [486] = 2,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(52), 1,
      sym_type,
  [493] = 2,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(34), 1,
      sym_feature_declaration,
  [500] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(21), 1,
      sym_class_name,
  [507] = 1,
    ACTIONS(124), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [512] = 1,
    ACTIONS(120), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [517] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(20), 1,
      sym_class_name,
  [524] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(19), 1,
      sym_class_name,
  [531] = 1,
    ACTIONS(141), 2,
      anon_sym_end,
      anon_sym_feature,
  [536] = 1,
    ACTIONS(143), 2,
      anon_sym_True,
      anon_sym_False,
  [541] = 1,
    ACTIONS(145), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [546] = 2,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(17), 1,
      sym_class_name,
  [553] = 2,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(69), 1,
      sym_type,
  [560] = 1,
    ACTIONS(147), 1,
      anon_sym_end,
  [564] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [568] = 1,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
  [572] = 1,
    ACTIONS(153), 1,
      anon_sym_class,
  [576] = 1,
    ACTIONS(155), 1,
      anon_sym_COLON,
  [580] = 1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
  [584] = 1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [588] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [592] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [596] = 1,
    ACTIONS(165), 1,
      anon_sym_class,
  [600] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [604] = 1,
    ACTIONS(169), 1,
      sym_identifier,
  [608] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
  [612] = 1,
    ACTIONS(173), 1,
      anon_sym_COLON,
  [616] = 1,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
  [620] = 1,
    ACTIONS(177), 1,
      anon_sym_class,
  [624] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [628] = 1,
    ACTIONS(181), 1,
      anon_sym_end,
  [632] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
  [636] = 1,
    ACTIONS(185), 1,
      anon_sym_end,
  [640] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [644] = 1,
    ACTIONS(189), 1,
      anon_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 139,
  [SMALL_STATE(11)] = 150,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 172,
  [SMALL_STATE(14)] = 183,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 247,
  [SMALL_STATE(20)] = 261,
  [SMALL_STATE(21)] = 275,
  [SMALL_STATE(22)] = 289,
  [SMALL_STATE(23)] = 301,
  [SMALL_STATE(24)] = 309,
  [SMALL_STATE(25)] = 320,
  [SMALL_STATE(26)] = 331,
  [SMALL_STATE(27)] = 342,
  [SMALL_STATE(28)] = 353,
  [SMALL_STATE(29)] = 364,
  [SMALL_STATE(30)] = 375,
  [SMALL_STATE(31)] = 386,
  [SMALL_STATE(32)] = 396,
  [SMALL_STATE(33)] = 402,
  [SMALL_STATE(34)] = 412,
  [SMALL_STATE(35)] = 418,
  [SMALL_STATE(36)] = 428,
  [SMALL_STATE(37)] = 438,
  [SMALL_STATE(38)] = 444,
  [SMALL_STATE(39)] = 454,
  [SMALL_STATE(40)] = 460,
  [SMALL_STATE(41)] = 466,
  [SMALL_STATE(42)] = 476,
  [SMALL_STATE(43)] = 486,
  [SMALL_STATE(44)] = 493,
  [SMALL_STATE(45)] = 500,
  [SMALL_STATE(46)] = 507,
  [SMALL_STATE(47)] = 512,
  [SMALL_STATE(48)] = 517,
  [SMALL_STATE(49)] = 524,
  [SMALL_STATE(50)] = 531,
  [SMALL_STATE(51)] = 536,
  [SMALL_STATE(52)] = 541,
  [SMALL_STATE(53)] = 546,
  [SMALL_STATE(54)] = 553,
  [SMALL_STATE(55)] = 560,
  [SMALL_STATE(56)] = 564,
  [SMALL_STATE(57)] = 568,
  [SMALL_STATE(58)] = 572,
  [SMALL_STATE(59)] = 576,
  [SMALL_STATE(60)] = 580,
  [SMALL_STATE(61)] = 584,
  [SMALL_STATE(62)] = 588,
  [SMALL_STATE(63)] = 592,
  [SMALL_STATE(64)] = 596,
  [SMALL_STATE(65)] = 600,
  [SMALL_STATE(66)] = 604,
  [SMALL_STATE(67)] = 608,
  [SMALL_STATE(68)] = 612,
  [SMALL_STATE(69)] = 616,
  [SMALL_STATE(70)] = 620,
  [SMALL_STATE(71)] = 624,
  [SMALL_STATE(72)] = 628,
  [SMALL_STATE(73)] = 632,
  [SMALL_STATE(74)] = 636,
  [SMALL_STATE(75)] = 640,
  [SMALL_STATE(76)] = 644,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notes, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_values_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_values_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_values, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notes, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_notes_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_notes_repeat1, 2), SHIFT_REPEAT(68),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_values, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_constant, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_constant, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_value, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_value, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_manifest_constant, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_constant, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_values_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_item, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_item, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_constant, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_constant, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_declaration, 1, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_entry, 3, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_clause, 3, .production_id = 8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_clause, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_features, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_clause, 2, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_clause_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_clause_repeat1, 2), SHIFT_REPEAT(44),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_features_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_features_repeat1, 2), SHIFT_REPEAT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_list, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_arguments, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_declaration_list_repeat1, 2), SHIFT_REPEAT(42),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_declaration_list_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_arguments, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(66),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_declaration, 2, .production_id = 7),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_list, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manifest_type, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration_group, 3, .production_id = 13),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 11),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 10),
  [163] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_mark, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, .production_id = 12),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 9),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 6),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
