#include <stdlib.h>
#include <string.h>

char * duplicate(const char *str)
{
    char * str_dup = malloc(strlen(str) + 1);
    if (str_dup == NULL) {
        return NULL;
    }

    strcpy(str_dup, str);
    return str_dup;
}
