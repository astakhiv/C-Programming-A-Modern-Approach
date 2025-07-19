#include <stdio.h>
#include "color.h"

struct color read_color(void)
{
    struct color c;

    printf("Enter the red value of the color: ");
    scanf("%d", &c.red);
    printf("Enter the green value of the color: ");
    scanf("%d", &c.green);
    printf("Enter the blue value of the color: ");
    scanf("%d", &c.blue);

    return c;
}

void write_color(struct color c)
{
    printf("r: %d, g: %d, b: %d\n", c.red, c.green, c.blue);
}

struct color make_color(int red, int green, int blue)
{
    struct color c;

    if (red > 255)
        c.red = 255;
    else if (red < 0)
        c.red = 0;
    else
        c.red = red;

    if (green > 255)
        c.green = 255;
    else if (green < 0)
        c.green = 0;
    else
        c.green = green;

    if (blue > 255)
        c.blue = 255;
    else if (blue < 0)
        c.blue = 0;
    else
        c.blue = blue;

    return c;
}

int getRed(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    return (color1.red == color2.red) && (color1.green == color2.green) && (color1.blue == color2.blue);
}

struct color brighter(struct color c)
{
    if (c.red == 0 && c.green == 0 && c.blue == 0) 
        return (struct color) {3, 3, 3};

    if (0 < c.red && c.red < 3) {
        c.red = 3;
    }
    if (0 < c.green && c.green < 3) {
        c.green = 3;
    }
    if (0 < c.blue && c.blue < 3) {
        c.blue = 3;
    }

    c.red /= 0.7;
    c.green /= 0.7;
    c.blue /= 0.7;

    if (c.red > 255)
        c.red = 255;
    if (c.green > 255)
        c.green = 255;
    if (c.blue > 255)
        c.blue = 255;

    return c;
}

struct color darker(struct color c)
{
    c.red  *= 0.7;
    c.green *= 0.7;
    c.blue *= 0.7;

    return c;
}
