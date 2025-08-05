#include <stdio.h>

#define M(x,y) ((x)^=(y),(y)^=(x),(x)^=(y))

int main(void)
{
	int i, j;
	printf("Enter i: ");
	scanf("%d", &i);

	printf("Enter j: ");
	scanf("%d", &j);
	
	M(i, j);

	printf("i: %d, j: %d\n", i, j);

	return 0;
}
