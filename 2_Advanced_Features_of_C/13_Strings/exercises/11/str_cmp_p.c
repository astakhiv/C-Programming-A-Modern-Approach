#include <stdio.h>

#define MAX_LEN 10

int my_strcmp(char *s, char *t);
int read_line(char *str, int n);

int main(void)
{
    char s1[MAX_LEN], s2[MAX_LEN];
    int len_1, len_2;

    printf("Enter first string: ");
    len_1 = read_line(s1, MAX_LEN);

    printf("Enter second string: ");
    len_2 = read_line(s2, MAX_LEN);

    printf("%d\n", my_strcmp(s1, s2));

    return 0;
}

int my_strcmp(char *s, char *t)
{
    char *p, *q;
    for (p = s, q = t; *p == *q; p++, q++)
        if (*p == '\0')
            return 0;
    return *p - *q;
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
