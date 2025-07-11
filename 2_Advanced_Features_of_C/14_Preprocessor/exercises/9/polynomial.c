#include <stdio.h>

#define POLYNOMIAL(x) ((3*(x)*(x)*(x)*(x)*(x)) + (2*(x)*(x)*(x)*(x)) - (5*(x)*(x)*(x)) - ((x)*(x)) + (7*(x)) - 6)

int main(void)
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    printf("Result: %d\n", POLYNOMIAL(i));

    return 0;
}
