/* Implements a function to split time in seconds to hours, minutes and seconds */

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    long time_in_seconds;
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%ld", &time_in_seconds);

    split_time(time_in_seconds, &hours, &minutes, &seconds);

    printf("You have entered the time: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

void split_time(long total_sec, int *hours, int *min, int *sec)
{
    *hours = total_sec / 3600;
    total_sec = total_sec % 3600;
    *min = total_sec / 60;
    *sec = total_sec % 60;
}
