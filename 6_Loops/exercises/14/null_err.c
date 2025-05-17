#include <stdio.h>

int main(void) 
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0);
        printf("n is even\n\n");

    if (n % 2 == 0)
        printf("n is even\n");

    return 0;
}
