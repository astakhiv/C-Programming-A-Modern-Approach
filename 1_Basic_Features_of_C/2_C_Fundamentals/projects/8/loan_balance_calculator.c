// Name: loan_balance_calculator.c
// Purpose: Calculate balance remaining after first, second and third monthly payments
// Author: myn0name

#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment, monthly_rate, monthly_increace;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_rate = (interest_rate / 100) / 12;

    monthly_increace = loan_amount * monthly_rate;
    loan_amount = loan_amount - monthly_payment + monthly_increace;
    printf("Balance remaining after first payment: $%.2f\n", loan_amount);

    monthly_increace = loan_amount * monthly_rate;
    loan_amount = loan_amount - monthly_payment + monthly_increace;
    printf("Balance remaining after second payment: $%.2f\n", loan_amount);

    monthly_increace = loan_amount * monthly_rate;
    loan_amount = loan_amount - monthly_payment + monthly_increace;
    printf("Balance remaining after third payment: $%.2f\n", loan_amount);

    return 0;
}
