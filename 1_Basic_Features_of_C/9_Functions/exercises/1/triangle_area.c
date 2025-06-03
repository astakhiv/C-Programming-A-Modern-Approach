#include <stdio.h>

double triangle_area(double base, double height); 

int main(void) 
{
    double base, height, area;
    
    base = 10;
    height = 10;

    area = triangle_area(base, height);
    printf("Area or the triangle with base %.2lf and height %.2lf is %.2lf\n", base, height, area);

    return 0;
}

double triangle_area(double base, double height) 
{
    double product;

    product = base * height;
    return product / 2;
}

// ** WRONG **
//  double triangle_area(double base, height)
//  double product;
//  {
//      product = base * height;
//      return product / 2;
//  }
