#include <stdio.h>

typedef struct {
    double real, imaginary;
} Complex ;

Complex make_complex(double real, double imaginary);
Complex add_complex(Complex c1, Complex c2);

int main(void)
{
    Complex c1 = make_complex(12, 3);
    Complex c2 = make_complex(4, 11);
    
    printf("%s: \n\treal: %lf, \n\timaginary: %lf\n", "c1", c1.real, c1.imaginary);
    printf("%s: \n\treal: %lf, \n\timaginary: %lf\n", "c2", c2.real, c2.imaginary);

    printf("\n");

    Complex c3 = add_complex(c1, c2);
    printf("%s: \n\treal: %lf, \n\timaginary: %lf\n", "c3", c3.real, c3.imaginary);

    return 0;
}

Complex make_complex(double real, double imaginary)
{
    return (Complex) {.real = real, .imaginary = imaginary};
}


Complex add_complex(Complex c1, Complex c2)
{
    return make_complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}
