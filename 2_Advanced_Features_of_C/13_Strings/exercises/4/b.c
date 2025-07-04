#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int read_line(char str[], int n);

int main (void)
{
    int i, len;
    char input[MAX_LEN];

    len = read_line(input, MAX_LEN);

    for (i = 0; i < len; i++) {
        putchar(input[i]);
    }
    putchar('\n');

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while (!isspace((ch = getchar()))) {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    
    return i;
}
