#include <stdio.h>

int f(int a, int b);

int main(void) {
    int i;
    double x;
    
    i = f(83, 12);
    printf("i: %d\n", i);

    x = f(83, 12);
    printf("x: %f\n", x);

    i = f(3.15, 9.28);
    printf("i: %d\n", i);
    
    x = f(3.15, 9.28);
    printf("x: %f\n", x);
    
    f(83, 12);
}

int f(int a, int b) 
{
    return a + b;
}
