#include <stdio.h>

#define MEDIAN(x, y, z) (((x) > (y)) ? (((z) > (x)) ? (x) : (((y) > (z)) ? (y) : (z))) : (((z) > (y)) ? (y) : (((x) > (z)) ? (x) : (z))))

int main(void)
{
    int i, j, k;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &i, &j, &k);

    printf("The median is: %d\n", MEDIAN(i, j, k));

    return 0;
}
