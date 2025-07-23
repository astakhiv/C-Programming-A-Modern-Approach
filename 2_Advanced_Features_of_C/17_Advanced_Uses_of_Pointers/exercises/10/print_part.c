#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 20

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};

int read_line(char str[], int n);
void print_part(struct part *p);

int main(void)
{
    struct part *p;

    p = malloc(sizeof(struct part));
    if (p == NULL) {
        printf("Could't allocate enough space.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter the number of part: ");
    scanf("%d", &p->number);
    printf("Enter the name of part: ");
    read_line(&p->name, NAME_LEN);
    printf("Enter the quantity on hand: ");
    scanf("%d", &p->on_hand);

    printf("\n\n");
    printf("--- Your part data ---\n");
    print_part(p);

    return 0;
}

void print_part(struct part *p)
{
    printf("Part number: %d\n", p->number);
    printf("Part name: %s\n", p->name);
    printf("Quantity on hand: %d\n", p->on_hand);
}

int read_line(char *str, int n)
{
    int ch, i = 0;

    while (isspace(ch = getchar()))
        ;
    while (ch != '\n' && ch != EOF) {
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}
