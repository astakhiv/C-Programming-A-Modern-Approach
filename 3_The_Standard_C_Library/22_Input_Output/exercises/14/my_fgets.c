#include <stdio.h>
#include<stdlib.h>

char *my_fgets(char * restrict s, int n, FILE * restrict stream);

int main(void) 
{
	char str[10];

	my_fgets(str, 10, stdin);
	printf("%s\n", str);
/*
	fgets(str, 10, stdin);
	printf("%s\n", str);
*/

	return 0;
}

/* bad
char *my_fgets(char * restrict s, int n, FILE * restrict stream)
{
	int ch, i = 0;

	while (i < n - 1 && (ch = getc(stream)) != EOF) {
		s[i] = ch;
		i++;
	}
	s[i] = '\0';

	if (ferror(stream))
		return NULL;

	return i == 0 ? NULL : s;
}
*/

char *my_fgets(char * restrict s, int n, FILE * restrict stream)
{
	int ch, len = 0;

	while (len < n - 1) {
		if ((ch = fgetc(stream)) == EOF) {
			if (len == 0 || ferror(stream))
				return NULL;
			break;
		}
		s[len++] = ch;

		if (ch == '\n')
			break;
	}

	s[len] = '\0';
	return s;
}
