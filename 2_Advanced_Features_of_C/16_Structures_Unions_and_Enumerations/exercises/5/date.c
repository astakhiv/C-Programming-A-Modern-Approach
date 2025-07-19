#include <stdio.h>

#include "date.h"

struct date prompt_date(void)
{
    struct date d;    

    printf("Enter the month of a date: ");
    scanf("%d", &d.month);
    printf("Enter the day of the date: ");
    scanf("%d", &d.day);
    printf("Enter the year of the date: ");
    scanf("%d", &d.year);

    return d;
}
