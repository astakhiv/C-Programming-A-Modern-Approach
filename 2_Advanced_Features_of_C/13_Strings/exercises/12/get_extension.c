#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int read_line(char *str, int n);
void get_extension(const char *file_name, char *extension);

int main(void)
{
    int len;
    char fn[MAX_LEN];
    char ext[MAX_LEN];

    printf("Enter the file name: ");
    len = read_line(fn, MAX_LEN);

    get_extension(fn, ext);

    printf("%s\n", ext);

    return 0;
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

void get_extension(const char *file_name, char *extension)
{
    int len = strlen(file_name);
    char *p;

    p = file_name;

    extension[0] = '\0';
    while (*p != '\0') {
        if (*p == '.' && p - file_name < len) {
            strcpy(extension, p + 1);
            break;
        }
        p++;
    }
}
