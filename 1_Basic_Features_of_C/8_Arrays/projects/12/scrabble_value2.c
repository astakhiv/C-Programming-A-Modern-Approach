// Name: scrabble_value2.c
// Purpose: Evaluate the value of the word in the Scrabble game
// Author: K. N. King myn0name

#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    int values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char c, value = 0;

    printf("Enter a word: ");

    while ((c = getchar()) != '\n') {
        value += values[toupper(c) - 'A'];        
    }

    printf("Scrabble value: %d\n", value);
    
    return 0;
}
