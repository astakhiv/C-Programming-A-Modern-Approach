#include <stdio.h>

struct complex {
    double real, imaginary;
};

struct complex make_complex(double real, double imaginary);
struct complex add_complex(struct complex c1, struct complex c2);

int main(void)
{
    struct complex c1 = make_complex(12, 3);
    struct complex c2 = make_complex(4, 11);
    
    printf("%s: \n\treal: %lf, \n\timaginary: %lf\n", "c1", c1.real, c1.imaginary);
    printf("%s: \n\treal: %lf, \n\timaginary: %lf\n", "c2", c2.real, c2.imaginary);

    printf("\n");

    struct complex c3 = add_complex(c1, c2);
    printf("%s: \n\treal: %lf, \n\timaginary: %lf\n", "c3", c3.real, c3.imaginary);

    return 0;
}

struct complex make_complex(double real, double imaginary)
{
    return (struct complex) {.real = real, .imaginary = imaginary};
}


struct complex add_complex(struct complex c1, struct complex c2)
{
    return make_complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}
