// Name: rpn.c
// Purpose: Evaluates an expression, given in the Reverse Polish Notaion
// Author: myn0name

#include <stdio.h>

#include "stack.h"

int main(void) 
{
    char c, a, b;

    printf("Enter an RPN expression: ");
    scanf(" %c", &c);
    for(;;) {
        if (48 <= c && c <= 57) {
            push(c - '0');
        } else if (c == '=') {
            printf("Value of expression: %d\n", pop());
            printf("Enter an RPN expression: ");
        } else {
            b = pop();
            a = pop();
            if (c == '+') {
                push(a + b);
            } else if (c == '-') {
                push(a - b);
            } else if (c == '*') {
                push(a * b);
            } else if (c == '/') {
                push(a / b);
            } else {
                break;
            }
        }

        scanf(" %c", &c);
    }

    return 0;
}
