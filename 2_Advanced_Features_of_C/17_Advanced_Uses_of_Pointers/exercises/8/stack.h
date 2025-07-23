#include <stdbool.h>

struct node {
    int value;
    struct node *next;
};

/****************************************
 * make_empty: Sets stack pointer to 0. *
 ****************************************/
void make_empty(void);

/****************************************
 * is_empty: Returns 1 if stack is      *
 *           NULL, 0 otherwise.         *
 ****************************************/
bool is_empty(void);

/****************************************
 * push: Adds element to the top of the *
 *       stack unless overflow. returns *
 *       true if successfully allocated *
 *       storage for it, false          *
 *       otherwise.                     *
 ****************************************/
bool push(int i);

/****************************************
 * pop: Returns the element from the    *
 *      top of the stack, unless        *
 *      underflow.                      *
 ****************************************/
int pop(void);

/****************************************
 * stack_overflow: Prints error message *
 *                 and exits            *
 ****************************************/
void stack_overflow(void);

/****************************************
 * stack_underflow: Prints error        *
 *                  message and exits   *
 ****************************************/
void stack_underflow(void);
