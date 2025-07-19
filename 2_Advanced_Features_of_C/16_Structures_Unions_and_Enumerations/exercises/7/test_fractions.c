#include <stdio.h>
#include "fraction.h"

int main(void)
{
    struct fraction f1 = read_fraction();
    struct fraction f2 = read_fraction();
    struct fraction f3;

    reduce(&f1);
    printf("f1 reduced: ");
    write_fraction(&f1);
    
    reduce(&f2);
    printf("f2 reduced: ");
    write_fraction(&f2);

    printf("Sum: ");
    f3 = add(f1, f2);
    write_fraction(&f3);

    printf("Difference: ");
    f3 = subtract(f1, f2);
    write_fraction(&f3);

    printf("Multiplied: ");
    f3 = multiply(f1, f2);
    write_fraction(&f3);

    printf("Divided: ");
    f3 = divide(f1, f2);
    write_fraction(&f3);

    return 0;
}
