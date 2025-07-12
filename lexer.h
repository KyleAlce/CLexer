#ifndef LEXER_H
#define LEXER_H

#include "token.h"

typedef struct 
{
    const char* input;
    int pos;
    char current_char;
}Lexer;

void lexer_next(Lexer* lexer);
void lexer_skip_whitespace(Lexer* lexer);
double lexer_parse_number(Lexer* lexer);
Token lexer_get_next_token(Lexer* lexer);
void lex_expression(const char* input);

#endif