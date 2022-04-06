#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_SEMI = 6,
  anon_sym_EQ = 7,
  sym_number = 8,
  sym_source_file = 9,
  sym__definition = 10,
  sym_function_definition = 11,
  sym_parameter_list = 12,
  sym_block = 13,
  sym__statement = 14,
  sym_assignment_statement = 15,
  sym__expression = 16,
  sym__numeric_literal = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_block_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym__expression] = "_expression",
  [sym__numeric_literal] = "_numeric_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym__expression] = sym__expression,
  [sym__numeric_literal] = sym__numeric_literal,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(3), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [24] = 4,
    ACTIONS(14), 1,
      sym_identifier,
    ACTIONS(16), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_assignment_statement,
    STATE(5), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [38] = 4,
    ACTIONS(14), 1,
      sym_identifier,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_assignment_statement,
    STATE(6), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [52] = 4,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_assignment_statement,
    STATE(6), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [66] = 2,
    ACTIONS(25), 2,
      sym_number,
      sym_identifier,
    STATE(19), 2,
      sym__expression,
      sym__numeric_literal,
  [75] = 2,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_parameter_list,
  [82] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [89] = 1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [94] = 1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [99] = 1,
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [104] = 1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [109] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [113] = 1,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
  [117] = 1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
  [121] = 1,
    ACTIONS(45), 1,
      anon_sym_EQ,
  [125] = 1,
    ACTIONS(47), 1,
      anon_sym_SEMI,
  [129] = 1,
    ACTIONS(49), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 82,
  [SMALL_STATE(10)] = 89,
  [SMALL_STATE(11)] = 94,
  [SMALL_STATE(12)] = 99,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 109,
  [SMALL_STATE(15)] = 113,
  [SMALL_STATE(16)] = 117,
  [SMALL_STATE(17)] = 121,
  [SMALL_STATE(18)] = 125,
  [SMALL_STATE(19)] = 129,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
