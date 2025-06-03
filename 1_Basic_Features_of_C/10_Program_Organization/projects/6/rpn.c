// Name: rpn.c
// Purpose: Evaluates an expression, given in the Reverse Polish Notaion
// Author: myn0name

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
void exit_bad(void);

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

void make_empty(void)
{
    top = 0;
}

bool is_empty(void) 
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full()) {
        stack_overflow();
    } else {
        contents[top++] = i;
    }
}

int pop(void) 
{
    if (is_empty()) {
        stack_underflow();
    } else {
        return contents[--top];
    }
}

void stack_overflow(void) 
{
    printf("Expression is too complex\n");
    exit(0);
}


void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(0);
}

   
