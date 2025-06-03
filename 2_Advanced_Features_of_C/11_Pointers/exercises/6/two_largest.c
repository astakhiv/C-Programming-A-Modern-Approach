/* Implemens a function to find the two largest numbers in the array */

#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int b[N], i, max, sec_max;

    printf("Enter %d integers: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &b[i]);
    }

    find_two_largest(b, N, &max, &sec_max);

    printf("The largest number in the array is: %d\n", max);
    printf("The second largest number in the array is: %d\n", sec_max);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    *largest = *second_largest = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest && a[i] < *largest) {
            *second_largest = a[i];
        }
    }
}
