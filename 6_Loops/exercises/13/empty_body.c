#include <stdio.h>

int main(void) 
{
    int m, n;
    
    m = 100;
    for (n = 0; m > 0; n++)
        m /= 2;
    
    printf("m: %d, n: %d\n\n", m, n);

    m = 100;
    for (n = 0; m > 0; n++, m /= 2);

    printf("m: %d, n: %d\n", m, n);

    return 0;
}
