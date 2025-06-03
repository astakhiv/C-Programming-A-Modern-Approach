// Name: fact_limits.c
// Purpose: Calculate the factorial for a positive interer for different types, finds limits
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    short fact_s        = 1;
    int fact_i          = 1;
    long fact_l         = 1;
    long long fact_ll   = 1;
    float fact_f        = 1;
    double fact_d       = 1;
    long double fact_ld = 1;
    
    int short_max = 0, int_max = 0, long_max = 0, long_long_max = 0,
         float_max = 0, double_max = 0, long_double_max = 0;

    int i;

    for (i = 1; i < 100000; i++) {
        if (fact_s * i > 0) {
            short_max++;
            fact_s *= i;
        }

        if (fact_i * i > 0) {
            int_max++;
            fact_i *= i;
        }

        if (fact_l * i > 0) {
            long_max++;
            fact_l *= i;
        }

        if (fact_ll * i > 0) {
            long_long_max++;
            fact_ll *= i;
        } else {
            break;
        }

        if (fact_f * i > 0) {
            float_max++;
            fact_f *= i;
        }

        if (fact_d * i > 0) {
            double_max++;
            fact_d *= i;
        }

        if (fact_ld * i > 0) {
            long_double_max++;
            fact_ld *= i;
        }
    }

    printf("Max for short: %d\n",       short_max);
    printf("Max for int: %d\n",         int_max);
    printf("Max for long: %d\n",        long_max);
    printf("Max for long long: %d\n",   long_long_max);
    printf("Max for float: %d\n",       float_max);
    printf("Max for double: %d\n",      double_max);
    printf("Max for long double: %d\n", long_double_max);

    printf("Largest: %lld\n", fact_ll);

    return 0;
}
