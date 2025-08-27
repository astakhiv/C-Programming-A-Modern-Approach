// Name: ceasar.c
// Purpose: Encrypts given message using Ceasar cypher
// Author: myn0name

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
	FILE *inp, *dest;
    char filename[FILENAME_MAX];
    int shift, i, ch;

	printf("Enter name of file to be encrypted: ");
	scanf("%s", filename);

	if ((inp = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", filename);
		exit(EXIT_FAILURE);
	}

	if ((dest = fopen(strcat(filename, ".enc"), "w")) == NULL) {
		fprintf(stderr, "Can't open %s\n", filename);
		exit(EXIT_FAILURE);
	}

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

	while ((ch = getc(inp)) != EOF) {
        if ('A' <= ch && ch <= 'Z') {
        	ch = ((ch - 'A') + shift) % 26 + 'A';
        } else if ('a' <= ch && ch <= 'z'){
        	ch = ((ch - 'a') + shift) % 26 + 'a';
        }
		putc(ch, dest);
    }
    printf("\n");
    
	fclose(inp);
	fclose(dest);

    return 0;
}
