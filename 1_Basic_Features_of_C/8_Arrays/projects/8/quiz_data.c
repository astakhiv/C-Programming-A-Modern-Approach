// Name: sum5by5.c
// Puspore: Finds total and average scor for a student and low, high and average score for quiz
// Author: myn0name

#include <stdio.h>

int main(void) {
    int students_totals[5] = {0},
        quiz_totals[5] = {0},
        quiz_high[5] = {0},
        quiz_low[5] = {0};
    int i, j, score;

    for (i = 0; i < 5; i++) {
        printf("Enter quiz %d scores: ", i+1);
        for (j = 0; j < 5; j++) {
            scanf("%d", &score);
            quiz_totals[i] += score;
            students_totals[j] += score;

            if (score > quiz_high[i]) {
                quiz_high[i] = score;
            } else if (score < quiz_low[i] || quiz_low[i] == 0) {
                quiz_low[i] = score;
            }
        }
    }

    printf("Student\t\tTotal\t\tAverage\n");
    for (i = 0; i < 5; i++) {
        printf("%3d\t\t%3d\t\t%6.2f\n", i+1, students_totals[i], students_totals[i] / 5.0);
    }
    printf("\nQuiz\t\tAverage\t\tHigh\t\tLow\n");
    for (i = 0; i < 5; i++) {
        printf("%3d\t\t%6.2f\t\t%3d\t\t%3d\n", i+1, quiz_totals[i] / 5.0, quiz_high[i], quiz_low[i]);
    }
    
    return 0;
}
