#include <stdbool.h>
#include <stdio.h>

int main() 
{
    bool weekend[7] = {true, [6] = true}; 

    for (int i = 0; i < 7; i++) {
        printf(weekend[i] ? " true": " false");
    }
    printf("\n");

    return 0;
}
