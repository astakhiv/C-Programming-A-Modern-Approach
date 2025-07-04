// Name: anagrams_modified.c
// Purpose: Checks, whether two given words are anagrams
// Author: myn0name

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_LEN 20

int read_line(char *str, int n);
bool are_anagrams(const char *word1, const char *word2);

int main(void) 
{ 
    char s1[MAX_LEN], s2[MAX_LEN];

    printf("Enter first word: ");
    read_line(s1, MAX_LEN);

    printf("Enter second word: ");
    read_line(s2, MAX_LEN);

    printf("Words are ");
    if (are_anagrams(s1, s2) == false) {
        printf("not ");
    }
    printf("anagrams.\n");

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

bool are_anagrams(const char *word1, const char *word2)
{
    char letter_occurance[26] = {0}, c;
    int i;
    bool anagrams = true;

    for (i = 0; word1[i]; i++) {
        if (isalpha(word1[i])) {
            letter_occurance[tolower(word1[i]) - 'a']++;
        }
    }

    for (i = 0; word2[i]; i++) {
        if (isalpha(word2[i])) {
            letter_occurance[tolower(word2[i]) - 'a']--;
        }
    }

    for (i = 0; i < 26; i++) {
        if (letter_occurance[i] != 0) {
            anagrams = false;
            break;
        }
    }

    return anagrams;
}
