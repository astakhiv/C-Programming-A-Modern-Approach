#include <stdio.h>

void print_bits(unsigned int i);

int main(void)
{
	unsigned int n;
	printf("Enter n: ");
	scanf("%d", &n);

	print_bits(n);
	for (int i = 0; i < 100; i++) {
		n &= n - 1;
		print_bits(n);
	}

	return 0;
}

void print_bits(unsigned int i)
{
	int j;
	printf("0b");
	for (j = sizeof(unsigned int) * 8 - 1; j >= 0; j--)
		printf("%d", (i >> j) & 0x01);
	printf("\n");
}
