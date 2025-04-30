// Name: num_to_letter_grade.c
// Purpose: Convert a numeric grade to a letter one
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int grade;

    printf("Enter numberical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Illegal grade\n");
        return 0;
    }

    printf("Letter grade: ");

    switch (grade / 10) {
        case 10: 
        case 9: 
            printf("A\n"); break;
        case 8:
            printf("B\n"); break;
        case 7:
            printf("C\n"); break;
        case 6:
            printf("D\n"); break;
        default:
            printf("F\n"); break;
    }

    return 0;
}
