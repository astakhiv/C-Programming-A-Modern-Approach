// Name: earlier_date.c
// Purpose: print earlier date of the two given
// Author: myn0name

#include <stdio.h>

struct date {
    int month, day, year;
};

int compare_dates(struct date d1, struct date d2);

int main(void) 
{
    struct date d1, d2;
    int comp_res;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &d1.month, &d1.day, &d1.year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &d2.month, &d2.day, &d2.year);

    comp_res = compare_dates(d1, d2);

    if (comp_res == -1) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
    } else if (comp_res == 1) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d.\n", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
    } else {
        printf("The dates are equal.\n");
    }

    return 0;
}

/*****************************************************************
 * compare_dates: Returns -1 if d1 is earlier then d2, 1 if d2   *
 *                is earlier than d1, 0 is dates are equal.      *
 *****************************************************************/
int compare_dates(struct date d1, struct date d2)
{
    if (d1.year < d2.year) {
        return -1;
    } else if (d1.year > d2.year) {
        return 1;
    }

    if (d1.month < d2.month) {
        return -1;
    }   else if (d1.month > d2.month) {
        return 1;
    }

    if (d1.day < d2.day) {
        return -1;
    } else if (d1.day > d2.day) {
        return 1;
    }

    return 0;
}
