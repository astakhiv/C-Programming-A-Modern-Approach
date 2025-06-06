// Searchef for a key in an array

#include <stdbool.h>
#include <stdio.h>

#define N 10

bool search(const int a[], int n, int key);

int main(void)
{
    int a[N], *p, key;

    printf("Enter %d integers: ", N);
    for(p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    printf("Enter the key: ");
    scanf("%d", &key);

    printf("The result of the search is: %d\n", search(a, N, key));

    return 0;
}

bool search(const int a[], int n, int key)
{
    int *p;

    for (p = a; p < a + n; p++) {
        if (*p == key) {
            return true;
        }
    }

    return false;
}
