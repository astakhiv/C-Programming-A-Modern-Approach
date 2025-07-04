#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main(void)
{
    int i;
    char s1[MAX_LEN];
    char s2[MAX_LEN];
    
    strcpy(s1, "computer");
    strcpy(s2, "science");
    printf("%d\n", strcmp(s1, s2));
    if (strcmp(s1, s2) < 0)
        strcat(s1, s2);
    else
        strcat(s2, s1);
    s1[strlen(s1)-6] = '\0';

    for (i = 0; s1[i] != '\0'; i++) {
        putchar(s1[i]);
    }
    putchar('\n');

    return 0;
}
