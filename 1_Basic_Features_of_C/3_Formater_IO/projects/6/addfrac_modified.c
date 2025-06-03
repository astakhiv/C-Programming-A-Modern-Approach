// Name: addfrac_modified.c
// Purpose: add two fractions given in a row
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int num_1, denom_1, num_2, denom_2, result_num, result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d / %d + %d / %d", &num_1, &denom_1, &num_2, &denom_2);

    result_num = num_1 * denom_2 + num_2 * denom_1;
    result_denom = denom_1 * denom_2;
    
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
