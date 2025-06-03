// Name: loan_balancer.c
// Purpose: Calculate balance remaining after given monthly payments
// Author: myn0name

#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment, monthly_rate, monthly_increace;
    int months;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of months: ");
    scanf("%d", &months);

    monthly_rate = (interest_rate / 100) / 12;

    for (int i = 1; i <= months; i++) {
        monthly_increace = loan_amount * monthly_rate;
        loan_amount = loan_amount - monthly_payment + monthly_increace;
        printf("Balance remaining after payment %d: $%.2f\n", i, loan_amount);
    }
    
    return 0;
}
