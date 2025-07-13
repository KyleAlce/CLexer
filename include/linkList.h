#ifndef LINKLIST_H
#define LINKLIST_H

#include "token.h"

typedef struct LinkList LinkList; 

struct LinkList {
    Token value;
    LinkList* next;        
};

LinkList* link_list_init();
void link_list_append(LinkList* list, Token tok);
Token link_list_pop(LinkList* list);
Token link_list_get(LinkList *list, int ind);

#endif