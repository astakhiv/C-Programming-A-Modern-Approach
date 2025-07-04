#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void censor_auth(char *s);
void censor(char *str, int n);
int read_line(char *str, int n);

int main(void)
{
    char str[MAX_LEN];
    int i, len;

    printf("Enter a line to censor: ");
    len = read_line(str, MAX_LEN);

    censor(str, len);

    for (i = 0; i < len; i++) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}

void censor_auth(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == 'f' && s[i+1] == 'o' && s[i+2] == 'o')
            s[i] = s[i+1] = s[i+2] = 'x';
}


void censor(char *str, int n)
{
    char temp[] = "foo";
    char *p;
    bool good = true;
    int j;

    for (p = str; p < str + n && *p != '\0'; p++) {
        if (*p == temp[0]) {
            j = 0;
            while (j < 3 && (good = (*p++ == temp[j++])))
                ;
            if (good) {
                for (p = p - 3, j = 0; j < 3; j++, p++) {
                    *p = 'x';
                }
            }
        }
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
