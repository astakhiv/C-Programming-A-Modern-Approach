// Name: closest_flight.c
// Purpose: find the closest flight to given time
// Author: myn0name

#include <stdio.h>
#include <stdlib.h>

#define NUM_FLIGHTS 8

struct time {
    int departure;
    int arrival;
};

int main(void) 
{
    struct time flight[] = {
        {8*60,     10*60+16},
        {9*60+43,  11*60+52},
        {11*60+19, 13*31+31},
        {12*60+47, 15*60},
        {14*60,    16*60+8},
        {15*60+45, 17*60+55},
        {19*60,    21*60+20},
        {21*60+45, 23*60+58},
    };

    int hours, minutes, time;
    int closest = 0;
    int i;
    char time_c = 'a';

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hours, &minutes);

    time = hours * 60 + minutes;

    for (i = 0; i < NUM_FLIGHTS; i++) {
        if (abs(flight[i].departure - time) < abs(flight[closest].departure - time)) {
            closest = i;
        }
    }


    printf("Closest departure time is ");
    if (flight[closest].departure > 12*60+59) {
        flight[closest].departure -= 12*60;
        time_c = 'p';
    }
    printf("%.2d:%.2d %c.m.", flight[closest].departure / 60, flight[closest].departure % 60, time_c);
    printf(", arriving at ");
    if (flight[closest].arrival > 12*60+59) {
        flight[closest].arrival -= 12*60;
        time_c = 'p';
    }
    printf("%.2d:%.2d %c.m.\n", flight[closest].arrival / 60, flight[closest].arrival % 60, time_c);

    return 0;
}
