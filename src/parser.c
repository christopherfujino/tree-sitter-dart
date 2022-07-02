#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  anon_sym_void = 2,
  anon_sym_int = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_SEMI = 8,
  anon_sym_EQ = 9,
  sym_number = 10,
  anon_sym_SLASH_SLASH = 11,
  aux_sym_comment_token1 = 12,
  sym_source_file = 13,
  sym_declaration = 14,
  sym__type = 15,
  sym_primitive_type = 16,
  sym_function_declaration = 17,
  sym_parameter_list = 18,
  sym_block = 19,
  sym__statement = 20,
  sym_assignment_statement = 21,
  sym__expression = 22,
  sym__numeric_literal = 23,
  sym_comment = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_block_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_void] = "void",
  [anon_sym_int] = "int",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [sym_number] = "number",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym__expression] = "_expression",
  [sym__numeric_literal] = "_numeric_literal",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_number] = sym_number,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym__expression] = sym__expression,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_parameter_list = 3,
  field_return_type = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_parameter_list] = "parameter_list",
  [field_return_type] = "return_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 0},
    {field_parameter_list, 1},
  [3] =
    {field_body, 3},
    {field_name, 1},
    {field_parameter_list, 2},
    {field_return_type, 0},
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
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 9,
  [19] = 13,
  [20] = 14,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 26,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(4);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'i') ADVANCE(1);
      if (lookahead == 'v') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
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
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym_declaration] = STATE(10),
    [sym__type] = STATE(42),
    [sym_primitive_type] = STATE(41),
    [sym_function_declaration] = STATE(12),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_int] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(21), 1,
      sym__statement,
    STATE(23), 1,
      sym_function_declaration,
    STATE(33), 1,
      sym_assignment_statement,
    STATE(38), 1,
      sym__type,
    STATE(41), 1,
      sym_primitive_type,
    ACTIONS(9), 2,
      anon_sym_void,
      anon_sym_int,
  [35] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym__statement,
    STATE(23), 1,
      sym_function_declaration,
    STATE(33), 1,
      sym_assignment_statement,
    STATE(38), 1,
      sym__type,
    STATE(41), 1,
      sym_primitive_type,
    ACTIONS(18), 2,
      anon_sym_void,
      anon_sym_int,
    STATE(3), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [68] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(21), 1,
      sym__statement,
    STATE(23), 1,
      sym_function_declaration,
    STATE(33), 1,
      sym_assignment_statement,
    STATE(38), 1,
      sym__type,
    STATE(41), 1,
      sym_primitive_type,
    ACTIONS(9), 2,
      anon_sym_void,
      anon_sym_int,
  [103] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_block_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(21), 1,
      sym__statement,
    STATE(23), 1,
      sym_function_declaration,
    STATE(33), 1,
      sym_assignment_statement,
    STATE(38), 1,
      sym__type,
    STATE(41), 1,
      sym_primitive_type,
    ACTIONS(9), 2,
      anon_sym_void,
      anon_sym_int,
  [138] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(21), 1,
      sym__statement,
    STATE(23), 1,
      sym_function_declaration,
    STATE(33), 1,
      sym_assignment_statement,
    STATE(38), 1,
      sym__type,
    STATE(41), 1,
      sym_primitive_type,
    ACTIONS(9), 2,
      anon_sym_void,
      anon_sym_int,
  [173] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(10), 1,
      sym_declaration,
    STATE(12), 1,
      sym_function_declaration,
    STATE(41), 1,
      sym_primitive_type,
    STATE(42), 1,
      sym__type,
    ACTIONS(9), 2,
      anon_sym_void,
      anon_sym_int,
  [205] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(10), 1,
      sym_declaration,
    STATE(12), 1,
      sym_function_declaration,
    STATE(41), 1,
      sym_primitive_type,
    STATE(42), 1,
      sym__type,
    ACTIONS(36), 2,
      anon_sym_void,
      anon_sym_int,
    STATE(8), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [235] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [250] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [280] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [295] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [310] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [325] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [340] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [355] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_number,
    STATE(17), 1,
      sym_comment,
    STATE(34), 1,
      sym__numeric_literal,
    STATE(35), 1,
      sym__expression,
  [374] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [404] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [419] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [434] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_number,
    STATE(22), 1,
      sym_comment,
    STATE(34), 1,
      sym__numeric_literal,
    STATE(37), 1,
      sym__expression,
  [453] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_void,
      anon_sym_int,
      sym_identifier,
  [468] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_EQ,
    STATE(24), 1,
      sym_comment,
    STATE(26), 1,
      sym_parameter_list,
  [484] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_EQ,
    STATE(25), 1,
      sym_comment,
    STATE(28), 1,
      sym_parameter_list,
  [500] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_block,
    STATE(26), 1,
      sym_comment,
  [513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
    STATE(27), 1,
      sym_comment,
  [526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
    STATE(28), 1,
      sym_comment,
  [539] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_parameter_list,
    STATE(29), 1,
      sym_comment,
  [552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
    STATE(30), 1,
      sym_comment,
  [565] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_parameter_list,
    STATE(31), 1,
      sym_comment,
  [578] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym_comment,
  [588] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_comment,
  [598] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_comment,
  [608] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_comment,
  [618] = 3,
    ACTIONS(97), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
  [628] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
  [638] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(38), 1,
      sym_comment,
  [648] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_comment,
  [658] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_comment,
  [668] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(41), 1,
      sym_comment,
  [678] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(42), 1,
      sym_comment,
  [688] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_comment,
  [698] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(44), 1,
      sym_comment,
  [708] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 265,
  [SMALL_STATE(12)] = 280,
  [SMALL_STATE(13)] = 295,
  [SMALL_STATE(14)] = 310,
  [SMALL_STATE(15)] = 325,
  [SMALL_STATE(16)] = 340,
  [SMALL_STATE(17)] = 355,
  [SMALL_STATE(18)] = 374,
  [SMALL_STATE(19)] = 389,
  [SMALL_STATE(20)] = 404,
  [SMALL_STATE(21)] = 419,
  [SMALL_STATE(22)] = 434,
  [SMALL_STATE(23)] = 453,
  [SMALL_STATE(24)] = 468,
  [SMALL_STATE(25)] = 484,
  [SMALL_STATE(26)] = 500,
  [SMALL_STATE(27)] = 513,
  [SMALL_STATE(28)] = 526,
  [SMALL_STATE(29)] = 539,
  [SMALL_STATE(30)] = 552,
  [SMALL_STATE(31)] = 565,
  [SMALL_STATE(32)] = 578,
  [SMALL_STATE(33)] = 588,
  [SMALL_STATE(34)] = 598,
  [SMALL_STATE(35)] = 608,
  [SMALL_STATE(36)] = 618,
  [SMALL_STATE(37)] = 628,
  [SMALL_STATE(38)] = 638,
  [SMALL_STATE(39)] = 648,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 668,
  [SMALL_STATE(42)] = 678,
  [SMALL_STATE(43)] = 688,
  [SMALL_STATE(44)] = 698,
  [SMALL_STATE(45)] = 708,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_literal, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Dart(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
