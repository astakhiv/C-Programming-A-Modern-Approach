#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b);

int main(int argc, char *argv[])
{
	FILE *inp;
	int nums[10000], i, j;

	if (argc != 2) {
		fprintf(stderr, "usage: nums filename\n");
		exit(EXIT_FAILURE);
	}

	if ((inp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	i = 0;
	while (fscanf(inp, " %d ", &nums[i]) != EOF)
		i++;

	qsort(nums, i, sizeof(int), comp);

	printf("Largest: %d\n", nums[i-1]);
	printf("Smallest: %d\n", nums[0]);

	printf("Median: ");
	if (i % 2 == 0) 
		printf("%d\n", (nums[i/2] + nums[(i+2)/2]) / 2);
	else
		printf("%d\n", nums[(i+1)/2]);

	fclose(inp);

	return 0;
}

int comp(const void *a, const void *b)
{
	return *((int *) a) - *((int *) b);
}
