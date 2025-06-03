// Name: parantheses.c
// Purpose: Check, whether given string of parantheses and brackets is valid using stack
// Author: myn0name

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);
void exit_bad(void);

int main(void) 
{
    char c, stack_val;
    printf("Etner parantheses and/or braces: ");
   
    while ((c = getchar()) != '\n') {
        if (c == '(' || c == '{') {
            push(c);
        } else if (c == ')' || c == '}') {
            stack_val = pop();

            if (c == ')' && stack_val != '(' || c == '}' && stack_val != '{') {
                printf("Parantheses/braces are not nested properly\n");
                exit(0);
            }
        }
    }
    printf("Parantheses/braces are nested properly.\n");

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

void push(char c)
{
    if (is_full()) {
        stack_overflow();
    } else {
        contents[top++] = c;
    }
}

char pop(void) 
{
    if (is_empty()) {
        stack_underflow();
    } else {
        return contents[--top];
    }
}

void stack_overflow(void) 
{
    printf("Stack overflow\n");
    exit(0);
}


void stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(0);
}

    
