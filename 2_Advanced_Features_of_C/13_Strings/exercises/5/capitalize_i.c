#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 100

void capitalize(char *str, int n);
int read_line(char *str, int n);

int main(void)
{
    int i, len;
    char str[MAX_LEN];

    printf("Enter a string to capitalize: ");
    len = read_line(str, MAX_LEN);

    capitalize(str, MAX_LEN);

    for (i = 0; i < MAX_LEN && str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}

void capitalize(char *str, int n)
{
    int i;

    for (i = 0; i < n && str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

}

int read_line(char *str, int n)
{
    char ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}
