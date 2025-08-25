#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	FILE *fp;
	int ch, count = 0;

	if (argc != 2) {
		fprintf(stderr, "usage: numw filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	ch = getc(fp);
	for(;;) {
		while (ch != EOF && isspace(ch))
			ch = getc(fp);

		if (ch == EOF)
			break;

		while (ch != EOF && !isspace(ch))
			ch = getc(fp);
		
		count++;
	}

	printf("Words in the file: %d\n", count);
	fclose(fp);

	return 0;
}
