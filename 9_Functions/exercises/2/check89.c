#include <stdio.h>

int check(int x, int y, int n);

int main(void) 
{
    int x, y, n;

    x = 1;
    y = 2;
    n = 3;
    printf("The result of a check: %d\n", check(x, y, n));

    x = 1;
    y = 2;
    n = 1;
    printf("The result of a check: %d\n", check(x, y, n));
    
    x = 1;
    y = 6;
    n = 3;
    printf("The result of a check: %d\n", check(x, y, n));

    return 0;
}

int check(int x, int y, int n) 
{
    return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1);
}
