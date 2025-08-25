#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int ch, i;

	if (argc < 2) {
		fprintf(stderr, "usage: fcat filenames\n");
		exit(EXIT_FAILURE);
	}

	for (i = 1; i < argc; i++) {
		if ((fp = fopen(argv[i], "r")) == NULL) {
			fprintf(stderr, "Can't open %s\n", argv[i]);
			exit(EXIT_FAILURE);
		}

		while ((ch = getc(fp)) != EOF)
			putchar(ch);

		fclose(fp);
	}

	return 0;
}
