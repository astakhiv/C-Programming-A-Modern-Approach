// Name: earliest_date.c
// Purpose: print earlier date of all given
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int month_e = 99, day_e = 99, year_e = 99,
        month, day, year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month, &day, &year);
        
    while (month != 0 && day != 0 && year != 0) {
        if ((year_e > year) ||
            (year_e == year && month_e > month) ||
            (year_e == year && month_e == month && day_e > day)) {
            month_e = month;
            day_e = day;
            year_e = year;
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &month, &day, &year);
    } 
    
    printf("%.2d/%.2d/%.2d is the earliest date\n", month_e, day_e, year_e);

    return 0;
}
