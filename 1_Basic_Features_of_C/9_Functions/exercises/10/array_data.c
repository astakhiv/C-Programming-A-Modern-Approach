// Name: array_data.c
// Purpoe: prints langest element, average of elements and number of positive elements in array
// Author: myn0name, K. N. King

#include <stdio.h>

int largest(int n, int a[n]);
int average(int n, int a[n]);
int num_of_positive(int n, int a[n]);

int main(void) 
{
    int n, i;
    printf("Enter the number if elements in array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    } 
    
    printf("The largest element: %d\n", largest(n, a));
    printf("The average of the elements: %d\n", average(n ,a));
    printf("Number of positive elements: %d\n", num_of_positive(n, a));

    return 0;
}

int largest(int n, int a[n]) 
{
    int i, max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}


int average(int n, int a[n]) 
{
    int i, sum = 0;
    
    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum / n;
}

int num_of_positive(int n, int a[n]) 
{
    int i, positives = 0;

    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            positives++;
        }
    }
    
    return positives;
}
