// Name: repdigit2.c
// Purpose: Checks numbers for repeated digits and prints if there are any
// Author: K. N. King, myn0name

#include <stdio.h>

int main(void) 
{
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;

        digit_seen[digit]++;
        n /= 10;
    }

    printf("Repeated digit(s):");
    for (digit = 0; digit <= 9; digit++) {
        if (digit_seen[digit] > 1) {
            printf(" %d", digit);
        }
    }
    printf("\n");

    return 0;
}
