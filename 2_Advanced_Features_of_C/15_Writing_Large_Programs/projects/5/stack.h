#include <stdbool.h>

/****************************************
 * make_empty: Sets stack pointer to 0. *
 ****************************************/
void make_empty(void);

/****************************************
 * is_empty: Returns 1 if stack pointer *
 *           is 0, 0 otherwise.         *
 ****************************************/
bool is_empty(void);

/****************************************
 * is_full: Returns 1 if stack pointer  *
 *          is STACK_SIZE, 0 otherwise. *
 ****************************************/
bool is_full(void);

/****************************************
 * push: Adds element to the top of the *
 *       stack unless overflow.         *
 ****************************************/
void push(int i);

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
