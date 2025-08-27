#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void print_num(char *phone_num);

int main(int argc, char *argv[])
{
	FILE *inp;
	char phone_num[10];
	int i, ch;
	
	
	if (argc != 2) {
		fprintf(stderr, "usage: stdformat filename\n");
		exit(EXIT_FAILURE);
	}

	if ((inp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(inp)) != EOF) {
		if (ch == '\n') {
			i = 0;
			print_num(phone_num);
		}

		if (isdigit(ch))
			phone_num[i++] = ch;

	}

	fclose(inp);

	return 0;
}


void print_num(char *phone_num)
{
	int i;

	putchar('(');
	for (i = 0; i < 10; i++) {
		if (i == 3)
			printf(") ");
		else if (i == 6) 
			printf("-");

		putchar(phone_num[i]);
	}
	putchar('\n');
}
