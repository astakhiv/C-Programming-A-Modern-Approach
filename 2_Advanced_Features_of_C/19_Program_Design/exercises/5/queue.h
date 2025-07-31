#define QUEUE_SIZE 10

typedef struct {
	int queue[QUEUE_SIZE];
	int start;
	int end;
	int len;
} Queue;

/************************************************************
 * insert: insert an item to the begining of the queue.		*
 ************************************************************/
void insert(Queue *q, int value);

/************************************************************
 * remove: removes an item from the end of the queue		*
 ************************************************************/
int remove(Queue *q);

/************************************************************
 * get_first: returns the first item in the queue without	*
 *			  removing it from the queue.					*
 ************************************************************/
int get_first(Queue *q);

/************************************************************
 * get_last: returns the last item in the queue without		*
 *			 removing it from the queue.					*
 ************************************************************/
int get_last(Queue *q);

/************************************************************
 * is_empty: returns true if the queue is empty, false 		*
 *			 otherwise.										*
 ************************************************************/
bool is_empty(Queue *q);
