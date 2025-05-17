// Name: e.c
// Purpose: calculate e constant until the 1/n!, where n -integer given by user
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    float e = 1;
    int n, factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        printf("fact: %d, i: %d\n", factorial, i);        
        e += 1.0f / factorial;
    }

    printf("e (until 1/n!): %f\n", e);

    return 0;
}
