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

// i'm sorry for this. hope there is a better way to do this
int count_ones(unsigned char ch)
{
	return (ch >> 7 & 0x01) +
		   (ch >> 6 & 0x01) +
		   (ch >> 5 & 0x01) +
		   (ch >> 4 & 0x01) +
		   (ch >> 3 & 0x01) +
		   (ch >> 2 & 0x01) +
		   (ch >> 1 & 0x01) +
		   (ch & 0x01);
}
