// Name: digit.c
// Purpose: Prints kth digit of given positive integer n;
// Author: myn0name, K. N. King

#include <stdio.h>


int digit(int n, int k);

int main(void) 
{
    int n, k;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Enter digit: ");
    scanf("%d", &k);

    printf("The digit number %d of %d is %d\n", k, n, digit(n, k));

    return 0;
}

int digit(int n, int k) 
{
    for (; k > 1; k--) {
        n /= 10;
    }

    return (k <= 1 ? n % 10 : 0);
}
