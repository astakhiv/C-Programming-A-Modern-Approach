// Name: rpn_modified.c
// Purpose: Evaluates an expression, given in the Reverse Polish Notaion
// Author: myn0name

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100
#define MAX_LEN 80

/* external variables */
int contents[STACK_SIZE];
int top = 0;

int read_line(char *str, int n);
int evaluate_RPN_expression(const char *expression);

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
    char exp[MAX_LEN];

    for (;;) {
        printf("Enter RPN expression: ");
        read_line(exp, MAX_LEN);
        printf("Value of expression is: %d\n", evaluate_RPN_expression(exp));
    }

    return 0;
}

int read_line(char *str, int n)
{
    char ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';

    return i;
}

int evaluate_RPN_expression(const char *expression)
{
    char c, a, b;
    int i;

    for(i = 0; expression[i]; i++) {
        c = expression[i];
        while (c == ' ') {
            c = expression[i++];
        }

        if (48 <= c && c <= 57) {
            push(c - '0');
        } else if (c == '=') {
            return pop();
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
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
            }
        } else {
            exit(0);
        }
    }
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

   
