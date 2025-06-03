#include <stdio.h>

int num_digits(int n);

int main(void) 
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("The number has %d digit(s)\n", num_digits(num));

    return 0;
}

int num_digits(int n) 
{
    int i = 0;

    do {
        n /= 10;
        i++;
    } while (n > 0);

    return i;
}
