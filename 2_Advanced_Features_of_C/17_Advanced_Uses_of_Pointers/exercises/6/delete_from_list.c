#include <stdio.h>
#include <stdlib.h>

#include "delete_from_list.h"

struct node *delete_from_list(struct node *list, int n)
{
    struct node *p;

    for (p = list;
         p != NULL && p->next != NULL && p->next->value != n;
         p = p->next)
        ;
    
    if (p == NULL) {                    /* Received a NULL */
        return NULL;
    } else if (list->value == n) {      /* First element is to be deleted */
        return list->next;
    } else if (p->next == NULL) {       /* Element not found */
        return list;
    } else if (p->next->value == n) {
        p->next = p->next->next;
    }

    return list;
}
