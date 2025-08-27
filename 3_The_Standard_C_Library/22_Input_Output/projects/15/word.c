#include <stdio.h>
#include "word.h"

int read_char(FILE *inp)
{
    int ch = getc(inp);

    return (ch == '\n' || ch == '\t') ? ' ' : ch;
}

int read_word(FILE *inp, char *word, int len)
{
    int ch, pos = 0;

    while ((ch = read_char(inp)) == ' ')
        ;
    while (ch != ' ' && ch != EOF) {
        if (pos < len)
            word[pos++] = ch;
        ch = read_char(inp);
    }
    word[pos] = '\0';
    return  pos;
}
