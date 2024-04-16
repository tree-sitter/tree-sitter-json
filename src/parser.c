#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_content_token1 = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  sym_comment = 14,
  sym_document = 15,
  sym__value = 16,
  sym_object = 17,
  sym_pair = 18,
  sym_array = 19,
  sym_string = 20,
  sym_string_content = 21,
  aux_sym_document_repeat1 = 22,
  aux_sym_object_repeat1 = 23,
  aux_sym_array_repeat1 = 24,
  aux_sym_string_content_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      ADVANCE_MAP(
        '"', 28,
        ',', 23,
        '-', 7,
        '/', 3,
        '0', 35,
        ':', 25,
        '[', 26,
        '\\', 18,
        ']', 27,
        'f', 8,
        'n', 17,
        't', 14,
        '{', 22,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(35);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '"', 34,
        '/', 34,
        '\\', 34,
        'b', 34,
        'f', 34,
        'n', 34,
        'r', 34,
        't', 34,
        'u', 34,
      );
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      ADVANCE_MAP(
        '"', 28,
        ',', 23,
        '-', 7,
        '/', 3,
        '0', 35,
        ':', 25,
        '[', 26,
        ']', 27,
        'f', 8,
        'n', 17,
        't', 14,
        '{', 22,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
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
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(36),
    [sym__value] = STATE(3),
    [sym_object] = STATE(17),
    [sym_array] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(2),
    [sym_object] = STATE(17),
    [sym_array] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(26),
    [sym_true] = ACTIONS(26),
    [sym_false] = ACTIONS(26),
    [sym_null] = ACTIONS(26),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(2),
    [sym_object] = STATE(17),
    [sym_array] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [18] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym__value,
    STATE(17), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(13), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [48] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__value,
    STATE(17), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(13), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [78] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__value,
    STATE(17), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(13), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [194] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym__value,
    STATE(17), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(13), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [255] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym__value,
    STATE(17), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(13), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [333] = 5,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_string_content_repeat1,
    STATE(37), 1,
      sym_string_content,
    ACTIONS(61), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_pair,
    STATE(38), 1,
      sym_string,
  [366] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_pair,
    STATE(38), 1,
      sym_string,
  [382] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(71), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [396] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_pair,
    STATE(38), 1,
      sym_string,
  [412] = 4,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(77), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_repeat1,
  [439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_array_repeat1,
  [452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_object_repeat1,
  [465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_object_repeat1,
  [478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_array_repeat1,
  [491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_pair,
    STATE(38), 1,
      sym_string,
  [504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_array_repeat1,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
  [555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 143,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 177,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 221,
  [SMALL_STATE(15)] = 238,
  [SMALL_STATE(16)] = 255,
  [SMALL_STATE(17)] = 282,
  [SMALL_STATE(18)] = 299,
  [SMALL_STATE(19)] = 316,
  [SMALL_STATE(20)] = 333,
  [SMALL_STATE(21)] = 350,
  [SMALL_STATE(22)] = 366,
  [SMALL_STATE(23)] = 382,
  [SMALL_STATE(24)] = 396,
  [SMALL_STATE(25)] = 412,
  [SMALL_STATE(26)] = 426,
  [SMALL_STATE(27)] = 439,
  [SMALL_STATE(28)] = 452,
  [SMALL_STATE(29)] = 465,
  [SMALL_STATE(30)] = 478,
  [SMALL_STATE(31)] = 491,
  [SMALL_STATE(32)] = 504,
  [SMALL_STATE(33)] = 517,
  [SMALL_STATE(34)] = 525,
  [SMALL_STATE(35)] = 533,
  [SMALL_STATE(36)] = 541,
  [SMALL_STATE(37)] = 548,
  [SMALL_STATE(38)] = 555,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_json(void) {
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
