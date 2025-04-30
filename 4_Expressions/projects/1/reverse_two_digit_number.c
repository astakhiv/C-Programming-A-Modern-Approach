// Name: reverse_two_digit_number.c
// Purpose: print reversed two-digit number
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("The reversal is: %d%d\n", num % 10, num / 10);

    return 0;
}
