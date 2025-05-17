// Name: fractions.c
// Purpose: add two fractions given in a row
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int num_1, denom_1, num_2, denom_2, result_num, result_denom;
    char op;

    printf("Enter two fractions separated by an operation sign (+, -, *, /): ");
    scanf("%d / %d %c %d / %d", &num_1, &denom_1, &op, &num_2, &denom_2);

    if (op == '+') {
        result_num = num_1 * denom_2 + num_2 * denom_1;
        result_denom = denom_1 * denom_2;
    } else if (op == '-') {
        result_num = num_1 * denom_2 - num_2 * denom_1;
        result_denom = denom_1 * denom_2;
    } else if (op == '*') {
        result_num = num_1 * num_2;
        result_denom = denom_1 * denom_2;
    } else if (op == '/') {
        result_num = num_1 * denom_2;
        result_denom = denom_1 * num_2;
    }

    printf("The result is %d/%d\n", result_num, result_denom);
    

    return 0;
}
