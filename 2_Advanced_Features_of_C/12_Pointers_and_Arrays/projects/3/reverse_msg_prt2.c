// Name: reverse_msg_ptr2.c
// Purpose: Prints given message in reverse
// Author: K. N. King, myn0name

#include <stdio.h>

#define LEN 100

int main(void)
{
    char msg[LEN], *p;
    p = msg;

    printf("Enter a message: ");
    while (p < msg + LEN && (*p = getchar()) != '\n') {
        p++;
    }

    printf("Reversal is: ");
    for (p--; p >= msg; p--) {
        putchar(*p);
    }
    putchar('\n');

    return 0;
}
