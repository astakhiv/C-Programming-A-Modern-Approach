#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *inp, *dest;
	int ch, save;

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
		
	
	save = -1;
	while ((ch = getc(inp)) != EOF) {
		if (ch == '\x0d') {
			save = '\x0d';
			continue;
		}

		if (save == '\x0d' && ch == '\x0a') {
			save = -1;
		} else if (save == '\x0d' && ch != '\x0a') {
			putc(save, dest);
		}
		putc(ch, dest);
	}

	fclose(inp);
	fclose(dest);

	return 0;
}
