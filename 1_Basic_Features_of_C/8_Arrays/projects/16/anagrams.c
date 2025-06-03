// Name: anagrams.c
// Purpose: Checks, whether two given words are anagrams
// Author: myn0name

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    char letter_occurance[26] = {0};
    char c;
    int i;
    bool anagrams = true;
    

    printf("Enter first word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            c = tolower(c);
            letter_occurance[c - 'a']++;
        }
    }

    printf("Enter second word: ");
    while((c = getchar()) != '\n') {
        if (isalpha(c)) {
            c = tolower(c);
            letter_occurance[c - 'a']--;
        }
    }

    for (i = 0; i < 26; i++) {
        if (letter_occurance[i] != 0) {
            anagrams = false;
            break;
        }
    }

    printf("Words are ");
    if (anagrams == false) {
        printf("not ");
    }
    printf("anagrams.\n");

    return 0;
}
