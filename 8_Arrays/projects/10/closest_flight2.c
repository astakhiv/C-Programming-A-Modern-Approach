// Name: closest_flight2.c
// Purpose: find the closest flight to given time
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int departure_times[8] = {(8 * 60),         (9 * 60 + 43),        (11 * 60 + 19),  (12 * 60 + 47), 
                              ((12 + 2) * 60),  ((12 + 3) * 60 + 45), ((12 + 7) * 60), ((12 + 9) * 60 + 45)};
    int arrival_times[8] = {(10 * 60 + 16),      (11 * 60 + 52),       ((12 + 1) * 60 + 31), ((12 + 3) * 60), 
                           ((12 + 4) * 60 + 8), ((12 + 5) * 60 + 55), ((12 + 9) * 60 + 20), ((12 + 11) * 60 + 58)};
    int hours, minutes, time, min, print, i, f, 
        departure_hours, departure_minuts,
        arrival_hours, arrival_minutes;
    char departure_am, arrival_am;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hours, &minutes);

    time = hours * 60 + minutes;
    min = (12 + 11) * 60 + 59;

    for (i = 0; i < 8; i++) {
        f = time - departure_times[i];
        f = (f < 0) ? -f : f;
        if (min > f) {
            min = f;
            print = i;
        }
    }

    departure_hours = departure_times[print] / 60;
    departure_minuts = departure_times[print] % 60;
    departure_am = (departure_hours > 12) ? 'p' : 'a';
    departure_hours = (departure_hours > 12) ? departure_hours - 12 : departure_hours;

    arrival_hours = arrival_times[print] / 60;
    arrival_minutes = arrival_times[print] % 60;
    arrival_am = (arrival_hours > 12) ? 'p' : 'a';
    arrival_hours = (arrival_hours > 12) ? arrival_hours - 12 : arrival_hours;

    printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n", 
            departure_hours, departure_minuts, departure_am,
            arrival_hours, arrival_minutes, arrival_am);

    return 0;
}
