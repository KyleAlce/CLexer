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

    Token a = next(tok_tab);
    printf("Token type : %d\n", a.tokenType);

    for(int i=0; i<9; i++)
    {
        Token tok = link_list_get(tok_tab, i);
        printf("Token type: %d", tok.tokenType);
        if(tok.tokenType == TOKEN_NUMBER)
        {
            printf(", value: %lf", tok.value);
        }
        printf("\n");
    }

    Token b = next(tok_tab);
    printf("Token type : %d\n", b.tokenType);

    for(int i=0; i<8; i++)
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

