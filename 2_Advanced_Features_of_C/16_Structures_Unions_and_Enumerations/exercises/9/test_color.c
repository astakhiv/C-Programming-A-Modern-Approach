#include <stdio.h>

#include "color.h"

int main(void)
{
    struct color c1 = read_color();
    struct color c2 = read_color();

    c1 = make_color(c1.red, c1.green, c1.blue);
    c2 = make_color(c2.red, c2.green, c2.blue);

    write_color(c1);
    write_color(c2);

    printf("c1 red: %d\n", getRed(c1));
    printf("c2 red: %d\n", getRed(c2));

    printf("Colors are equal: %d\n", equal_color(c1, c2));

    write_color(brighter(c1));
    write_color(brighter(c2));

    write_color(darker(c1));    
    write_color(darker(c2));    

    return 0;
}
