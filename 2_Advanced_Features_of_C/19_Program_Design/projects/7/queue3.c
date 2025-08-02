#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct node {
	int data;
	struct node *next;
};

struct queue_type {
	struct node *start;
	struct node *end;
};

static void terminate(const char *msg)
{
	printf("%s\n", msg);
	exit(EXIT_FAILURE);
}

Queue create(void)
{
	Queue q = malloc(sizeof(struct queue_type));
	if (q == NULL)
		terminate("Error in create: queue could not be allocated.");
	q->start = NULL;
	q->end = NULL;

	return q;
}

void destroy(Queue q)
{
	while (!is_empty(q))
		pop(q);
	free(q);
}

void push(Queue q, int value)
{
	struct node *new_node = malloc(sizeof(struct node));
	if (new_node == NULL)
		terminate("Error in push: couldn't allocate space.");

	new_node->data = value;

	if (q->end != NULL)
		q->end->next = new_node;
	q->end = new_node;

	if (q->start == NULL)
		q->start = new_node;
}

int pop(Queue q)
{
	struct node *del_node;
	int i;

	if (q->start == q->end)
		q->end = NULL;

	del_node = q->start;
	i = q->start->data;
	q->start = q->start->next;
	
	free(del_node);
	return i;
}

int get_first(Queue q)
{
	if (q->end == NULL)
		terminate("Error in get first: queue is empty.");		
	return q->end->data;
}

int get_last(Queue q)
{
	if (q->end == NULL)
		terminate("Error in get last: queue is empty.");		
	return q->start->data;
}

bool is_empty(Queue q)
{
	return q->start == NULL && q->end == NULL;
}
