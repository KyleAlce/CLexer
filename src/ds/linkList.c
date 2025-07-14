#include <stdio.h>
#include <stdlib.h>
#include "linkList.h"



LinkList* link_list_init()
{
    LinkList* head = malloc(sizeof(LinkList));
    head->next = NULL;
    return head;
}

void link_list_append(LinkList* list, Token tok)
{
    LinkList* to_insert = malloc(sizeof(LinkList));
    to_insert->value = tok;
    to_insert->next = NULL;

    LinkList* cur = list;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }

    cur->next = to_insert;
}

Token link_list_pop(LinkList* list)
{
    if(list->next == NULL)
    {
        return (Token){TOKEN_INVALID, 0, {0, 0}};
    }

    LinkList* cur = list;
    while(cur->next->next != NULL)
    {
        cur = cur->next;
    }

    Token to_return = cur->value;
    free(cur->next);
    cur->next = NULL;

    return to_return;
}

Token link_list_get(LinkList *list, int ind)
{
    if(list->next == NULL || ind < 0)
    {
        return (Token){TOKEN_INVALID, 0.0, {0, 0}};
    }

    LinkList* cur = list->next;
    while (ind > 0 && cur->next != NULL)
    {
        cur = cur->next;
        ind--;
    }

    if(ind > 0)
    {
        return (Token){TOKEN_INVALID, 0.0, {0, 0}};    
    }

    return cur->value ;
    
}

//get the first element
Token peek(LinkList *list)
{
    //pass the heap and get the first element
    return list->next->value;
}

//pop the first element
Token next(LinkList *list)
{
    //If list is empty
    if(list->next == NULL)
    {
        return (Token){TOKEN_INVALID, 0, {0,0}};
    }

    Token to_return = list->next->value;

    LinkList* next_value = list->next->next;
    free(list->next);
    list->next = next_value;

    return to_return;
}