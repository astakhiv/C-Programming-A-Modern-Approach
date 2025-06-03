#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter a value for i: ");
    scanf("%d", &i);

    // i = (int) &*i;
    // printf("Value after &*i: %d\n", i);
    
    i = *&i;
    printf("Value after *&i: %d\n", i);

    return 0;
}
