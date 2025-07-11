#include <stdio.h>

#define REMINDER(n) ((n)%4)

int main(void)
{
    int i;

    for (i = 1; i < 101; i++) {
        printf("%5d %5d\n", i, REMINDER(i));
    }

    return 0;
}
