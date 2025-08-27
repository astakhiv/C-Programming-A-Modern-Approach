/* Formates a file of text */
#include <stdio.h>
#include <stdlib.h>

#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
	FILE *inp, *dest;
    char word[MAX_WORD_LEN+2];
    int word_len;

	if (argc != 3) {
		fprintf(stderr, "usage: justify input dest\n");
		exit(EXIT_FAILURE);
	}

	if ((inp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((dest = fopen(argv[2], "w")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[2]);
		fclose(inp);
		exit(EXIT_FAILURE);
	}

    clear_line();
    for(;;) {
        word_len = read_word(inp, word, MAX_WORD_LEN+1);
        if (word_len == 0) {
            flush_line(dest);
            return 0;
        }

        if (word_len > MAX_WORD_LEN)
            word[MAX_WORD_LEN] = '*';
        if (word_len + 1 > space_remaining()) {
            write_line(dest);
            clear_line();
        }
        add_word(word);
    }

	fclose(inp);
	fclose(dest);
	return 0;
}
