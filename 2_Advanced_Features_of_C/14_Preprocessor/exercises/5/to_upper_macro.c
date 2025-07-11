#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void)
{
    char s[20];
    int i;

    strcpy(s, "abcd");
    i = 0;
    puts(s);
    putchar(TOUPPER(s[++i]));

    printf("\n");

    strcpy(s, "0123");
    i = 0;
    puts(s);
    putchar(TOUPPER(s[++i]));

    printf("\n");

    return 0;
}
