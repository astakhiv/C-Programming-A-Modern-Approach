#include <stdio.h>

int main(void)
{
	const int x = 10;
	int y = 10;

	switch (y) {
		case x: printf("Fine\n");
	}		

	return 0;
}	
