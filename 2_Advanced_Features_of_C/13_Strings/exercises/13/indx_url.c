#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int read_line(char *str, int n);
void build_index_url(const char *domain, char *index_url);

int main(void)
{
    char domain[MAX_LEN], index_url[MAX_LEN];
    char *p;
    int len;

    printf("Enter domain: ");
    len = read_line(domain, MAX_LEN);

    build_index_url(domain, index_url);

    printf("The index url is: ");
    puts(index_url);

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

void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}
