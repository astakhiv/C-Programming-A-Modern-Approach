// Name: change_date_format.c
// Purpose: changes date format from mm/dd/yyyy to month dd, yyyy, where month is the name of the month
// Author: myn0name

#include <stdio.h>

int main(void)
{
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"    
    };

    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("You entered the date %s %2d, %4d\n", months[month-1], day, year);

    return 0;
}
