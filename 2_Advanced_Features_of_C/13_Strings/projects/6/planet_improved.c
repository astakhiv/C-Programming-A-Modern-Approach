/* Checks planet names */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int string_equal(const char *s, const char *t);

int main(int argc, char *argv[])
{
    char *planets[] = { "Mercury", "Venus", "Earth", 
                        "Mars", "Jupiter", "Saturn",
                        "Uranus", "Neptune", "Pluto"};
    int i, j;

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++) {
            if (string_equal(argv[i], planets[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS) {
            printf("%s is not a planet.\n", argv[i]);
        }
    }

    return 0;
}

int string_equal(const char *s, const char *t)
{
    char *p, *q;

    for (p = s, q = t; *p && *q; p++, q++) {
        if (tolower(*p) != tolower(*q)) {
            break;
        }
    }

    return (tolower(*p) - tolower(*q));
}
