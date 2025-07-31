#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

struct node {
	int data;
	struct node *next;
};

typedef struct node *Stack; // looked up

void make_empty(Stack *s);
bool is_empty(const Stack *s);
bool is_full(const Stack *s);
void push(Stack *s, int i);
int pop(Stack *s);

#endif
