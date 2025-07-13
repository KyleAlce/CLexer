#ifndef LINKLIST_H
#define LINKLIST_H

#include "../../include/token.h"

typedef struct LinkList LinkList;

struct LinkList {
    Token value;
    LinkList* next;        
};

LinkList* init_link_list();
void link_list_append(LinkList* list, Token tok);
Token link_list_pop(LinkList* list);
Token link_list_get(LinkList *list, int ind);

#endif