// Name: name.c
// Purpose: print given name in LN, FN. format
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    char first_name_first_letter, c;

    printf("Enter a first and last name: ");
    
    while((first_name_first_letter = getchar()) == ' ')
        ;

    while(getchar() != ' ')
        ;

    while((c = getchar()) == ' ')
        ;

    putchar(c);

    while((c = getchar()) != '\n') {
        if (c != ' ') {
            putchar(c);
        }
    }

    printf(", %c.\n", first_name_first_letter);

    return 0;
}
