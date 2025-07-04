#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 100

void capitalize(char *str, int n);
int read_line(char *str, int n);

int main(void)
{
    int len;
    char str[MAX_LEN];
    char *p;

    printf("Enter a string to capitalize: ");
    len = read_line(str, MAX_LEN);

    capitalize(str, MAX_LEN);

    for (p = str; p < str + MAX_LEN && *p != '\0'; p++) {
        putchar(*p);
    }
    putchar('\n');

    return 0;
}

void capitalize(char *str, int n)
{
    char *p;

    for (p = str; p < str + n && *p != '\0'; p++) {
        *p = toupper(*p);
    }

}

int read_line(char *str, int n)
{
    char ch, *p;

    p = str;
    while ((ch = getchar()) != '\n') {
        if (p < str + n) {
           *p++ = ch;
        }
    }
    *p = '\0';

    return p - str;
}
