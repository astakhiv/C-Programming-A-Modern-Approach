// Name: fact.c
// Purpose: Calculates factorial of given positive integer
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    long long fact = 1;
    int i;

    printf("Enter a positive integer: ");
    scanf("%d", &i);

    printf("Factorial of %d: ", i);

    for (; i > 1; i--) {
        fact *= i;
    }

    printf("%lld\n", fact);


    return 0;
}
