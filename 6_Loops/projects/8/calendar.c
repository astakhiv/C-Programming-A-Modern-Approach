// Name: calendar.c
// Purpose: prints calendar, based on given number of days and starting day of the week 
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int n, week_day;

    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &week_day);

    for (int i = 1; i < week_day; i++) {
        printf("    ");
    }

    for (int i = 1; i <= n; i++, week_day++) {
        if (week_day == 8) {
            printf("\n");
            week_day = 1;
        }

        printf("%3d ", i);
    }
    
    printf("\n");

    return 0;
}
