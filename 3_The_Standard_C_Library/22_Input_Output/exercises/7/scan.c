#include <stdio.h>

int main(void)
{
	int i, j, n;
	float x;

	i = j = n = x = 0;
	n = scanf("%d%f%d", &i, &x, &j);

	printf("i: %d, x: %f, j: %d, n: %d\n", i, x, j, n);

	return 0;
}
