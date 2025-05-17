// Name: scrabble_value.c
// Purpose: Evaluate the value of the word in the Scrabble game
// Author: K. N. King myn0name

#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    char c, value = 0;

    printf("Enter a word: ");

    while ((c = getchar()) != '\n') {
        
        switch(toupper(c)) {
            case 'Q': case 'Z':
                value += 10; break;
            case 'J': case 'X':
                value += 8; break;
            case 'K':
                value += 5; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                value += 4; break;
            case 'B': case 'C': case 'M': case 'P':
                value += 3; break;
            case 'D': case 'G':
                value += 2; break;
            default: 
                value++; break;
        }
    }

    printf("Scrabble value: %d\n", value);
    
    return 0;
}
