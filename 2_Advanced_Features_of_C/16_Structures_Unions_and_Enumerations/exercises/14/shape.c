#include <stdio.h>
#include "shape.h"

#define PI 3.1415
#define RECTANGLE 0
#define CIRCLE 1

struct point read_point(void)
{
    struct point p;

    printf("Enter X coordinate: ");
    scanf("%d", &p.x);
    printf("Enter Y coordinate: ");
    scanf("%d", &p.y);

    return p;
}

struct shape read_shape(void)
{
    struct shape s;    

    printf("Enter the shape kind(0 - Rectangle, 1 - Circle): ");
    scanf("%d", &s.shape_kind);

    printf("Enter the center of the shape:\n");
    s.center = read_point();

    if (s.shape_kind == RECTANGLE) {
        int width, height;
        printf("Enter width: ");
        scanf("%d", &s.u.rectangle.width);
        printf("Enter height: ");
        scanf("%d", &s.u.rectangle.height);
    } else if (s.shape_kind == CIRCLE) {
        printf("Enter radius: ");
        scanf("%d", &s.u.circle.radius);
    }

    return s;
}

void write_point(struct point p)
{
    printf("X: %d, Y: %d\n", p.x, p.y);
}

void write_shape(struct shape s)
{
    printf("Shape kind: %s\n", s.shape_kind ? "CIRCLE" : "RECTANGLE");
    printf("Center coordinates: ");
    write_point(s.center);

    if (s.shape_kind == RECTANGLE) {
        printf("Width: %d\n", s.u.rectangle.width);
        printf("Height: %d\n", s.u.rectangle.height);
    } else if (s.shape_kind == CIRCLE) {
        printf("Radius: %d\n", s.u.circle.radius);
    }
}


long compute_area(struct shape s)
{
    if (s.shape_kind == RECTANGLE) {
        return s.u.rectangle.height * s.u.rectangle.width;
    } else if (s.shape_kind == CIRCLE) {
        return PI * s.u.circle.radius * s.u.circle.radius;
    }
}

struct shape move_by(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}

struct shape scale_by(struct shape s, double c)
{
    if (s.shape_kind == RECTANGLE) {
        s.u.rectangle.width *= c;
        s.u.rectangle.height *= c;
    } else if (s.shape_kind == CIRCLE) {
        s.u.circle.radius *= c;
    }

    return s;
}
