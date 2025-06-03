// Name: largest_num.c  
// Purpose: find the largest nubmer of given, input negative or zero to quit
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    float largest = 0, number;

    do {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number > largest) {
            largest = number;
        }

    } while (number > 0);

    printf("\nThe largest number entered was: %.2f\n", largest);

    return 0;
}
