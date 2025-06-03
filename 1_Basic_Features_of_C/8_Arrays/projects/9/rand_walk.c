// Name: rand_walk.c
// Purpose: Generates a "random walk" on a 10x10 matrix, indicating steps via letters
// Author: myn0name

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void) 
{
    const char alph[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 
                           'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 
                           'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 
                           'Y', 'Z'};
    char matrix[SIZE][SIZE];
    int i, j, test_i, test_j, k, letter, move;
    bool directions_tried[4] = {false};
    bool move_found = false;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matrix[i][j] = '.';
        }
    }

    srand((unsigned) time(NULL));

    i = j = 0; 
    for (letter = 0; letter < 26; letter++) {
        matrix[i][j] = alph[letter];
        move_found = false;
        for (k = 0; k < 4; k++) {
            directions_tried[k] = false;
        }

        for (k = 0; k < 4; k++) {
            while(directions_tried[move = rand() % 4])
                ;
            directions_tried[move] = true;

            switch (move) {
                case 0:
                    test_i = i - 1;
                    test_j = j;
                    break;
                case 1:
                    test_i = i + 1;
                    test_j = j;
                    break;
                case 2: 
                    test_i = i;
                    test_j = j + 1;
                    break;
                case 3:
                    test_i = i;
                    test_j = j - 1;
                    break;
            }

            if (test_i >= 10 || test_i < 0 || 
                test_j >= 10 || test_j < 0 || 
                matrix[test_i][test_j] != '.') {
                continue;
            } else {
                i = test_i;
                j = test_j;
                move_found = true;
                break;
            }
        }

        if (move_found == false) {
            break;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf(" %c", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
