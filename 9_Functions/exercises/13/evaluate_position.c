#include <stdio.h>

int main(void) 
{
    return 0;
}

int evaluate_position(char board[8][8]) 
{
    int pieces_values[26] = {0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 1, 9, 5};
    int i, j, w_score = 0, b_score = 0;
    
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (board[i][j] - 'A' < 26) {
                w_score += pieces_values[board[i][j] - 'A'];
            } else {
                b_score += pieces_values[board[i][j] - 'a'];
            }
        }
    }

    return w_score - b_score;
}
