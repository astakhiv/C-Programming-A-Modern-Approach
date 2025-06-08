// Name: is_palindrome.c
// Purpose: check, whether a message is a palindrome
// Author: myn0name

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LEN 100

int main(void)
{
    char msg[LEN];
    int i, j;
    bool is_palindrome = true;

    
    printf("Enter a message: ");
    while (i < LEN && (msg[i] = getchar()) != '\n') {
        if (isalpha(msg[i])) {
            msg[i] = tolower(msg[i]);
            i++;
        }
    }

    j = 0;
    i -= 1;

    while (i >= j) {
        if (msg[i] != msg[j]) {
            is_palindrome = false;
            break;
        }
        i--;
        j++;
    }

    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
