#include <stdio.h>
#include <string.h>

#define LEN 100

int main(void)
{
    char str[LEN];
    int i;

    strcpy(str, "tire-bouchon");
    strcpy(&str[4], "d-or-wi");
    strcat(str, "red?");

    for (i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}


