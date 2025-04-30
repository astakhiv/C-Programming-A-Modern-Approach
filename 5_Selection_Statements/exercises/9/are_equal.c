#include <stdio.h>

int main(void) 
{
    for (int score = 0; score < 120; score++) {
        if (score >= 90) 
            printf("A"); 
        else if (score >= 80) 
            printf("B");
        else if (score >= 70) 
            printf("C"); 
        else if (score >= 60) 
            printf("D"); 
        else 
            printf("F"); 
        
        if (score < 60) 
            printf("F\n"); 
        else if (score < 70) 
            printf("D\n"); 
        else if (score < 80) 
            printf("C\n"); 
        else if (score < 90) 
            printf("B\n"); 
        else 
            printf("A\n");
    }

    return 0;
}
