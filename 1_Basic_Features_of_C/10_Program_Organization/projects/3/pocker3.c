// Name: poker3.c
// Classifies a poker hand 
// Author: K. N. King, myn0name;

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

#define RANK 0
#define SUIT 1

/* external variables */
bool straight, flush, four, three;
int pairs;  /* can be 0, 1 or 2 */

/* prototypes */
void read_cards(int hand[NUM_CARDS][2]);
void analyze_hand(int hand[NUM_CARDS][2]);
void print_result(void);


int main(void) 
{  
    int hand[NUM_CARDS][2];

    for(;;) {
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }
}


void read_cards(int hand[NUM_CARDS][2])
{
    char ch, rank_ch, suit_ch;
    int i, rank, suit;
    bool bad_card, duplicate_card;
    int cards_read = 0;

    while (cards_read < NUM_CARDS) {
        bad_card = false;
        duplicate_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':               exit(EXIT_SUCCESS);
            case '2':               rank = 0; break;
            case '3':               rank = 1; break;
            case '4':               rank = 2; break;
            case '5':               rank = 3; break;
            case '6':               rank = 4; break;
            case '7':               rank = 5; break;
            case '8':               rank = 6; break;
            case '9':               rank = 7; break;
            case 't': case 'T':     rank = 8; break;
            case 'j': case 'J':     rank = 9; break;
            case 'q': case 'Q':     rank = 10; break;
            case 'k': case 'K':     rank = 11; break;
            case 'a': case 'A':     rank = 12; break;
            default:                bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }
        
        while ((ch = getchar()) != '\n') {
            if (ch != ' ') bad_card = true;
        }


        if (bad_card) {
            printf("Bad card; ignored.\n");
            continue;
        }

        for (i = 0; i < cards_read; i++) {
            if (hand[i][RANK] == rank && hand[i][SUIT] == suit) {
                printf("Duplicate card; ignored.\n");
                duplicate_card = true;
                break;   
            }
       }

        if (!duplicate_card) {
            hand[cards_read][RANK] = rank;
            hand[cards_read][SUIT] = suit;
            cards_read++;
        }
    }
}

void analyze_hand(int hand[NUM_CARDS][2])
{
    int rank, suit, card, pass, run;
    
    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    /* Sort by rank */
    for (pass = 1; pass < NUM_CARDS; pass++) {
        for (card = 0; card < NUM_CARDS - pass; card++) {
            rank = hand[card][RANK];
            suit = hand[card][SUIT];
            if (rank > hand[card + 1][RANK]) {
                hand[card][RANK] = hand[card + 1][RANK];
                hand[card][SUIT] = hand[card + 1][SUIT];
                hand[card + 1][RANK] = rank;
                hand[card + 1][SUIT] = suit;
            }
        }
    }
    
    /* check for flush */
    suit = hand[0][SUIT];
    for (card = 1; card < NUM_CARDS; card++) {
        if (hand[card][SUIT] != suit) {
            flush = false;
            break;
        }
    }

    /* check for a straight */
    for (card = 0; card < NUM_CARDS - 1; card++) {
        if (hand[card][RANK] + 1 != hand[card + 1][RANK]) {
            straight = false;
            break;
        }
    }

    /* check for a 4-of-a-kind, 3-of-a-kind, and pairs */
    card = 0;
    while (card < NUM_CARDS) {
        run = 0;
        rank = hand[card][RANK];
        do {
            run++;
            card++;
        } while (card < NUM_CARDS && hand[card][RANK] == rank);
        switch(run) {
            case 2: pairs++;        break;
            case 3: three = true;   break;
            case 4: four = true;    break;
        }
    }
}

void print_result(void)
{
    if (straight && flush)  printf("Straight flush");
    else if (four)          printf("Four of a kind");
    else if (three &&
            pairs == 1)      printf("Full house");
    else if (flush)         printf("Flush");
    else if (straight)      printf("Straight");
    else if (three)         printf("Three of a kind");
    else if (pairs == 2)    printf("Two pairs");
    else if (pairs == 1)    printf("Pair");
    else                    printf("High card");

    printf("\n\n");
}
