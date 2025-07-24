#include <stdio.h>
#include <stdlib.h>

#include "delete_from_list.h"

struct node *add_node(struct node *list, int n);
void print_list(struct node *list);

int main(void) 
{
    struct node *list = NULL, *new_node;
	char command;
	int value;

	printf("--- Command list: ---\n");
	printf("   - a: add item to the list.\n");
	printf("   - d: delete item from the list.\n");
	printf("   - q: quit.\n");

	for(;;) {
		printf("List: ");
		print_list(list);

		printf("Enter a command: ");
		scanf("%c", &command);

		if (command == 'a') {
			printf("Enter value: ");
			scanf("%d", &value);
			list = add_node(list, value);
		} else if (command == 'd') {
			printf("Enter value: ");
			scanf("%d", &value);
			delete_from_list(&list, value);
		} else if (command == 'q') {
			break;
		} else {
			printf("Incorrect command.\n");
		}
		
		getchar();

		printf("\n");
	}
    
    return 0;
}

void delete_from_list(struct node **list, int n)
{
    struct node *cur, *prev;

    for (cur = *list, prev = NULL;
        cur != NULL && cur->value != n;
        prev = cur, cur = cur->next)
        ;

    if (cur == NULL) {
        ;
    } else if (prev == NULL) {
        *list = (*(list))->next;
    } else {
        prev->next = cur->next;
    }
    free(cur);
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
