#include <stdio.h>

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

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    do {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
    } while (ch != '\n' && ch != EOF);
    str[i] = '\0';
    
    return i;
}
