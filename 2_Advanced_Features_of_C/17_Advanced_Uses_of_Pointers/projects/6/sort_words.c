#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 20

int read_word(char *str, int len);
int compare_words(const void *p, const void *q);

int main(void)
{
	int max_len = 10;

	char word[MAX_WORD_LEN];	
	char **words = malloc(max_len * sizeof(char *));
	int num_words = 0;
	int len;

	for (;;) {
		printf("Enter word: ");
		len = read_word(word, MAX_WORD_LEN);
		if (len == 0) 
			break;

		if (num_words >= max_len) {
			max_len *= 2;
			words = realloc(words, max_len * sizeof(char *));
			if (words == NULL) {
				printf("Couldn't allocate enough space.\n");
				exit(EXIT_FAILURE);
			}
		}

		words[num_words] = malloc(sizeof(char) * MAX_WORD_LEN);
		strcpy(words[num_words], word);
		num_words++;
	}

	qsort(words, num_words, sizeof(char *), compare_words);
	printf("In sorted order:");

	int i;
	for (i = 0; i < num_words; i++) {
		printf(" %s", words[i]);
	}
	printf("\n");

	free(words);

	return 0;
}

int compare_words(const void *p, const void *q)
{
	return strcmp(*(char **)p, *(char **)q);
}

int read_word(char *str, int len)
{
	int ch, i = 0;
	while (isspace(ch = getchar()) == false) 
		if (i < len)
			str[i++] = ch;	
	while (isspace(ch) && ch != '\n')
		ch = getchar();
	str[i] = '\0';
	return i;
}
