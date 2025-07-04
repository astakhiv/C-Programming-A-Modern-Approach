// Name: scrabble_value_modified.c
// Purpose: Evaluate the value of the word in the Scrabble game
// Author: K. N. King myn0name

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 20

int compute_scrabble_value(const char *word);

int main(void) 
{
    char s[MAX_LEN];
    int value = 0;

    printf("Enter a word: ");
    scanf("%s", s);

    value = compute_scrabble_value(s);

    printf("Scrabble value: %d\n", value);
    
    return 0;
}

int compute_scrabble_value(const char *word)
{
    int value = 0, i;

    for (i = 0; word[i]; i++) {
        switch(toupper(word[i])) {
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

    return value;
}
