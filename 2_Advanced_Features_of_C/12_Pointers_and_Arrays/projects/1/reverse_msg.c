// Name: reverse_msg.c
// Purpose: Prints given message in reverse
// Author: K. N. King, myn0name

#include <stdio.h>

#define LEN 100

int main(void)
{
    char msg[LEN];
    int i = 0;

    printf("Enter a message: ");
    while (i < LEN && (msg[i] = getchar()) != '\n') {
        i++;
    }

    printf("Reversal is: ");
    for (i--; i >= 0; i--) {
        putchar(msg[i]);
    }
    putchar('\n');

    return 0;
}
