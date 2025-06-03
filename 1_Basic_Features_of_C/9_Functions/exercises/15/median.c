#include <stdio.h>

double median(double x, double y, double z);

int main(void) {
    double x, y, z;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("The median is %lf\n", median(x, y, z));

    return 0;
}

double median(double x, double y, double z) 
{
    double result; 

    if (x <= y) {
        if (y <= z) result = y;
        else if (x <= z) result = z;
        else result = x;
    } else {
        if (z <= y) result = y;
        else if (x <= z) result = x;
        else result = z;
    }

    return result;
}
