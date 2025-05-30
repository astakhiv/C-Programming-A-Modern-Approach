// Name: 7-digit-num.c
// Purpose: Prints a given number in a 7-segment digits format
// Author: myn0name

#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1}
};

char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    int digits[MAX_DIGITS];
    char c;
    int i = 0;

    clear_digits_array();

    printf("Enter a number: ");
    while ((c = getchar()) != '\n' && i < MAX_DIGITS) {
        if ('0' <= c && c <= '9') {
            digits[i] = c - '0';
            process_digit(digits[i], i);
            i++;
        }
    }

    print_digits_array();

    return 0;
}

void clear_digits_array(void) 
{
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{
    digits[0][position * 4 + 1] = segments[digit][0] ? '_' : ' ';
    digits[1][position * 4 + 2] = segments[digit][1] ? '|' : ' ';
    digits[2][position * 4 + 2] = segments[digit][2] ? '|' : ' ';
    digits[2][position * 4 + 1] = segments[digit][3] ? '_' : ' ';
    digits[2][position * 4 + 0] = segments[digit][4] ? '|' : ' ';
    digits[1][position * 4 + 0] = segments[digit][5] ? '|' : ' ';
    digits[1][position * 4 + 1] = segments[digit][6] ? '_' : ' ';
}

void print_digits_array(void)
{
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}
