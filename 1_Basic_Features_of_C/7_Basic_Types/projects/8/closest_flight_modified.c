// Name: closest_flight_modified.c
// Purpose: find the closest flight to given time
// Author: myn0name

#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    int hours, minutes, time, min, print,
        f1, f2, f3, f4, f5, f6, f7, f8;
    char pm_am;

    printf("Enter a 12-hour time: ");
    scanf("%d : %d %c", &hours, &minutes, &pm_am);

    time = (hours + (toupper(pm_am) == 'P' ? 12 : 0) )* 60 + minutes;

    f1 = time - (8 * 60);
    f1 = (f1 < 0) ? -f1 : f1;
    min = f1;
    print = 1;

    f2 = time - (9 * 60 + 43);
    f2 = (f2 < 0) ? -f2 : f2;
    if (min > f2) {
        min = f2;
        print = 2;
    }

    f3 = time - (11 * 60 + 19);
    f3 = (f3 < 0) ? -f3 : f3;
    if (min > f3) {
        min = f3;
        print = 3;
    }

    f4 = time - (12 * 60 + 47);
    f4 = (f4 < 0) ? -f4 : f4;
    if (min > f4) {
        min = f4;
        print = 4;
    }

    f5 = time - ((12 + 2) * 60);
    f5 = (f5 < 0) ? -f5 : f5;
    if (min > f5) {
        min = f5;
        print = 5;
    }

    f6 = time - ((12 + 3) * 60 + 45);
    f6 = (f6 < 0) ? -f6 : f6;
    if (min > f6) {
        min = f6;
        print = 6;
    }

    f7 = time - ((12 + 7) * 60);
    f7 = (f7 < 0) ? -f7 : f7;
    if (min > f7) {
        min = f7;
        print = 7;
    }

    f8 = time - ((12 + 9) * 60 + 45);
    f8 = (f8 < 0) ? -f8 : f8;
    if (min > f8) {
        min = f8;
        print = 8;
    }

    switch(print) {
        case 1: printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
                break;
        case 2: printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
                break;
        case 3: printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
                break;
        case 4: printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m.\n");
                break;
        case 5: printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
                break;
        case 6: printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
                break;
        case 7: printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
                break;
        case 8: printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
                break;
    }

    return 0;
}
