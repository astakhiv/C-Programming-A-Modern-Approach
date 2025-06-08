// Name: is_palindrome_ptr2.c
// Purpose: check, whether a message is a palindrome
// Author: myn0name

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LEN 100

int main(void)
{
    char msg[LEN], *p, *q;
    bool is_palindrome = true;
    p = msg;
    
    printf("Enter a message: ");
    while (p < msg + LEN && (*p = getchar()) != '\n') {
        if (isalpha(*p)) {
            *p = tolower(*p);
            p++;
        }
    }

    q = msg;
    p -= 1;
    

    while (p >= q) {
        if (*p != *q) {
            is_palindrome = false;
            break;
        }
        p--;
        q++;
    }

    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
