// Name: ceasar_modified.c
// Purpose: Encrypts given message using Ceasar cypher
// Author: myn0name

#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 80

int read_line(char *str, int n);
void encrypt(char *message, int shift);

int main(void) 
{
    char msg[MAX_LEN];
    int shift;

    printf("Enter message to be encrypted: ");
    read_line(msg, MAX_LEN);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    encrypt(msg, shift);

    printf("Encrypted message: ");
    printf("%s\n", msg);

    return 0;
}

int read_line(char *str, int n)
{
    char ch, i = 0;
    while ((ch = getchar()) != '\n') 
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';

    return i;
}

void encrypt(char *message, int shift)
{
    int i;

    for (i = 0; message[i] != '\0'; i++) {
        if ('A' <= message[i] && message[i] <= 'Z') {
            message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
        } else if ('a' <= message[i] && message[i] <= 'z'){
            message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
        }
    }
}

