#include <stdio.h>

void initialize_identity_mat(int *mat, int n);

int main(void)
{
    int n, i, j;
    printf("Enter num of rows and columns: ");
    scanf("%d", &n);

    int mat[n][n];
    initialize_identity_mat(mat[0], n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void initialize_identity_mat(int *mat, int n)
{
    int *p, num_zeros;
    
    num_zeros = n;

    for (p = mat; p < mat + n * n; p++) {
        if (num_zeros == n) {
            *p = 1;
            num_zeros = 0;
        } else {
            *p = 0;
            num_zeros++;
        }
    }
}
