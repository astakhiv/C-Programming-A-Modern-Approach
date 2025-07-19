#include <stdio.h>

typedef struct {
    double real, imaginary;
} Complex ;

Complex make_complex(double real, double imaginary);

int main(void)
{
    Complex c1 = make_complex(12, 3);
    
    printf("%s: \n\treal: %lf, \n\timaginary: %lf\n", "c1", c1.real, c1.imaginary);

    return 0;
}

Complex make_complex(double real, double imaginary)
{
    return (Complex) {.real = real, .imaginary = imaginary};
}
