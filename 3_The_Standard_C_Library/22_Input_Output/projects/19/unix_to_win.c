#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *inp, *dest;
	int ch;

	if (argc != 3) {
		fprintf(stderr, "usage: win_to_unix input dest\n");
		exit(EXIT_FAILURE);
	}

	if ((inp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
		
	if ((dest = fopen(argv[2], "wb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
		
	while ((ch = getc(inp)) != EOF) {
		if (ch == '\x0a')
			putc('\x0d', dest);
		putc(ch, dest);
	}

	fclose(inp);
	fclose(dest);

	return 0;
}
