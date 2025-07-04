#include <stdio.h>

int main (void)
{
    int i, j;
    char s[10] = {0};

    printf("Enter: ");
    scanf("%d%s%d", &i, s, &j);

    printf("i: %d, j: %d\ns:", i, j); 
    for (int k = 0; k < 10 && s[k]; k++) {
        putchar(s[k]);
    }
    printf("\n");

    return 0;
}
