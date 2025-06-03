#include <stdio.h>

int fact(int n);

int main(void) 
{
    int n;
    
    printf("Enter an integer (0 to exit): ");
    scanf("%d", &n);

    while(n > 0) {
        printf("The factorial is: %d\n", fact(n));
        
        printf("Enter an integer (0 to exit): ");
        scanf("%d", &n);
    }

    return 0;
}

int fact(int n)
{
    int f = 1;
    
    for (; n > 1; n--) {
        f *= n;
    }

    return f;
}
