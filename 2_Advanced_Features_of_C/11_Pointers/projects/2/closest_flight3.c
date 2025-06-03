// Name: closest_flight3.c
// Purpose: find the closest flight to given time
// Author: myn0name

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void) 
{
    int hours, minutes, time, 
        departure_time, arrival_time,
        departure_hours, departure_minuts,
        arrival_hours, arrival_minutes;
    char departure_am, arrival_am;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hours, &minutes);

    time = hours * 60 + minutes;

    find_closest_flight(time, &departure_time, &arrival_time); 

    departure_hours = departure_time / 60;
    departure_minuts = departure_time % 60;
    departure_am = (departure_hours > 12) ? 'p' : 'a';
    departure_hours = (departure_hours > 12) ? departure_hours - 12 : departure_hours;

    arrival_hours = arrival_time / 60;
    arrival_minutes = arrival_time % 60;
    arrival_am = (arrival_hours > 12) ? 'p' : 'a';
    arrival_hours = (arrival_hours > 12) ? arrival_hours - 12 : arrival_hours;

    printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n", 
            departure_hours, departure_minuts, departure_am,
            arrival_hours, arrival_minutes, arrival_am);

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int departure_times[8] = {(8 * 60),         (9 * 60 + 43),        (11 * 60 + 19),  (12 * 60 + 47), 
                              ((12 + 2) * 60),  ((12 + 3) * 60 + 45), ((12 + 7) * 60), ((12 + 9) * 60 + 45)};
    int arrival_times[8] = {(10 * 60 + 16),      (11 * 60 + 52),       ((12 + 1) * 60 + 31), ((12 + 3) * 60), 
                           ((12 + 4) * 60 + 8), ((12 + 5) * 60 + 55), ((12 + 9) * 60 + 20), ((12 + 11) * 60 + 58)};

    int i, delta, closest, min;
    min = (12 + 11) * 60 + 59;

    for (i = 0; i < 8; i++) {
        delta = desired_time - departure_times[i];
        delta = (delta < 0) ? -delta : delta;
        if (min > delta) {
            min = delta;
            closest = i;
        }
    }

    *departure_time = departure_times[closest];
    *arrival_time = arrival_times[closest];
}
