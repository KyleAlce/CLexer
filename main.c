#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "include/lexer.h"
#include "include/linkList.h"

int main()
{
    const char* input = "   (1 + 3)* 4 / 2";
    LinkList* tok_tab = lex_expression(input);

    for(int i=0; i<10; i++)
    {
        Token tok = link_list_get(tok_tab, i);
        printf("Token type: %d", tok.tokenType);
        if(tok.tokenType == TOKEN_NUMBER)
        {
            printf(", value: %lf", tok.value);
        }
        printf("\n");
    }
    

    return EXIT_SUCCESS;
}

