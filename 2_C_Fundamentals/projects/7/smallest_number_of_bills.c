// Name: smallest_number_of_bills.c
// Purpose: Calculate the smallest number of $20, $10, $5, 1$ bills to represent given amount
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int amount, twenties, tens, fives;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenties = amount / 20;
    amount = amount - 20 * twenties;
    printf("$20 bills: %d\n", twenties);

    tens = amount / 10;
    amount = amount - 10 * tens;
    printf("$10 bills: %d\n", tens);

    fives = amount / 5;
    amount = amount - 5 * fives;
    printf("$5 bills: %d\n", fives);

    printf("$1 bills: %d\n", amount);

    return 0;
}
