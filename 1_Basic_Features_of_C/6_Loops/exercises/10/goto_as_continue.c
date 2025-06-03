#include <stdio.h>

int main(void) 
{
    for (int i = 0; i < 10; i++) { 
        if (i % 2 == 0) {
            goto before_end;
        }
        
        printf("%d ", i);

        before_end: ;
    }

    printf("\n\n");

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
