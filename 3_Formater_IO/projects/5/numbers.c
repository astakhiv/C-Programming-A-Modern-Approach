// Name: nubmers.c
// Purpose: arrange number 16 numbers in 4x4 grid, print sums of rows, colomns and diagonals
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int r0_0, r0_1, r0_2, r0_3,
        r1_0, r1_1, r1_2, r1_3,
        r2_0, r2_1, r2_2, r2_3,
        r3_0, r3_1, r3_2, r3_3;

    printf("Enter nubmers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
            &r0_0, &r0_1, &r0_2, &r0_3,
            &r1_0, &r1_1, &r1_2, &r1_3,
            &r2_0, &r2_1, &r2_2, &r2_3,
            &r3_0, &r3_1, &r3_2, &r3_3);
    
    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
            r0_0, r0_1, r0_2, r0_3,
            r1_0, r1_1, r1_2, r1_3,
            r2_0, r2_1, r2_2, r2_3,
            r3_0, r3_1, r3_2, r3_3);
    
    printf("Row sums: %d %d %d %d\n",
            r0_0 + r0_1 + r0_2 + r0_3,
            r1_0 + r1_1 + r1_2 + r1_3,
            r2_0 + r2_1 + r2_2 + r2_3,
            r3_0 + r3_1 + r3_2 + r3_3);
    
    printf("Colomn sums: %d %d %d %d\n",
            r0_0 + r1_0 + r2_0 + r3_0,
            r0_1 + r1_1 + r2_1 + r3_1,
            r0_2 + r1_2 + r2_2 + r3_2,
            r0_3 + r1_3 + r2_3 + r3_3);

    printf("Diagonal sums: %d %d\n",
            r0_0 + r1_1 + r2_2 + r3_3,
            r3_0 + r2_1 + r1_2 + r0_3);

    return 0;
}
