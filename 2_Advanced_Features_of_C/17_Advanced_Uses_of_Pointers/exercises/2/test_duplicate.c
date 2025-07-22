#include <stdio.h>
#include <stdlib.h>

#include "duplicate.h"

int main(void)
{
    char str[20];

    printf("Enter a string: ");
    scanf("%s", str);

    char *str2 = duplicate(str);
    if (str2 == NULL) {
        printf("Unable to duplicate.\n");
    } else { 
        printf("Duplicate: %s\n", str2);
    }

    return 0;
}
