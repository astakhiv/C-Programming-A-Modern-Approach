// Name: sum5by5.c
// Puspore: Sum rows and columns of a 5 by 5 given array
// Author: myn0name

#include <stdio.h>

int main(void) {
    int row_totals[5] = {0}, col_totals[5] = {0};
    int i, j, num;

    for (i = 0; i < 5; i++) {
        printf("Enter row %d: ", i+1);
        for (j = 0; j < 5; j++) {
            scanf("%d", &num);
            row_totals[i] += num;
            col_totals[j] += num;
        }
    }

    printf("Row totals: ");
    for (i = 0; i < 5; i++) {
        printf(" %d", row_totals[i]);
    }
    printf("\nColumn totals: ");
    for (i = 0; i < 5; i++) {
        printf(" %d", col_totals[i]);
    }
    printf("\n");

    return 0;
}
