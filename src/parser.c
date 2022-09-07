#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comma = 1,
  sym_opening_curly_brace = 2,
  sym_closing_curly_brace = 3,
  sym_colon = 4,
  sym_opening_square_bracket = 5,
  sym_closing_square_bracket = 6,
  sym_double_apostrophe = 7,
  aux_sym_string_content_token1 = 8,
  sym_positive_sign = 9,
  sym_negative_sign = 10,
  sym_digits = 11,
  sym_decimal_point = 12,
  anon_sym_e = 13,
  anon_sym_E = 14,
  sym_true = 15,
  sym_false = 16,
  sym_null = 17,
  sym_element = 18,
  sym__value = 19,
  sym_pair = 20,
  sym_object = 21,
  sym_array = 22,
  sym_empty_string = 23,
  sym_string_content = 24,
  sym_string = 25,
  sym_sign = 26,
  sym_integer = 27,
  sym_fraction = 28,
  sym_exponent_function = 29,
  sym_exponent = 30,
  sym_number = 31,
  aux_sym_object_repeat1 = 32,
  aux_sym_object_repeat2 = 33,
  aux_sym_string_content_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comma] = "comma",
  [sym_opening_curly_brace] = "opening_curly_brace",
  [sym_closing_curly_brace] = "closing_curly_brace",
  [sym_colon] = "colon",
  [sym_opening_square_bracket] = "opening_square_bracket",
  [sym_closing_square_bracket] = "closing_square_bracket",
  [sym_double_apostrophe] = "double_apostrophe",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_positive_sign] = "positive_sign",
  [sym_negative_sign] = "negative_sign",
  [sym_digits] = "digits",
  [sym_decimal_point] = "decimal_point",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_element] = "element",
  [sym__value] = "_value",
  [sym_pair] = "pair",
  [sym_object] = "object",
  [sym_array] = "array",
  [sym_empty_string] = "empty_string",
  [sym_string_content] = "string_content",
  [sym_string] = "string",
  [sym_sign] = "sign",
  [sym_integer] = "integer",
  [sym_fraction] = "fraction",
  [sym_exponent_function] = "exponent_function",
  [sym_exponent] = "exponent",
  [sym_number] = "number",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_object_repeat2] = "object_repeat2",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comma] = sym_comma,
  [sym_opening_curly_brace] = sym_opening_curly_brace,
  [sym_closing_curly_brace] = sym_closing_curly_brace,
  [sym_colon] = sym_colon,
  [sym_opening_square_bracket] = sym_opening_square_bracket,
  [sym_closing_square_bracket] = sym_closing_square_bracket,
  [sym_double_apostrophe] = sym_double_apostrophe,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_positive_sign] = sym_positive_sign,
  [sym_negative_sign] = sym_negative_sign,
  [sym_digits] = sym_digits,
  [sym_decimal_point] = sym_decimal_point,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_element] = sym_element,
  [sym__value] = sym__value,
  [sym_pair] = sym_pair,
  [sym_object] = sym_object,
  [sym_array] = sym_array,
  [sym_empty_string] = sym_empty_string,
  [sym_string_content] = sym_string_content,
  [sym_string] = sym_string,
  [sym_sign] = sym_sign,
  [sym_integer] = sym_integer,
  [sym_fraction] = sym_fraction,
  [sym_exponent_function] = sym_exponent_function,
  [sym_exponent] = sym_exponent,
  [sym_number] = sym_number,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_object_repeat2] = aux_sym_object_repeat2,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_opening_curly_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_curly_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_opening_square_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_square_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_double_apostrophe] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_positive_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_digits] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_point] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_fraction] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent_function] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
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
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_opening_curly_brace);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_closing_curly_brace);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_opening_square_bracket);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_closing_square_bracket);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_double_apostrophe);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_positive_sign);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_negative_sign);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_digits);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_decimal_point);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_null);
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_opening_curly_brace] = ACTIONS(1),
    [sym_closing_curly_brace] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_opening_square_bracket] = ACTIONS(1),
    [sym_closing_square_bracket] = ACTIONS(1),
    [sym_double_apostrophe] = ACTIONS(1),
    [sym_positive_sign] = ACTIONS(1),
    [sym_negative_sign] = ACTIONS(1),
    [sym_digits] = ACTIONS(1),
    [sym_decimal_point] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_element] = STATE(49),
    [sym__value] = STATE(44),
    [sym_object] = STATE(44),
    [sym_array] = STATE(44),
    [sym_empty_string] = STATE(12),
    [sym_string] = STATE(44),
    [sym_integer] = STATE(6),
    [sym_number] = STATE(44),
    [sym_opening_curly_brace] = ACTIONS(3),
    [sym_opening_square_bracket] = ACTIONS(5),
    [sym_double_apostrophe] = ACTIONS(7),
    [sym_negative_sign] = ACTIONS(9),
    [sym_digits] = ACTIONS(11),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_opening_curly_brace,
    ACTIONS(5), 1,
      sym_opening_square_bracket,
    ACTIONS(7), 1,
      sym_double_apostrophe,
    ACTIONS(9), 1,
      sym_negative_sign,
    ACTIONS(11), 1,
      sym_digits,
    ACTIONS(15), 1,
      sym_closing_curly_brace,
    STATE(6), 1,
      sym_integer,
    STATE(12), 1,
      sym_empty_string,
    STATE(31), 1,
      sym_pair,
    STATE(34), 1,
      sym_string,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(29), 4,
      sym__value,
      sym_object,
      sym_array,
      sym_number,
  [42] = 10,
    ACTIONS(3), 1,
      sym_opening_curly_brace,
    ACTIONS(5), 1,
      sym_opening_square_bracket,
    ACTIONS(7), 1,
      sym_double_apostrophe,
    ACTIONS(9), 1,
      sym_negative_sign,
    ACTIONS(11), 1,
      sym_digits,
    ACTIONS(19), 1,
      sym_closing_square_bracket,
    STATE(6), 1,
      sym_integer,
    STATE(12), 1,
      sym_empty_string,
    ACTIONS(21), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(36), 5,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
  [79] = 9,
    ACTIONS(3), 1,
      sym_opening_curly_brace,
    ACTIONS(5), 1,
      sym_opening_square_bracket,
    ACTIONS(7), 1,
      sym_double_apostrophe,
    ACTIONS(9), 1,
      sym_negative_sign,
    ACTIONS(11), 1,
      sym_digits,
    STATE(6), 1,
      sym_integer,
    STATE(12), 1,
      sym_empty_string,
    ACTIONS(23), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(40), 5,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
  [113] = 9,
    ACTIONS(3), 1,
      sym_opening_curly_brace,
    ACTIONS(5), 1,
      sym_opening_square_bracket,
    ACTIONS(7), 1,
      sym_double_apostrophe,
    ACTIONS(9), 1,
      sym_negative_sign,
    ACTIONS(11), 1,
      sym_digits,
    STATE(6), 1,
      sym_integer,
    STATE(12), 1,
      sym_empty_string,
    ACTIONS(25), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(39), 5,
      sym__value,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
  [147] = 6,
    ACTIONS(29), 1,
      sym_decimal_point,
    STATE(7), 1,
      sym_fraction,
    STATE(24), 1,
      sym_exponent_function,
    STATE(25), 1,
      sym_exponent,
    ACTIONS(31), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [170] = 4,
    STATE(14), 1,
      sym_exponent,
    STATE(24), 1,
      sym_exponent_function,
    ACTIONS(31), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [187] = 1,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
      sym_decimal_point,
      anon_sym_e,
      anon_sym_E,
  [197] = 1,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
      sym_decimal_point,
      anon_sym_e,
      anon_sym_E,
  [207] = 1,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
      anon_sym_e,
      anon_sym_E,
  [216] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_colon,
      sym_closing_square_bracket,
  [224] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_colon,
      sym_closing_square_bracket,
  [232] = 1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_colon,
      sym_closing_square_bracket,
  [240] = 1,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [247] = 1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [254] = 1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [261] = 1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [268] = 1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [275] = 3,
    ACTIONS(57), 1,
      sym_comma,
    STATE(19), 1,
      aux_sym_object_repeat2,
    ACTIONS(60), 2,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [286] = 1,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [293] = 1,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [300] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [307] = 4,
    ACTIONS(68), 1,
      sym_double_apostrophe,
    ACTIONS(70), 1,
      aux_sym_string_content_token1,
    STATE(28), 1,
      aux_sym_string_content_repeat1,
    STATE(43), 1,
      sym_string_content,
  [320] = 3,
    ACTIONS(74), 1,
      sym_digits,
    STATE(46), 1,
      sym_sign,
    ACTIONS(72), 2,
      sym_positive_sign,
      sym_negative_sign,
  [331] = 1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [338] = 4,
    ACTIONS(7), 1,
      sym_double_apostrophe,
    STATE(12), 1,
      sym_empty_string,
    STATE(41), 1,
      sym_pair,
    STATE(45), 1,
      sym_string,
  [351] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [358] = 3,
    ACTIONS(78), 1,
      sym_double_apostrophe,
    ACTIONS(80), 1,
      aux_sym_string_content_token1,
    STATE(35), 1,
      aux_sym_string_content_repeat1,
  [368] = 3,
    ACTIONS(82), 1,
      sym_comma,
    ACTIONS(84), 1,
      sym_closing_curly_brace,
    STATE(37), 1,
      aux_sym_object_repeat2,
  [378] = 3,
    ACTIONS(86), 1,
      sym_comma,
    ACTIONS(88), 1,
      sym_closing_curly_brace,
    STATE(38), 1,
      aux_sym_object_repeat1,
  [388] = 3,
    ACTIONS(84), 1,
      sym_closing_curly_brace,
    ACTIONS(86), 1,
      sym_comma,
    STATE(30), 1,
      aux_sym_object_repeat1,
  [398] = 1,
    ACTIONS(90), 3,
      sym_positive_sign,
      sym_negative_sign,
      sym_digits,
  [404] = 3,
    ACTIONS(82), 1,
      sym_comma,
    ACTIONS(92), 1,
      sym_closing_square_bracket,
    STATE(19), 1,
      aux_sym_object_repeat2,
  [414] = 2,
    ACTIONS(96), 1,
      sym_colon,
    ACTIONS(94), 2,
      sym_comma,
      sym_closing_curly_brace,
  [422] = 3,
    ACTIONS(98), 1,
      sym_double_apostrophe,
    ACTIONS(100), 1,
      aux_sym_string_content_token1,
    STATE(35), 1,
      aux_sym_string_content_repeat1,
  [432] = 3,
    ACTIONS(82), 1,
      sym_comma,
    ACTIONS(103), 1,
      sym_closing_square_bracket,
    STATE(33), 1,
      aux_sym_object_repeat2,
  [442] = 3,
    ACTIONS(82), 1,
      sym_comma,
    ACTIONS(88), 1,
      sym_closing_curly_brace,
    STATE(19), 1,
      aux_sym_object_repeat2,
  [452] = 3,
    ACTIONS(105), 1,
      sym_comma,
    ACTIONS(108), 1,
      sym_closing_curly_brace,
    STATE(38), 1,
      aux_sym_object_repeat1,
  [462] = 1,
    ACTIONS(60), 3,
      sym_comma,
      sym_closing_curly_brace,
      sym_closing_square_bracket,
  [468] = 1,
    ACTIONS(110), 2,
      sym_comma,
      sym_closing_curly_brace,
  [473] = 1,
    ACTIONS(108), 2,
      sym_comma,
      sym_closing_curly_brace,
  [478] = 1,
    ACTIONS(112), 1,
      sym_digits,
  [482] = 1,
    ACTIONS(114), 1,
      sym_double_apostrophe,
  [486] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [490] = 1,
    ACTIONS(96), 1,
      sym_colon,
  [494] = 1,
    ACTIONS(118), 1,
      sym_digits,
  [498] = 1,
    ACTIONS(120), 1,
      sym_digits,
  [502] = 1,
    ACTIONS(122), 1,
      sym_digits,
  [506] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 147,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 187,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 224,
  [SMALL_STATE(13)] = 232,
  [SMALL_STATE(14)] = 240,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 268,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 293,
  [SMALL_STATE(22)] = 300,
  [SMALL_STATE(23)] = 307,
  [SMALL_STATE(24)] = 320,
  [SMALL_STATE(25)] = 331,
  [SMALL_STATE(26)] = 338,
  [SMALL_STATE(27)] = 351,
  [SMALL_STATE(28)] = 358,
  [SMALL_STATE(29)] = 368,
  [SMALL_STATE(30)] = 378,
  [SMALL_STATE(31)] = 388,
  [SMALL_STATE(32)] = 398,
  [SMALL_STATE(33)] = 404,
  [SMALL_STATE(34)] = 414,
  [SMALL_STATE(35)] = 422,
  [SMALL_STATE(36)] = 432,
  [SMALL_STATE(37)] = 442,
  [SMALL_STATE(38)] = 452,
  [SMALL_STATE(39)] = 462,
  [SMALL_STATE(40)] = 468,
  [SMALL_STATE(41)] = 473,
  [SMALL_STATE(42)] = 478,
  [SMALL_STATE(43)] = 482,
  [SMALL_STATE(44)] = 486,
  [SMALL_STATE(45)] = 490,
  [SMALL_STATE(46)] = 494,
  [SMALL_STATE(47)] = 498,
  [SMALL_STATE(48)] = 502,
  [SMALL_STATE(49)] = 506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fraction, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_string, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat2, 2), SHIFT_REPEAT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat2, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent_function, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(35),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sign, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_json(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
