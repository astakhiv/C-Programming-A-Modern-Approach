// Name: reverse_words.c
// Purpose: Reverses words in given string
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    char sent[100];
    char end, c;
    int i, j, end_i;
    
    printf("Enter a sentence: ");
    c = getchar(); 
    for (i = 0; c != '.' && c != '?' && c != '!'; i++) {
        sent[i] = c;
        c = getchar();
    }
    end = c;
    end_i = i;

    printf("Reversal of sentence: ");
    for (i = end_i - 1; i >= 0; i--) {
        if (i - 1 < 0 || sent[i-1] == ' ') { 
            for (j = i; sent[j] != ' ' && j < end_i; j++) {
                printf("%c", sent[j]);
            }
            printf(" ");
        }
    }
    printf("\b%c\n", end);

    return 0;
}
