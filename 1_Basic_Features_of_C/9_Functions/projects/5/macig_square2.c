// Name: magic_square2.c
// Purpose: Creates a magic square of a specified size.
// Author: myn0name

#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) 
{
    int n, i, j; 
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char magic_square[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
    }

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    return 0;
}   

void print_magic_square(int n, char magic_square[n][n]) 
{
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" %5d", magic_square[i][j]);
        }
        printf("\n");
    }
}

void create_magic_square(int n, char magic_square[n][n]) 
{
    int i, j, next_i, next_j, num;
    
    i = 0;
    j = n / 2;
    num = 1;

    while (num <= n * n) {
        magic_square[i][j] = num;
        num++;

        next_i = i - 1;
        if (next_i < 0) {
            next_i += n;
        }

        next_j = j + 1;
        if (next_j >= n) {
            next_j -= n;
        }

        if (magic_square[next_i][next_j] != 0) {
            i++;
        } else {
            i = next_i;
            j = next_j;
        }
    }
}
