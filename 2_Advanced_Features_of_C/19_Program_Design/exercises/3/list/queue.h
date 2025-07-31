#include <stdbool.h>

/************************************************************
 * insert: insert an item to the begining of the queue.		*
 ************************************************************/
void push(int value);

/************************************************************
 * remove: removes an item from the end of the queue		*
 ************************************************************/
int pop(void);

/************************************************************
 * get_first: returns the first item in the queue without	*
 *			  removing it from the queue.					*
 ************************************************************/
int get_first(void);

/************************************************************
 * get_last: returns the last item in the queue without		*
 *			 removing it from the queue.					*
 ************************************************************/
int get_last(void);

/************************************************************
 * is_empty: returns true if the queue is empty, false 		*
 *			 otherwise.										*
 ************************************************************/
bool is_empty(void);
