#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *input, *dest;
	int ch;

	
	if (argc != 4) {
		fprintf(stderr, "usage: xor input dest key\n");
		exit(EXIT_FAILURE);
	}

	if ((input = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	if ((dest = fopen(argv[2], "wb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[2]);
		fclose(input);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(input)) != EOF) {
		putc(ch ^ argv[3][0], dest);
	}

	fclose(input);
	fclose(dest);

	return 0;
}
