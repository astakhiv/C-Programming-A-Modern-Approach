#include <stdio.h>

int sum_array(const int a[], int n);

int main(void)
{
    int a[10], i;
    
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("The sum is: %d\n", sum_array(a, 10));
    return 0;
}


int sum_array(const int a[], int n)
{
    int sum, *p;

    sum = 0;
    for (p = a; p < a + n; p++) {
        sum += *p;
    }

    return sum;
}
