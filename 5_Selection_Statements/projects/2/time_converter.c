// Name: time_converter.c
// Purpose: convert 24-hour time to 12-hour time
// Author: myn0name

#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    int hours, minutes;
    bool time_marker = false;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hours, &minutes);

    if (hours > 11) {
        hours -= 12;
        time_marker = true;
    } 

    if (hours == 0) {
        hours = 12;
    }

    if (time_marker) {
        printf("Equivalent in 12-hour time: %d:%.2d PM\n", hours, minutes);
    } else {
        printf("Equivalent in 12-hour time: %d:%.2d AM\n", hours, minutes);
    }

    return 0;
}
