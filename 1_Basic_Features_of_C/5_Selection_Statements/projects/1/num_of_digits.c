// Name: num_of_digits.c
// Purpose: print number of digits of inputed number
// Author: myn0name

#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    int num, digits;
    bool print = true;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (0 <= num && num <= 9 ) {
        digits = 1;
    } else if (10 <= num && num <= 99) {
        digits = 2;
    } else if (100 <= num && num <= 999) {
        digits = 3;
    } else if (1000 <= num && num <= 9999) {
        digits = 4;
    } else {
        digits = -1;
        print = false;
    }

    if (print) {
        printf("The number %d has %d digits\n", num, digits);
    } else {
        printf("Some strange number you have enreted...\n");
    }

    return 0;
}
