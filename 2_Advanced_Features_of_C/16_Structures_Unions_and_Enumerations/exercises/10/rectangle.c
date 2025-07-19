#include <stdio.h>

#include "rectangle.h"

struct point read_point(void)
{
    struct point p;

    printf("Enter X of the point: ");
    scanf("%d", &p.x);
    printf("Enter Y of the point: ");
    scanf("%d", &p.y);

    return p;
}

void write_point(struct point p)
{
    printf("X: %d, Y: %d\n", p.x, p.y);
}

struct rectangle read_rectangle(void)
{
    struct rectangle r;
    printf("Enter the coordinates of the retangle: \n");
    r.upper_left = read_point();
    r.lower_right = read_point();
    printf("\n");

    return r;
}

void write_rectangle(struct rectangle r)
{
    printf("Upper left: ");
    write_point(r.upper_left);
    
    printf("Lower right: ");
    write_point(r.lower_right);
}


long area(struct rectangle r)
{
    return (r.lower_right.x - r.upper_left.x) * (r.lower_right.y - r.upper_left.y);
}

struct point center(struct rectangle r)
{
    struct point center_point;

    center_point.x = (r.lower_right.x + r.upper_left.x) / 2;
    center_point.y = (r.lower_right.y + r.upper_left.y) / 2;

    return center_point;
}

struct rectangle move(struct rectangle r, int x, int y) 
{
    r.upper_left.x += x;
    r.upper_left.y += y;
    r.lower_right.x += x;
    r.lower_right.y += y;

    return r;
}

bool is_point_in(struct point p, struct rectangle r)
{
    return (r.upper_left.x < p.x && p.x < r.lower_right.x) &&
           (r.upper_left.y < p.y && p.y < r.lower_right.y);
}
