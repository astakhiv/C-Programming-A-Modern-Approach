#include <stdio.h>
#include <stdlib.h>

#define LEN 10

int compare(const void *p, const void *q);

int main(void)
{
	int a[10], i, value;

	for (i = 0; i < LEN; i++) {
		printf("Enter an integer: ");
		scanf("%d", &value);

		a[i] = value;
	}

	printf("Array: ");
	for (i = 0; i < LEN; i++) {
		printf(" %d", a[i]);
	}
	printf("\n");	

	qsort(a, 10, sizeof(a[0]), compare);

	printf("Sorted: ");
	for (i = 0; i < LEN; i++) {
		printf(" %d", a[i]);
	}
	printf("\n");

	return 0;
}

int compare(const void *p, const void *q)
{
	
	return (*((int *) q) - *((int *) p));
}
