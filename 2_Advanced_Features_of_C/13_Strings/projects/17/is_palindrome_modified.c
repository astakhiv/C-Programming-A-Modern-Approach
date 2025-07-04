// Name: is_palindrome_modified.c
// Purpose: check, whether a message is a palindrome
// Author: myn0name

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LEN 100

int read_line(char *str, int n);
bool is_palindrome(const char *message);

int main(void)
{
    char msg[LEN]; 

    printf("Enter a message: ");
    read_line(msg, LEN);
    
    if (is_palindrome(msg)) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

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

bool is_palindrome(const char *message)
{
    char *p, *q;
    bool palindrome = true;

    q = message;
    while (*q && *(q+1))
        q++;

    p = message;
    while (p < q) {
        if (isalpha(*p) == false) {
            p++;
            continue;
        }

        if (isalpha(*q) == false) {
            q--;
            continue;
        }

        if (tolower(*p) != tolower(*q))
            return false;

        p++;
        q--;
    }

    return true;   
}
