// Name: amount_with_tax.c
// Purpose: calculate the amount with 5% tax of the inputed amount
// Author: myn0name

#include <stdio.h>

#define TAX_COEFITIENT (5.0f / 100.0f)

int main(void) 
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f", amount + amount * TAX_COEFITIENT);

    return 0;
}
