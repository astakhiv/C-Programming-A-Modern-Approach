#include <stdio.h>

int compare_parts(const void *p, const void *q)
{
	return ((struct part *) q)->number -
		   ((struct part *) p)->number;
}
