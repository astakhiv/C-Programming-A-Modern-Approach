#include <stdio.h>

int square(int x);
int sum(int (*f)(int), int start, int end);

int main(void)
{
	int i, j;
	
	printf("Enter the start element: ");
	scanf("%d", &i);
	printf("Enter the end element: ");
	scanf("%d", &j);

	printf("The sum of squares in between is: %d\n", sum(square, i, j));

	return 0;
}

int square(int x) 
{
	return x * x;
}


int sum(int (*f)(int), int start, int end)
{
	int sum_of_values = 0;

	for (; start <= end; start++) {
		sum_of_values += (*f)(start);
	}

	return sum_of_values;
}
