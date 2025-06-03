/* Implements a function to split a day in year into the date in days an month */

#include <stdbool.h>
#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);
bool is_leap_year(int year);

int main(void)
{
    int day_of_year, year, day, month;

    printf("Enter the day of the year: ");
    scanf("%d", &day_of_year);
    printf("Enter the year: ");
    scanf("%d", &year);

    split_date(day_of_year, year, &month, &day);

    printf("The date is (mm/dd): %.2d/%.2d\n", month, day);

    return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;

    if (is_leap_year(year)) {
        day_of_year--;
    }

    *month = 1;
    for (i = 0; i < 12; i++) {
        if (month_days[i] >= day_of_year) {
            *day = day_of_year;
            break;
        } else {
            day_of_year -= month_days[i];
            *month += 1;
        }
    }
}

bool is_leap_year(int year)
{
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return year % 400 == 0;
        }
        return true;
    } else {
        return false;
    }
}
