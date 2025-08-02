#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef struct queue_type *Queue;

Queue create(int size);
void destroy(Queue q);
/************************************************************
 * insert: insert an item to the begining of the queue.		*
 ************************************************************/
void push(Queue q, int value);

/************************************************************
 * remove: removes an item from the end of the queue		*
 ************************************************************/
int pop(Queue q);

/************************************************************
 * get_first: returns the first item in the queue without	*
 *			  removing it from the queue.					*
 ************************************************************/
int get_first(Queue q);

/************************************************************
 * get_last: returns the last item in the queue without		*
 *			 removing it from the queue.					*
 ************************************************************/
int get_last(Queue q);

/************************************************************
 * is_empty: returns true if the queue is empty, false 		*
 *			 otherwise.										*
 ************************************************************/
bool is_empty(Queue q);

#endif
