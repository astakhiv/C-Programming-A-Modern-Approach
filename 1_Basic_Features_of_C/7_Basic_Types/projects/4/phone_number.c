// Name: phone_number.c
// Purpose: translate alphabetic number to numberic
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    char c;

    printf("Enter phone number: ");
    c = getchar();

    while (c != '\n') {
        if (c > 64 && c < 68) {
            putchar('2');
        } else if (c > 67 && c < 71) {
            putchar('3');
        } else if (c > 70 && c < 74) {
            putchar('4');
        } else if (c > 73 && c < 77) {
            putchar('5');
        } else if (c > 76 && c < 80) {
            putchar('6');
        } else if (c > 79 && c < 83) {
            putchar('7');
        } else if (c > 82 && c < 86) {
            putchar('8');
        } else if (c > 85 && c < 89) {
            putchar('9');
        } else {
            putchar(c);
        }

        c = getchar();
    }
    
    putchar('\n');

    return 0;
}
