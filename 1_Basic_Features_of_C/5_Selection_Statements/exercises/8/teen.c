#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    int teenager, age = 35;

    if (age >= 13)
        if  (age <= 19)
            teenager = true;
        else
            teenager = false;
    else if (age < 13)
        teenager = false;

    printf("Teenager: %d\n", teenager);

    teenager = (age >= 13) && (age <= 19);
        
    printf("Teenager short: %d\n", teenager);

    return 0;
}
