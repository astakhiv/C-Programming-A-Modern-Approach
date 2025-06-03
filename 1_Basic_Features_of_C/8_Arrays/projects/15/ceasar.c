// Name: ceasar.c
// Purpose: Encrypts given message using Ceasar cypher
// Author: myn0name

#include <ctype.h>
#include <stdio.h>


int main(void) 
{
    char msg[80], c;
    int shift, i;

    printf("Enter message to be encrypted: ");
    for (i = 0; (c = getchar()) != '\n'; i++) {
        msg[i] = c;
    }
    msg[i] = '\0';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for (i = 0; msg[i] != '\0'; i++) {
        if ('A' <= msg[i] && msg[i] <= 'Z') {
            msg[i] = ((msg[i] - 'A') + shift) % 26 + 'A';
        } else if ('a' <= msg[i] && msg[i] <= 'z'){
            msg[i] = ((msg[i] - 'a') + shift) % 26 + 'a';
        }
        printf("%c", msg[i]);
    }
    printf("\n");
    

    return 0;
}
