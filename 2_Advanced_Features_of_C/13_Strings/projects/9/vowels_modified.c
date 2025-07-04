// Name: vowels_modified.c
// Purpose: Conunts vowels in a sentence
// Author: myn0name

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int compute_vowel_count(const char *sentence);
int read_line(char *str, int n);

int main(void) 
{
    int vowels;
    char str[MAX_LEN];

    printf("Enter a sentence: ");
    read_line(str, MAX_LEN); 
    
    vowels = compute_vowel_count(str);

    printf("Your sentence contains %d vowels.\n", vowels);

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

int compute_vowel_count(const char *sentence)
{
    int vowels = 0;
    char *p;

    for (p = sentence; *p; p++) {
        switch(toupper(*p)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++; break;
        }
    }

    return vowels;
}
