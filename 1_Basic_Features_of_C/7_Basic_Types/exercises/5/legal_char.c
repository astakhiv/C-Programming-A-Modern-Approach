#include <stdio.h>

int main(void) 
{
    char ch;
    ch = 'A';
    printf("%d\n", ch);
    
    ch = 0b1000001;
    printf("%d\n", ch);

    ch = 0101;
    printf("%d\n", ch);

    ch = 0x41;
    printf("%d\n", ch);
    
    return 0;
}
