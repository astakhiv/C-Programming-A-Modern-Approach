#include <stdio.h>

#include "../date.h"

int is_leap(int year);
int day_of_year(struct date d);

int main(void)
{
    struct date d1 = prompt_date();
    
    printf("The day is %d in the year.\n", day_of_year(d1));

    return 0;
}

/********************************************************
 * day_of_year: Calculates the day of the year, based   *
 *              given date value. Returns an integer,   *
 *              coresponding to the it.                 *
 ********************************************************/
int day_of_year(struct date d)
{
    const int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int i;
    int day_num = d.day;

    for (i = 0; i < d.month-1; i++) {
        day_num += months[i];
    }

    if (is_leap(d.year) && d.month > 2) {
        day_num++;
    }

    return day_num;    
}

/********************************************************
 * is_leap: Returns 1 if the given year is a leap year. *
 *          0 otherwise.                                *
 ********************************************************/
int is_leap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0);
}
