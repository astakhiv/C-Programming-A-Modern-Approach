#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct word_node {
	char word[MAX_LINE_LEN];
	struct word_node *next;
};

struct word_node *line = NULL;
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
	struct word_node *temp;

	while (line != NULL) {
		temp = line;
		line = line->next;
		free(temp);
	}

	line = NULL;
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
	struct word_node *i, *new_word = malloc(sizeof(struct word_node));

	if (new_word == NULL) {
		printf("Couldn't allocate space.\n");
		exit(EXIT_FAILURE);
	}

	if (num_words > 0)
		line_len++;
	
    strcpy(new_word->word, word);
    line_len += strlen(word);
    num_words++;

	if (line == NULL) {
		line = new_word;
	} else {
		for (i = line; i->next != NULL; i=i->next)
			;
		i->next = new_word;
	}
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, j;
	struct word_node *cur;

    extra_spaces = MAX_LINE_LEN - line_len;
	for (cur = line; cur != NULL; cur = cur->next) {
		printf("%s", cur->word);

		if (num_words > 1) {
			spaces_to_insert = extra_spaces / (num_words - 1);
			for (j = 1; j <= spaces_to_insert + 1; j++)
				putchar(' ');
			extra_spaces -= spaces_to_insert;
			num_words--;
		}
    }
    putchar('\n');
}

void flush_line(void) 
{
	if (line != NULL) {
		struct word_node *cur;

		for (cur = line; cur != NULL; cur=cur->next) {  
			printf("%s", cur->word);
			putchar(' ');
		}
		putchar('\n');
	}
}
