#include <stdio.h>

#define CHECK(x, y, n) ((1 <= (x) && (x) <= ((n) - 1)) && (1 <= (y) && (y) <= ((n) - 1)))

int main(void)
{
    int i, j, k;

    printf("Enter first num: ");
    scanf("%d", &i);
    
    printf("Enter second num: ");
    scanf("%d", &j);

    printf("Enter limit num: ");
    scanf("%d", &k);

    printf("Both numbers are ");
    
    if (!CHECK(i, j, k)) {
        printf("not ");
    }

    printf("in the range of [1;%d]\n", k-1);

    return 0;
}
