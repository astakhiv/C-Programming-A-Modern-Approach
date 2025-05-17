// Name: name2.c
// Purpose: print given name in LN, FN. format
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    char last_name[21];
    char first_name_first_letter, c;
    int i;

    printf("Enter a first and last name: ");
    
    while((first_name_first_letter = getchar()) == ' ')
        ;

    while(getchar() != ' ')
        ;

    while((c = getchar()) == ' ')
        ;

    last_name[0] = c;
    for (i = 1; (c = getchar()) != '\n'; i++) {
        if (c != ' ') {
            last_name[i] = c;
        }
    }
    last_name[i] = '\0';
        
    printf("You entered the name: ");
    for (int i = 0; last_name[i] != '\0'; i++) {
        putchar(last_name[i]);
    }
    printf(", %c.\n", first_name_first_letter);

    return 0;
}
