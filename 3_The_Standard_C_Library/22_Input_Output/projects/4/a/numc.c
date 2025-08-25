#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	FILE *fp;
	int count = 0;

	if (argc != 2) {
		fprintf(stderr, "usage: numc filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getc(fp) != EOF)
		count++;

	printf("Characters in the file: %d\n", count);
	fclose(fp);

	return 0;
}
