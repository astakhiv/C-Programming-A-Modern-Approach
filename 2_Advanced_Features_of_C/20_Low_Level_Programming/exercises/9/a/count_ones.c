#include <stdio.h>

void print_bits(unsigned char ch)
{
	printf("0b");
	for (; ch != 0; ch >>= 1)
		printf("%d", ch & 1);
	printf("\n");
}

int count_ones(unsigned char ch);

int main(void)
{
	unsigned char i;
	printf("Enter an unsigned char: ");
	scanf("%d", &i);
	print_bits(i);

	printf("Number of ones: %d\n", count_ones(i));
	return 0;
}

int count_ones(unsigned char ch)
{
	int count = 0;
	for (;ch != 0; ch >>= 1)
		if ((ch & 1) == 1)
			count++;
	return count;
}
