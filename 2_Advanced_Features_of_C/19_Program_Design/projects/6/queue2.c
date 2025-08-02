#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct queue_type {
	int *contents;
	int start;
	int end;
	int len;
	int size;
};

static void terminate(const char *msg)
{
	printf("%s\n", msg);
	exit(EXIT_FAILURE);
}

Queue create(int size)
{
	Queue q = malloc(sizeof(struct queue_type));
	if (q == NULL)
		terminate("Error in create: queue could not be allocated.");
	q->contents = malloc(size * sizeof(int));
	if (q->contents == NULL)
		terminate("Error in create: queue could not be allocated.");	
	q->start = 0;
	q->end = 0;
	q->len = 0;
	q->size = size;

	return q;
}

void destroy(Queue q)
{
	free(q->contents);
	free(q);
}

void push(Queue q, int value)
{
	if (q->len == q->size)
		terminate("Error in push: queue is full.");

	q->contents[q->start++] = value;

	if (q->start == q->size)
		q->start = 0;

	q->len++;
}

int pop(Queue q)
{
	int i;

	if (is_empty(q))
		terminate("Error in pop: queue is empty.");

	i = q->contents[q->end++];

	if (q->end == q->size)
		q->end = 0;

	q->len--;
	return i;
}

int get_first(Queue q)
{
	if (q->len == 0)
		terminate("Error in get first: queue is empty.");
	return q->contents[q->start-1];
}

int get_last(Queue q)
{
	if (q->len == 0)
		terminate("Error in get last: queue is empty.");
	return q->contents[q->end];
}

bool is_empty(Queue q)
{
	return q->len == 0;
}
