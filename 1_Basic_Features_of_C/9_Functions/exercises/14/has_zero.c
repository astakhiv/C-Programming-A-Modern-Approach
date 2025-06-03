#include <stdbool.h>
#include <stdio.h>

bool has_zero(int a[], int n);

int main(void) 
{
    int n, i;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the %d elements of the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (has_zero(a, n)) {
        printf("Has zero\n");
    } else {
        printf("Doesn't have zero\n");    
    }

    return 0;
}

bool has_zero(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;

    return false;
}
