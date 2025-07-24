#include <stdio.h>
#include <stdlib.h>

void sort_50(int a[]);

int main(void)
{
	return 0;
}

// looked up
void sort_50(int a[])
{
	qsort(&a[50], 50, sizeof(a[0]), compare);
}
