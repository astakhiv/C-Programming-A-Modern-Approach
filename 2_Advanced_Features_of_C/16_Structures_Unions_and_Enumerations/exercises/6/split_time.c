#include <stdio.h>

struct time {
    int hours, minutes, seconds;
};


/**************************************************
 * split_time: Splits given time is seconds into  *
 *             hours, minutes and seconds.        *
 *             Returns the value of type time     *
 **************************************************/
struct time split_time(long total_seconds);

int main(void)
{
    long sec;
    struct time t;

    printf("Enter number of seconds since midnight: ");
    scanf("%ld", &sec);

    t = split_time(sec);

    printf("It's %.2d:%.2d:%.2d\n", t.hours, t.minutes, t.seconds);

    return 0;
}

struct time split_time(long total_seconds)
{
    struct time t;

    t.hours = total_seconds / 3600;
    total_seconds %= 3600;

    t.minutes = total_seconds / 60;
    t.seconds = total_seconds % 60;

    return t;
}
