#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{	
	FILE *input, *dest;
	int ch, saved, count = 0;

	if (argc != 2) {
		fprintf(stderr, "usage: compress_file filename\n");
		exit(EXIT_FAILURE);
	}

	if ((input = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((dest = fopen(strcat(argv[1], ".rle"), "wb")) == NULL) {
		fprintf(stderr, "Can't open dest file\n");
		fclose(input);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(input)) != EOF) {
		if (count == 0) {
			count = 1;
			saved = ch;
		} else if (ch != saved) {
			putc(count, dest);
			putc(saved, dest);
			count = 1;
			saved = ch;
		} else {
			count++;
		}
	}

	fclose(input);
	fclose(dest);

	return 0;
}