#include <stdio.h>

unsigned int reverse_bits(unsigned int n);
void print_bits(unsigned int i);

int main(void)
{
	unsigned int i;
	printf("Enter uint: ");
	scanf("%u", &i);

	printf("In binary: ");
	print_bits(i);

	printf("Reversed: ");
	print_bits(reverse_bits(i));

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

unsigned int reverse_bits(unsigned int n)
{
	unsigned int m = 0, p, val;
	int shift = sizeof(unsigned int) * 8 - 1;

	for (p = 0x01; p > 0; p <<= 1, shift--) {
		if (n & p) { 
			val = 1 << shift;
			m |= val;	
		}
	}

	return m;
}
