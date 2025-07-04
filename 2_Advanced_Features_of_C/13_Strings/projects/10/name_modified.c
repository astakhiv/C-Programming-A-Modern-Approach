// Name: name_modified.c
// Purpose: print given name in LN, FN. format
// Author: myn0name

#include <stdio.h>

#define MAX_LEN 20

int read_line(char *str, int n);
void reverse_name(char *name);

int main(void) 
{
    char name[MAX_LEN];

    printf("Enter a first and last name: ");
    read_line(name, MAX_LEN);
    reverse_name(name);
    
    printf("%s\n", name);

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

void reverse_name(char *name)
{
    char first_name_first_letter;
    char last_name[MAX_LEN];
    int i;

    char *p = name;
    while (*p == ' ')
        p++;

    first_name_first_letter = *p;

    while (*p++ != ' ')
        ;

    while (*p == ' ')
        p++;

    i = 0;
    while(*p && *p != ' ') {
        last_name[i++] = *p;
        p++;
    }

    sprintf(name, "%s, %c.", last_name, first_name_first_letter);
}
