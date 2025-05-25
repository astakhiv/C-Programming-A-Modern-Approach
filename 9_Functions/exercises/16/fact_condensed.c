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
    return (n <= 1) ? 1 : n * fact(n - 1);
}
