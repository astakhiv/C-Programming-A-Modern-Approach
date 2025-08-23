#include <stdio.h>

int main(int argc, char *argv[])
{
	int widgets = argc;

	printf("%d, widget%c\n", widgets, widgets > 1 ? 's' : ' ');

	return 0;
}	
