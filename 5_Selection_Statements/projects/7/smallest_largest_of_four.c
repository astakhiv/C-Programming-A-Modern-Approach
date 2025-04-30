// Name: smallest_largest_of_four.c
// Purpose: find the smallest and the largest integer of four given
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int a, b, c, d, temp;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a < d) {
       temp = a;
       a = d;
       d = temp;

    } 

    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    } 

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (c < d) {
        temp = c;
        c = d;
        d = temp;
    }

    printf("Largest: %d\n", a);
    printf("Smallest: %d\n", d);

    return 0;
}
