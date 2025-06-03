// Name: volume_of_sphere.c
// Purpose: calculates volume (cubic meters) of a sphere of radius 10 meters
// Author: myn0name

#include <stdio.h>

#define SPHERE_FRACTION (4.0f / 3.0f)
#define PI 3.14159

int main(void) 
{
    int radius = 10;

    printf("Volume of a sphere of radius 10 meters equals (cubic meters): %.2f\n", 
            SPHERE_FRACTION * PI * radius * radius * radius);

    return 0;
}
