// Name: avrg_word_len_in_sent_modified.c
// Purpose: Calculates average length of word for the sentence
// Author: myn0name

#include <stdio.h>

#define MAX_LEN 100

int read_line(char *str, int n);
double compute_average_word_length(const char *sentence);

int main(void) 
{
    char s[MAX_LEN];
    float avrg_word_len_in_sent;

    printf("Enter a sentence: ");
    read_line(s, MAX_LEN);
    
    avrg_word_len_in_sent = compute_average_word_length(s);

    printf("Average word length: %.1f\n", avrg_word_len_in_sent);

    return 0;
}

int read_line(char *str, int n)
{
    char ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';

    return i;
}

double compute_average_word_length(const char *sentence)
{
    float num_of_non_space = 0;
    int num_of_words = 0;
    char *p = sentence;

    while (*p) {
        if (*p == ' ') {
            while (*p == ' ')
                p++;
            num_of_words++;
        }

        num_of_non_space++;
        p++;
    }
    num_of_words++;

    return num_of_non_space / num_of_words;
}
