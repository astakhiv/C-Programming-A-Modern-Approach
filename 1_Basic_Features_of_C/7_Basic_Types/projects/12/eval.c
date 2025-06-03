// Name: eval.c
// Puspose: evaluate an expression
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    float operand1 = 0, operand2 = 0;
    char op;

    printf("Enter an expression: ");
    scanf("%f", &operand1);

    while (1) {
        op = getchar();
        
        if (op == '\n') {
            break;
        }

        scanf("%f", &operand2);

        switch (op) {
            case '+':
                operand1 += operand2;
                break;
            case '-':
                operand1 -= operand2;
                break;
            case '*':
                operand1 *= operand2;
                break;
            case '/':
                operand1 /= operand2;
                break;
        }   
    }

    printf("Value of expression: %.1f\n", operand1);

    return 0;
}
