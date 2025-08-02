// Name: parantheses.c
// Purpose: Check, whether given string of parantheses and brackets is valid using stack
// Author: myn0name

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "stackADT.h"

int main(void) 
{
	Stack s = create();
    char c, stack_val;
    printf("Etner parantheses and/or braces: ");
   
    while ((c = getchar()) != '\n') {
        if (c == '(' || c == '{') {
            push(s, c);
        } else if (c == ')' || c == '}') {
            stack_val = pop(s);

            if (c == ')' && stack_val != '(' || c == '}' && stack_val != '{') {
                printf("Parantheses/braces are not nested properly\n");
				destroy(s);
                exit(0);
            }
        }
    }
    printf("Parantheses/braces are nested properly.\n");
	destroy(s);
	
    return 0;
}
