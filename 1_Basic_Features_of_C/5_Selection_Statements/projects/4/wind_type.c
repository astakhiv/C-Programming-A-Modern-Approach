// Name: wind_type.c
// Purpose: print type of the wind, based on it's speed in knots
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int speed;

    printf("Enter speed(knots): ");
    scanf("%d", &speed);

    if (speed < 1) {
        printf("Calm\n");
    } else if (speed < 4) {
        printf("Light air\n");
    } else if (speed < 28) {
        printf("Breeze\n");
    } else if (speed < 48) {
        printf("Gale\n");
    } else if (speed < 64) {
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }

    return 0;
}
