#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef int Int32;

int main(void) 
{
    printf("Int8 len: %d\n", (int) sizeof(Int8) * 8);
    printf("Int16 len: %d\n", (int) sizeof(Int16) * 8);
    printf("Int32 len: %d\n", (int) sizeof(Int32) * 8);

    return 0;
}
