#include <stdio.h>

struct complex {
    double real, imaginary;
};

struct complex make_complex(double real, double imaginary);

int main(void)
{
    struct complex c1 = make_complex(12, 3);
    
    printf("%s: \n\treal: %lf, \n\timaginary: %lf\n", "c1", c1.real, c1.imaginary);

    return 0;
}

struct complex make_complex(double real, double imaginary)
{
    return (struct complex) {.real = real, .imaginary = imaginary};
}
