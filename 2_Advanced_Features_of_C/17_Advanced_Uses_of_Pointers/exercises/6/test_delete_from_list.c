#include <stdio.h>
#include <stdlib.h>

#include "delete_from_list.h"

struct node *add_node(struct node *list, int n);
void print_list(struct node *list); 

int main(void)
{
    struct node *list = NULL;

    list = add_node(list, 10);
    list = add_node(list, 20);
    list = add_node(list, 14);
    list = add_node(list, 40);

    print_list(list);

    list = delete_from_list(list, 14);
    print_list(list);   

    delete_from_list(NULL, 10);
 
    list = delete_from_list(list, 10);
    print_list(list);

    list = add_node(list, 60);
    list = add_node(list, 90);

    print_list(list);

    list = delete_from_list(list, 90);
    print_list(list);

    return 0;
}

struct node *add_node(struct node *list, int n)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    new_node->value = n;
    new_node->next = list;
    
    return new_node;
}

void print_list(struct node *list)
{
    for (; list != NULL; list = list->next) {
        printf("%d -> ", list->value);
    }

    printf("\n");
}
