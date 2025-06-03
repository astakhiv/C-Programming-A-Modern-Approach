// Name: smallest_number_of_bills2.c
// Purpose: Calculate the smallest number of $20, $10, $5, 1$ bills to represent given amount
// Author: myn0name

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) 
{
    int amount, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    pay_amount(amount, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars -= 20 * *twenties;
    *tens = dollars / 10;
    dollars -= 10 * *tens;
    *fives = dollars / 5;
    *ones = dollars - 5 * *fives;
}
