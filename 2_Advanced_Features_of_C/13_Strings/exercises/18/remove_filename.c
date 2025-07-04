#include <stdio.h>

#define MAX_LEN 100

int read_line(char *str, int n);
void remove_filename(char *url);

int main(void)
{
    char url[MAX_LEN];

    printf("Enter a URL: ");
    read_line(url, MAX_LEN);

    remove_filename(url);

    printf("Without filename: ");
    puts(url);

    return 0;
}

int read_line(char *str, int n)
{
    char ch, i = 0;
    
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';

    return i;
}

void remove_filename(char *url)
{
    char *p = url;
    char *last_slash = url;

    while (*p++)
        if (*p == '/')
            last_slash = p;

    *last_slash = '\0';
}
