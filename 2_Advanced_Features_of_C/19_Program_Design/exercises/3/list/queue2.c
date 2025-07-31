#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct node {
	int data;
	struct node *next;
};

static struct node *start = NULL;
static struct node *end = NULL;

static void terminate(const char *msg)
{
	printf("%s\n.", msg);
	exit(EXIT_FAILURE);
}

void push(int value)
{
	struct node *new_node = malloc(sizeof(struct node));
	if (new_node == NULL)
		terminate("Error in push: couldn't allocate space.");

	new_node->data = value;

	if (end != NULL)
		end->next = new_node;
	end = new_node;

	if (start == NULL)
		start = new_node;
}

int pop(void)
{
	struct node *del_node;
	int i;

	if (start == end)
		end = NULL;

	del_node = start;
	i = start->data;
	start = start->next;
	
	free(del_node);
	return i;
}

int get_first(void)
{
	return end->data;
}

int get_last(void)
{
	return start->data;
}

bool is_empty(void)
{
	return start == NULL && end == NULL;
}
