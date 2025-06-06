#include <stdio.h>

int main(void) 
{
    return 0;
}

int evaluate_position(char board[8][8]) 
{
    int pieces_values[26] = {0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 1, 9, 5};
    int i, j, w_score = 0, b_score = 0;
    char *p;

    for (p = &board[0][0]; p < &board[0][0] + 64; p++) {    
        if (*p - 'A' < 26) {
            w_score += pieces_values[*p - 'A'];
        } else {
            b_score += pieces_values[*p - 'a'];
        }
    }

    return w_score - b_score;
}
