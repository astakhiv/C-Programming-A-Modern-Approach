#include <stdio.h>

struct { double real, imaginary; } c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

int main(void)
{
    printf("%s: real: %lf, imaginary: %lf\n", "c1", c1.real, c1.imaginary);
    printf("%s: real: %lf, imaginary: %lf\n", "c2", c2.real, c2.imaginary);

    c1 = c2; // no need for 2 statements

    printf("\n");
    printf("%s: real: %lf, imaginary: %lf\n", "c1", c1.real, c1.imaginary);
    printf("%s: real: %lf, imaginary: %lf\n", "c2", c2.real, c2.imaginary);

    return 0;
}
