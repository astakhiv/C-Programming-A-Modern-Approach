// Name: number_as_words_modified.c
// Purpose: output given two-digit number as word
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    const char *tens[] = {
        "twenty", "thirty", "fourty", "fifty", "sixty",
        "seventy", "eighty", "ninety"
    };

    const char *ones[] = {
        "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    const char *single_word[] = {
        "ten", "eleven", "twelve", "thirteen", "fourteen", 
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    int number;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99) {
        printf("Invalid two-digit number\n");
        return 0;
    }

    printf("You entered the number ");

    if (number < 20) {
        printf("%s\n", single_word[number-10]);       
    } else {
        printf("%s", tens[number / 10 - 2]);

        if (number % 10 != 0) {
            printf("-%s", ones[number % 10 - 1]);
        }

        printf("\n");
    }

    return 0;
}
