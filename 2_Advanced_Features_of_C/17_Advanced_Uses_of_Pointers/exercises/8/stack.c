#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

/* external variables */
struct node *stack = NULL;

int main(void)
{
    return 0;
}

void make_empty(void)
{
    struct node *temp;
    
    while(stack != NULL) {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
}

bool is_empty(void) 
{
    return stack == NULL;
}

bool push(int i)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        return false;
    }

    new_node->value = i;
    new_node->next = stack;
    stack = new_node;

    return true;
}

int pop(void) 
{
    int top_val;
    struct node *temp;

    if (is_empty()) {
        printf("*** Stack underflow; program terminated. ***\n");
        exit(EXIT_FAILURE);
    } 

    top_val = stack->value;
    temp = stack;
    stack = stack->next;
    free(temp);

    return top_val;
}
