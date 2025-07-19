#include <stdio.h>

#include "../date.h"

int compare_dates(struct date d1, struct date d2);

int main(void)
{
    struct date d1 = prompt_date();
    struct date d2 = prompt_date();

    printf("The result of comparison: %d\n", compare_dates(d1, d2));

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
