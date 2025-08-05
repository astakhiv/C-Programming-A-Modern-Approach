#include <stdio.h>

#define MK_COLOR(r,g,b) ((long) (b) << 16 | (g) << 8 | (r))
#define GET_BLUE(color) ((unsigned short) ((color) >> 16) & 0b0000000011111111)
#define GET_GREEN(color) ((unsigned short) (color) >> 8 & 0b0000000011111111)
#define GET_RED(color) ((unsigned short) (color) & 0b0000000011111111)

int main(void)
{
	long color, r, g, b;
	printf("Enter r: ");
	scanf("%d", &r);
	printf("Enter g: ");
	scanf("%d", &g);
	printf("Enter b: ");
	scanf("%d", &b);

	color = MK_COLOR(r, g, b);
	printf("Red: %d\n", GET_RED(color));
	printf("Green: %d\n", GET_GREEN(color));
	printf("Blue: %d\n", GET_BLUE(color));

	return 0;
}
