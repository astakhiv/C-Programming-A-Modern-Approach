// Name: day_of_year.c
// Purpose: Calculates number of the day in the given date
// Author: K. N. King, myn0name

#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void) 
{
    int month, day, year;

    month = 12;
    day = 31;
    year = 2024;
    printf("%d/%d/%d is day number %d\n", month, day, year, day_of_year(month, day, year));
    
    month = 12;
    day = 31;
    year = 2025;
    printf("%d/%d/%d is day number %d\n", month, day, year, day_of_year(month, day, year));

    return 0;
}

int day_of_year(int month, int day, int year) 
{
    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int num_of_day = 0;
    int leap = (year % 4 == 0 && month > 2);

    for (month -= 1; month > 0; month--) {
        num_of_day += month_days[month];
    }

    return day + num_of_day + leap;
}
