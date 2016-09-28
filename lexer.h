#ifndef _LEXER_H_
#define _LEXER_H_

#include "token.h"

typedef struct Lexer {
  char *source_code;
  int cursor;
  Token *tokens;
} Lexer;

Lexer lexer_init(char* source_code);
Token* lexer_get_next_token(Lexer* lexer);

#endif
