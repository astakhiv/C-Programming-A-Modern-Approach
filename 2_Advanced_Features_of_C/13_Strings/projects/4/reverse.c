// Name: reverse.c
// Purpose: Prints command-line arguments in reverse order
// Author: myn0name

#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    for (i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }
    printf("\n");

    return 0;
}
