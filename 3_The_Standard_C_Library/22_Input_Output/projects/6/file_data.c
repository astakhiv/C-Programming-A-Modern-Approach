#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int ch, i, j;

	if (argc != 2) {
		fprintf(stderr, "usage: file_data filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	printf("Offset             Bytes             Characters\n");
	printf("------ ----------------------------- ----------\n");
	ch = getc(fp);
	for (i = 0; ch != EOF ; i += 10) {
		printf("%6d ", i);

		j = i;
		while (ch != EOF && j < i + 10) {
			printf("%2.2X ", ch);
			ch = getc(fp);
			j++;
		}

		fseek(fp, -(j-i + 1), SEEK_CUR);

		while (j++ < i + 10) 
			printf("   ");

		j -= 10;

		while ((ch = getc(fp)) != EOF && j < i + 10) {
			putchar(isprint(ch) ? ch : '.');
			j++;
		}

		putchar('\n');
	}

	fclose(fp);

	return 0;
}		
