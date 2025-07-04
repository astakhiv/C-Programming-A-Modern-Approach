#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_LEN 100

int read_line(char *str, int n);
bool test_extension(const char *file_name,
                    const char *extension);

int main(void)
{
    char file_name[MAX_LEN], extension[MAX_LEN];

    printf("Enter filename: ");
    read_line(file_name, MAX_LEN);
    printf("read\n");

    printf("Enter extension: ");
    read_line(extension, MAX_LEN);

    printf("Extension is ");
    if (!test_extension(file_name, extension)) {
        printf("not ");
    }
    printf("the same.\n");
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

bool test_extension(const char *file_name, const char *extension)
{
    char *p = file_name; 
    char *q = extension;
    bool same;

    while (*p++ != '.')
        ;

    while (*p && *q) {
        if (!(same = (toupper(*p++) == toupper(*q++)))) {
            break;
        }
    }

    return same;
}
