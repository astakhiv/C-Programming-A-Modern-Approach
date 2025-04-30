// Name: volume_of_sphere_of_input_radius.c
// Purpose: calculates volume in cubic meters of a sphere of radius inputed in meters.
// Author: myn0name

#include <stdio.h>

#define SPHERE_FRACTION (4.0f / 3.0f)
#define PI 3.14159

int main(void) 
{
    float radius;

    printf("Enter the radius of sphere (meters): ");
    scanf("%f", &radius);

    printf("Volume of a sphere of radius %.2f meters equals: %.2f qubic meters\n", 
            radius, SPHERE_FRACTION * PI * radius * radius * radius);

    return 0;
}
