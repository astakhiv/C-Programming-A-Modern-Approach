// Name: avrg_word_len_in_sent.c
// Purpose: Calculates average length of word for the sentence
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    float num_of_non_space = 0;
    int num_of_words = 0;
    char c;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        if (c == ' ') {
            while ((c = getchar()) == ' ')
                ;
            num_of_words++;
        }

        num_of_non_space++;
    }
    num_of_words++;

    printf("Average word length: %.1f\n", num_of_non_space / num_of_words);

    return 0;
}
