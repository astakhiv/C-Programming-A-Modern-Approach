// Name: reverse_words_modified.c
// Purpose: Reverses words in given string
// Author: myn0name

#include <stdio.h>

#define MAX_WORDS 30
#define MAX_WORD_LEN 20


int main(void) 
{
    char sent[MAX_WORDS][MAX_WORD_LEN];    
    char ch, end = '\0';
    int i, j;
    
    printf("Enter a sentence: ");

    for (i = 0; i < MAX_WORDS; i++) {
        ch = getchar();
        while (ch == ' ')
            ch = getchar();

        for (j = 0; j < MAX_WORD_LEN; j++) {
            if (ch == '.' || ch == '!' || ch == '?') {
                sent[i][j] = '\0';
                end = ch;
                break;
            }

            if (ch == ' ') {
                sent[i][j] = '\0';
                break;
            }

            sent[i][j] = ch;
            ch = getchar();
        }

        if (end) {
            break;
        }
    }

    printf("Reversal of sentence: ");
    for (; i >= 0; i--) {
        for (j = 0; sent[i][j]; j++) {
            putchar(sent[i][j]);
        }
        putchar(' ');
    }

    printf("\b%c\n", end);

    return 0;
}
