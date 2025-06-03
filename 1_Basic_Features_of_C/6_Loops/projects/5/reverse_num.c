// Name: reverse_num.c
// Purpose: print given number in reverse
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
         printf("%d", num % 10);
         num /= 10;
    } while (num > 0);
    printf("\n");

    return 0;
}
