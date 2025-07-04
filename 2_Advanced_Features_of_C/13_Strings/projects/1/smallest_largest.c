// Name: smallest_largest.c
// Purpose: finds alphabetically smallest and largest strings in given list
// Author: myn0name

#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main(void)
{
    char    input_word[MAX_LEN],
            smallest_word[MAX_LEN] = "zzzzzzzzzzzzzzzzzzzz",
            largest_word[MAX_LEN] = "\0\0\0\0\0\0\0\0\0\0";

    for (;;) {
        printf("Enter word: ");
        gets(input_word);

        if (strlen(input_word) == 4) {
            break;
        }

        if (strcmp(input_word, smallest_word) < 0) {
            strcpy(smallest_word, input_word);
        }

        if (strcmp(input_word, largest_word) > 0) {
            strcpy(largest_word, input_word);
        }
    }

    printf("\nSmallest: %s\nLargest: %s\n", smallest_word, largest_word);

    return 0;
}
