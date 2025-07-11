#include <stdio.h>

#define STRINGIZE(x) #x
#define STRINGIZE2(x) STRINGIZE(x)
#define LINE_FILE "Line "STRINGIZE2(__LINE__)" of file "STRINGIZE2(__FILE__) 

int main(void)
{
    char s[100] = LINE_FILE;

    puts(s);

    return 0;
}
