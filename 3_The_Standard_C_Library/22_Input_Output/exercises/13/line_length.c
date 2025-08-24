#include <stdio.h>
#include <stdlib.h>

int line_length(const char *filename, int n);

int main(int argc, char *argv[])
{
	if (argc != 3) {
		fprintf(stderr, "usage: line_length filename line_nuber\n");
		exit(EXIT_FAILURE);
	}

	int n = atoi(argv[2]);
	if (n < 1) {
		fprintf(stderr, "Line number must be 1 or more\n");
		exit(EXIT_FAILURE);
	}

	printf("The length of the line %d in the %s is: %d\n", n, argv[1], line_length(argv[1], n));
	return 0;
}

int line_length(const char *filename, int n)
{
	FILE *fp;
	int ch, count = 0;
	
	if ((fp = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while (n > 1) {
		do {
			ch = getc(fp);
		} while (ch != EOF && ch != '\n');

		if (ch == EOF) 
			return 0;

		n--;
	}

	do {
		ch = getc(fp);
		count++;
	} while (ch != EOF && ch != '\n');

	return count - 1;
}
