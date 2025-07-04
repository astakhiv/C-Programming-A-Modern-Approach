// Name: reverse_msg_modified.c
// Purpose: Prints given message in reverse
// Author: K. N. King, myn0name

#include <stdio.h>

#define LEN 100

int read_line(char *str, int n);
void reverse(char *message);

int main(void)
{
    char msg[LEN];

    printf("Enter a message: ");
    read_line(msg, LEN);

    reverse(msg);
    printf("Reversal is: ");
    printf("%s\n", msg);

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

void reverse(char *message)
{
    char *p, *q, temp;
    
    q = message;
    while (*q && *(q+1))
        q++;


    for (p = message; p < q; p++, q--) {
        temp = *p;
        *p = *q;
        *q = temp;
    }
}
