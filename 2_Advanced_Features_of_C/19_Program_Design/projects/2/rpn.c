// Name: rpn.c
// Purpose: Evaluates an expression, given in the Reverse Polish Notaion
// Author: myn0name

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "stackADT.h"

int main(void) 
{
	Stack s = create();
    char c, a, b;

    printf("Enter an RPN expression: ");
    scanf(" %c", &c);
    for(;;) {
        if (48 <= c && c <= 57) {
            push(s, c - '0');
        } else if (c == '=') {
            printf("Value of expression: %d\n", pop(s));
            printf("Enter an RPN expression: ");
        } else {
            b = pop(s);
            a = pop(s);
            if (c == '+') {
                push(s, a + b);
            } else if (c == '-') {
                push(s, a - b);
            } else if (c == '*') {
                push(s, a * b);
            } else if (c == '/') {
                push(s, a / b);
            } else {
                break;
            }
        }

        scanf(" %c", &c);
    }
	destroy(s);

    return 0;
}
