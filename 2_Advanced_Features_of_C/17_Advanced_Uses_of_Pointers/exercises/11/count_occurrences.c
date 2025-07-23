#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int count_occurrences(struct node *list, int n);
struct node *add_node(struct node *list, int n);
void print_list(struct node *list);

int main(void) 
{
    struct node *list = NULL, *new_node;
    int search_el;
    
    printf("--- Creating a linked list ---\n");
    printf("    (Enter -1 to stop)\n");
    for(;;) {
        new_node = malloc(sizeof(struct node));
        if (new_node == NULL) {
            printf("Couldn't allocate space for new node.\n");
            exit(EXIT_FAILURE);
        }
        printf("Enter integer element: ");
        scanf("%d", &new_node->value);
        if (new_node->value == -1) {
            free(new_node);
            break;
        }
        new_node->next = list;
        list = new_node;
    }

    printf("Your list: ");
    print_list(list);

    printf("--- Counting elements ---\n");
    printf("    (Enter -1 to exit)\n");
    for(;;) {
        printf("Enter the element to count: ");
        scanf("%d", &search_el);
        if (search_el == -1) {
            break;
        }

        printf("Your list has %d occurances of %d.\n", count_occurrences(list, search_el), search_el);
    }

    return 0;
}


int count_occurrences(struct node *list, int n)
{
    int num = 0;

    for (; list != NULL; list = list->next)
        if (list->value == n)
            num++;

    return num;
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
