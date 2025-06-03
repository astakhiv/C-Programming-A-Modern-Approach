// Name: craps.c
// Purpose: simulates a game of craps
// Author: myn0name

#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) 
{
    int wins = 0, losses = 0;
    char play_again;
    bool result;

    srand((unsigned) time(NULL));

    do {
        result = play_game();

        if (result) {
            printf("You win!\n");
            wins++;
        } else {
            printf("You lose!\n");
            losses++;
        }

        printf("\nPlay again? ");
        scanf("%c", &play_again);
        getchar();
        printf("\n");


    }   while(tolower(play_again) == 'y');

    printf("Wins: %d, Losses: %d\n", wins, losses);

    return 0;
}

int roll_dice(void) 
{
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}


bool play_game(void) 
{
    int point;
    int roll = roll_dice();

    printf("You rolled: %d\n", roll);
    if (roll == 7 || roll == 11) {
        return true;
    } else if (roll == 2 || roll == 3 || roll == 12) {
        return false;
    }

    point = roll;    
    printf("Your point is %d\n", point);

    for(;;) {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);

        if (roll == 7) {
            return false;
        } else if (roll == point) {
            return true;
        }
    }
}
