// Name: reverse_three_digit_number_no_arithm.c
// Purpose: reverse a three-digit number without the use of arithmetic
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("The reversal is: %d%d%d\n", d3, d2, d1);

    return 0;
}
