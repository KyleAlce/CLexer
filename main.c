#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "lexer.h"

int main()
{
    const char* input = "      1 + ( 4 * 2 ) / 4   ";
    lex_expression(input);
    return EXIT_SUCCESS;
}

