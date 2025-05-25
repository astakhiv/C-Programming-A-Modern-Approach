// Name: selection_sort.c
// Purpose: Sorts inputed by user array
// Author: myn0name

#include <stdio.h>

void selection_sort(int n, int a[n]);

int main(void) 
{
    int n, i;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d, integer(s): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    selection_sort(n, a);

    printf("Sorted:");
    for (i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int n, int a[]) 
{
    int i, j, temp, max_idx, max;

    for (i = 0; i < n; i++) {
        max = a[0];
        max_idx = 0;

        for (j = 0; j < n - i; j++) {
            if (a[j] > max) {
                max = a[j];
                max_idx = j;
            }
        }

        temp = a[n-i-1];
        a[n-i-1] = max;
        a[max_idx] = temp;
    }
}
