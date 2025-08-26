#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int ch, i, j;
	char line[11];

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
			line[j-i] = isprint(ch) ? ch : '.';

			ch = getc(fp);
			j++;
		}
		line[j-i] = '\0';
	
		while (j++ < i + 10)
			printf("   ");

		printf("%s\n", line);
	}

	fclose(fp);

	return 0;
}		
