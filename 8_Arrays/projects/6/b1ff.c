// Name: b1ff.c
// Purpose: Convert a message to b1ff style
// Author: myn0name

#include <ctype.h>
#include <stdio.h>

#define MSG_LEN ((int) (sizeof(msg)/sizeof(msg[0]))) 

int main(void) 
{
    char msg[100];
    char c;
    int i;
 
    printf("Enter a message: ");
    i = 0;
    while ((c = getchar()) != '\n') {
        msg[i] = c;
        i++;
    }
    msg[i] = '\0';

    printf("In B!FF-speak: ");
    for (i = 0; msg[i] != '\0'; i++) {
         msg[i] = toupper(msg[i]);
 
         switch (msg[i]) {
             case 'A':
                 msg[i] = '4';
                 break;
             case 'B': 
                 msg[i] = '8';
                 break;
             case 'E':
                 msg[i] = '3';
                 break;
             case 'I':
                 msg[i] = '1';
                 break;
             case 'O':
                 msg[i] = '0';
                 break;
             case 'S':
                 msg[i] = '5';
                 break;
         }
 
         putchar(msg[i]);
    }
 
    printf("!!!!!!!!!!\n");

    return 0;
}
