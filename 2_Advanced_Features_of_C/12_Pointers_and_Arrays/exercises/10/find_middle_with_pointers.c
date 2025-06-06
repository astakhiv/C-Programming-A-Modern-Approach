#include <stdio.h>

#define N 9

int *find_middle(int a[], int n);

int main(void)
{
    int a[N], *p;
    
    printf("Enter %d numbers: ", N);
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    printf("The element in the middle is: %d\n", *find_middle(a, N));

    return 0;
}

int *find_middle(int a[], int n)
{
    return a + n / 2;
}
