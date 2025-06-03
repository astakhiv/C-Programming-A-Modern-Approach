#include <stdio.h>

int main(void) 
{
    float f, frac_part;
    
    printf("Enter a float number: ");
    scanf("%f", &f);

    frac_part = f - (int) f;
    printf("The fraction part is: %f\n", frac_part);

    return 0;
}
