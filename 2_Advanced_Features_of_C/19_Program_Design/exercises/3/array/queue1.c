#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define QUEUE_SIZE 10

static int queue[QUEUE_SIZE];
static int start = 0;
static int end = 0;
static int len = 0;

static void terminate(const char *msg)
{
	printf("%s\n", msg);
	exit(EXIT_FAILURE);
}

void push(int value)
{
	if (len == QUEUE_SIZE)
		terminate("Error in push: queue is full.");

	queue[start++] = value;

	if (start == QUEUE_SIZE)
		start = 0;

	len++;
}

int pop(void)
{
	int i;

	if (is_empty())
		terminate("Error in pop: queue is empty.");

	i = queue[end++];

	if (end == QUEUE_SIZE)
		end = 0;

	len--;
	return i;
}

int get_first(void)
{
	return queue[start-1];
}

int get_last(void)
{
	return queue[end];
}

bool is_empty(void)
{
	return len == 0;
}
