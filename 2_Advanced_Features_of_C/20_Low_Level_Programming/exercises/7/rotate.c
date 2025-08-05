#include <limits.h>
#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);

int main(void)
{
	unsigned int i;
	int n;

	printf("Enter a hexadecimal number (up to four digits): ");
	scanf("%x", &i);

	printf("Enter a shift number: ");
	scanf("%d", &n);
	
	printf("After left rotation: %x\n", rotate_left(i, n));
	printf("After right rotation: %x\n", rotate_right(i, n));

	return 0;
}

unsigned int rotate_left(unsigned int i, int n)
{
	n %= sizeof(unsigned int) * 8;
	return i << n | i >> (sizeof(unsigned int) * 8 - n);
}

unsigned int rotate_right(unsigned int i, int n)
{
	n %= sizeof(unsigned int) * 8;
	return i >> n | i << (sizeof(unsigned int) * 8 - n);
}
