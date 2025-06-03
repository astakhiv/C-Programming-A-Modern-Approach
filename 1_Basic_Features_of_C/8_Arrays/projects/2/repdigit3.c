// Name: repdigit3.c
// Purpose: Checks numbers for repeated digits and prints number of ocurance for each of them
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

    printf("Digit:\t\t");
    for (digit = 0; digit <= 9; digit++) {
        printf(" %3d", digit);
    }
    printf("\nOccurences:\t");
    for (digit = 0; digit <= 9; digit++) {
        printf(" %3d", digit_seen[digit]);
    }
    printf("\n");

    return 0;
}
