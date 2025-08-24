#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[20];
	char sales_rank[20];

	printf("Enter a rank string: ");
	scanf("%s", str);

	sscanf(str, "%*[^#]#%[0123456789,]s", sales_rank);
	printf("%s\n", sales_rank); 

	return 0;
}
