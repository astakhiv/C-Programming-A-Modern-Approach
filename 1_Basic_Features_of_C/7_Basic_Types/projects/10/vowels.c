// Name: vowels.c
// Purpose: Conunts vowels in a sentence
// Author: myn0name

#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    char c;
    int vowels = 0;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        switch (toupper(c)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++; break;
        }
    }
    
    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;
}
