#include <stdbool.h>
#include <stdio.h>
#include "queue.h"

void handle_push(void);
void handle_pop(void);
void handle_get_first(void);
void handle_get_last(void);
void handle_is_empty(void);

int main(void)
{
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
		printf("Enter a command: ");
		scanf("%c", &command); 
		
		switch(command) {
			case 'i': handle_push();
					  break;
			case 'r': handle_pop();
					  break;
			case 'f': handle_get_first();
					  break;
			case 'l': handle_get_last();
					  break;
			case 'e': handle_is_empty();
					  break;
			case 'q': return 0; 
		}

		getchar();
	}

	return 0;
}


void handle_push(void)
{
	int value;
	
	printf("Enter the value to push: ");
	scanf("%d", &value);

	push(value);
}

void handle_pop(void)
{
	int value = pop();
	printf("Value poped: %d\n", value);
}

void handle_get_first(void)
{
	printf("First element in the queue: %d\n", get_first());
}

void handle_get_last(void)
{
	printf("Last element in the queue: %d\n", get_last());
}

void handle_is_empty(void)
{
	printf("The queue is ");
	if (is_empty() == false)
		printf("not ");
	printf("empty.\n");
}
