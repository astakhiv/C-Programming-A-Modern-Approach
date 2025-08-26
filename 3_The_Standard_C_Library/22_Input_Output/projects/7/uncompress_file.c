#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *input, *dest;
	int ch, count, i, len;

	if (argc != 2) {
		fprintf(stderr, "usage: uncompress_file filename\n");
		exit(EXIT_FAILURE);
	}

	len = strlen(argv[1]);
	if (argv[1][len - 4] != '.' || argv[1][len - 3] != 'r' || argv[1][len - 2] != 'l' || argv[1][len - 1] != 'e') {
		fprintf(stderr, "file name must end with \".rle\"\n");
		exit(EXIT_FAILURE);
	}

	if ((input = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	argv[1][len-4] = '\0';
	printf("%s\n", argv[1]);
	if ((dest = fopen(argv[1], "wb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		fclose(input);
		exit(EXIT_FAILURE);
	}

	while ((count = getc(input)) != EOF) {
		ch = getc(input);
		if (ch == EOF)
			break;
	
		for (i = 0; i < count; i++) {
			putc(ch, dest);
		}
	}

	fclose(input);
	fclose(dest);

	return 0;
}
