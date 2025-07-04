// Name: number_as_word.c
// Purpose: output given two-digit number as word
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int number;
    
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99) {
        printf("Invalid two-digit number\n");
        return 0;
    }

    printf("You entered the number ");

    if (number < 20) {
        switch (number) {
            case 10: printf("ten\n"); break;
            case 11: printf("eleven\n"); break;
            case 12: printf("twelve\n"); break;
            case 13: printf("thirteen\n"); break;
            case 14: printf("fourteen\n"); break;
            case 15: printf("fifteen\n"); break;
            case 16: printf("sixteen\n"); break;
            case 17: printf("seventeen\n"); break;
            case 18: printf("eighteen\n"); break;
            case 19: printf("nineteen\n"); break;
        }
    } else {
        switch(number / 10) {
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("fourty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
        }

        switch(number % 10) {
            case 1: printf("-one"); break;
            case 2: printf("-two"); break;
            case 3: printf("-three"); break;
            case 4: printf("-four"); break;
            case 5: printf("-five"); break;
            case 6: printf("-six"); break;
            case 7: printf("-seven"); break;
            case 8: printf("-eight"); break;
            case 9: printf("-nine"); break;
        }

        printf("\n");
    }

    return 0;
}
