/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void) 
{
    // int limit: 80264
    // short limit: 32766
    // long limit: 3037000499
    long i, n;

    printf("This program prints a table of squares\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &i);

    printf("%d\n", (int) sizeof(short));
    printf("%d\n", (int) sizeof(int));
    printf("%d\n", (int) sizeof(long));
    printf("%20ld%20ld\n", n, n * n);
    
    do {
        printf("%20ld%20ld\n", i, i * i);
        i++;
    } while (i * i > 0);
    // for (i = 1; i <= n; i++) {
    //     printf("%20ld%20ld\n", i, i * i);
    // }

    return 0;
}
