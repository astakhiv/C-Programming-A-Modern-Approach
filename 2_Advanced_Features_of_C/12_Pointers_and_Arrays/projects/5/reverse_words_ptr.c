// Name: reverse_words_ptr.c
// Purpose: Reverses words in given string
// Author: myn0name

#include <stdio.h>

#define LEN 100

int main(void) 
{
    char sent[LEN];
    char end, c;
    char *p, *q, *end_p;
    
    printf("Enter a sentence: ");

    c = getchar(); 
    for (p = sent; p < sent + LEN && c != '.' && c != '?' && c != '!'; p++) {
        *p = c;
        c = getchar();
    }
    end = c;
    end_p = p;

    printf("Reversal of sentence: ");
    for (p -= 1; p >= sent; p--) {
        if (p - 1 < sent || *(p-1) == ' ') { 
            for (q = p; *q != ' ' && q < end_p; q++) {
                printf("%c", *q);
            }
            printf(" ");
        }
    }
    printf("\b%c\n", end);

    return 0;
}
