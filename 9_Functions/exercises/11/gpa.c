#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

float compute_GPA(char grades[], int n);

int main(void) 
{
    int n, i;
    char c;
    printf("Enter the number of grades: ");
    scanf("%d", &n);
    
    char a[n];

    printf("Enter %d grades: ", n);
    i = 0;
    while (i < n) {
        c = toupper(getchar());
        if (isalpha(c) == 0) {
            continue;
        }
        a[i] = c;
        i++;
    }

    printf("The GPA is: %.2f\n", compute_GPA(a, n));

    return 0;
}

float compute_GPA(char grades[], int n) 
{
    float sum = 0;
    int i;

    for (i = 0; i < n; i++) {
        if ('A' <= grades[i] && grades[i] <= 'D') {
            sum += abs(grades[i] - 'E');
        }       
    }

    return sum / n;
}
