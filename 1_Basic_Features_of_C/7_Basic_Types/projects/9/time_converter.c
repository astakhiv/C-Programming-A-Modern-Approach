// Name: time_converter.c
// Purpose: transform 12-hour to 24-hour format
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int hours, minutes;
    char am_pm;

    printf("Enter a 12-hour time: ");
    scanf("%d : %d %c", &hours, &minutes, &am_pm);

    if (am_pm == 'P' && hours < 12) {
        hours = (hours + 12);
    } else if (am_pm == 'A' && hours == 12) {
        hours = 0;
    }

    printf("Equivalent 24-hour time: %d:%d\n", hours, minutes);

    return 0;
}
