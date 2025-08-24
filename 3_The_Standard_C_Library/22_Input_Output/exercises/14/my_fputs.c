#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_fputs(const char * restrict s, FILE * restrict stream);

int main(int argc, char *argv[]) 
{
	if (my_fputs(argv[1], stdout) == EOF) {
		printf("Err\n");
	}

	return 0;
}

int my_fputs(const char * restrict s, FILE * restrict stream)
{
	int i;

	for (i = 0; s[i] != '\0'; i++) 
		if (putc(s[i], stream) == EOF) 
			return EOF;

	return i;
}
