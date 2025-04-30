// Name: earlier_date.c
// Purpose: print earlier date of the two given
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int month_1, day_1, year_1,
        month_2, day_2, year_2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month_1, &day_1, &year_1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month_2, &day_2, &year_2);

    if ((year_1 > year_2) || 
        (year_1 == year_2 && month_1 > month_2) || 
        (year_1 == year_2 && month_1 == month_2 && day_1 > day_2)
        ) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month_1, day_1, year_1, month_2, day_2, year_2);
    } else if ((year_1 < year_2) ||
               (year_1 == year_2 && month_1 < month_2) || 
               (year_1 == year_2 && month_1 == month_2 && day_1 < day_2)
               ) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month_2, day_2, year_2, month_1, day_1, year_1);
    } else {
        printf("Given dates are equal");
    }

    return 0;
}
