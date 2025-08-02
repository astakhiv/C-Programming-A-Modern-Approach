#include <stdbool.h>
#include <stdio.h>
#include "queue.h"

void handle_push(Queue q);
void handle_pop(Queue q);
void handle_get_first(Queue q);
void handle_get_last(Queue q);
void handle_is_empty(Queue q);

int main(void)
{
	Queue q = create();	
	Queue q2 = create();
	char command;

	printf("--- Test the queue ---\n");
	printf("    Commands:\n"
		   "    - (i)nsert\n"
		   "    - (r)emove\n"
		   "    - get (f)isrt\n"
		   "    - get (l)ast\n"
		   "    - is (e)mpty\n"
		   "    - (q)uit\n\n");
	for (;;) {

		push(q2, 1);
		printf("Enter a command: ");
		scanf("%c", &command); 
		
		switch(command) {
			case 'i': handle_push(q);
					  break;
			case 'r': handle_pop(q);
					  break;
			case 'f': handle_get_first(q);
					  break;
			case 'l': handle_get_last(q);
					  break;
			case 'e': handle_is_empty(q);
					  break;
			case 'q': return 0; 
		}
		pop(q2);

		getchar();
	}

	destroy(q2);
	destroy(q);

	return 0;
}


void handle_push(Queue q)
{
	int value;
	
	printf("Enter the value to push: ");
	scanf("%d", &value);

	push(q, value);
}

void handle_pop(Queue q)
{
	int value = pop(q);
	printf("Value popd: %d\n", value);
}

void handle_get_first(Queue q)
{
	printf("First element in the queue: %d\n", get_first(q));
}

void handle_get_last(Queue q)
{
	printf("Last element in the queue: %d\n", get_last(q));
}

void handle_is_empty(Queue q)
{
	printf("The queue is ");
	if (is_empty(q) == false)
		printf("not ");
	printf("empty.\n");
}
