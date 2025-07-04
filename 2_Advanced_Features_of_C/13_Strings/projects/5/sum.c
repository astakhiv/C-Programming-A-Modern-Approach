// Name: sum.c
// Purpose: Sums command-line arguments
// Author: myn0name

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long sum = 0;
    int i;

    for (i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }
    
    printf("Total: %ld\n", sum);

    return 0;
}
