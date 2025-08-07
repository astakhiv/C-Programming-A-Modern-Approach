#include <stddef.h>
#include <stdio.h>

struct s {
	char a;
	int b[2];
	float c;
};

int main(void)
{
	int size_of_hole;

	printf("-- struct s --");
	printf("sizeof: %ld\n\n", sizeof(struct s));

	printf("-- Member \"a\" --\n");
	printf("sizeof: %ld, offsetof: %ld\n", sizeof(char), offsetof(struct s, a));
	printf("-- Member \"b\" --\n");
	printf("sizeof: %ld, offsetof: %ld\n", sizeof(int [2]), offsetof(struct s, b));
	printf("-- Member \"c\" --\n");
	printf("sizeof: %ld, offsetof: %ld\n", sizeof(float), offsetof(struct s, c));

	printf("\n");

	size_of_hole = offsetof(struct s, b) - sizeof(char) ;	
	if (size_of_hole != 0)
		printf("A hole between members a and b of size %d bytes\n", size_of_hole);

	size_of_hole =  offsetof(struct s, c) - (offsetof(struct s, b) + sizeof(int [2])); 
	if (size_of_hole != 0)
		printf("A hole between members b and c of size %d bytes\n", size_of_hole);

	size_of_hole =  sizeof(struct s) - (offsetof(struct s, c) + sizeof(float));
	if (size_of_hole != 0)
		printf("A hole after member c of size %d bytes\n", size_of_hole);

	return 0;
}
