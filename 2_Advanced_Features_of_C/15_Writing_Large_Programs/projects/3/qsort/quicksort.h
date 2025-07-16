/***********************************************
 * quicksort: Implements the key algorithm     *
 *            behind quicksort.                *
************************************************/
void quicksort(int a[], int low, int high);

/***********************************************
 * split: picks a partioning element and       *
 *        splits the a array, placing elements *
 *        less than it to the left, and those  *
 *        that are more - to the right         *
 ***********************************************/
int split(int a[], int low, int high);
