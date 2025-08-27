#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};

int main(int argc, char *argv[])
{
	FILE *inp1, *inp2, *dest;
	int num_parts, i;
	struct part parts_1[MAX_PARTS] = {0}, 
		   parts_2[MAX_PARTS] = {0}, 
		   *merged_parts, *p, *q;
	
	if (argc != 4) {
		fprintf(stderr, "usage: merge inp1 inp2 dest\n");
		exit(EXIT_FAILURE);
	}

	if ((inp1 = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	num_parts = fread(parts_1, sizeof(struct part), MAX_PARTS, inp1);
	fclose(inp1);
	
	if ((inp2 = fopen(argv[2], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	num_parts += fread(parts_2, sizeof(struct part), MAX_PARTS, inp2);
	fclose(inp2);

	merged_parts = malloc(sizeof(struct part) * num_parts);
	
	q = parts_1;
	p = parts_2;
	for (i = 0; i < num_parts && q->number != 0 && p->number != 0; i++) {
		if (q->number < p->number) {
			merged_parts[i] = *q++;
		} else if (p->number < q->number) {
			merged_parts[i] = *p++;
		} else if (strcmp(q->name, p->name) == 0) {
			merged_parts[i] = *q++;
			merged_parts[i].on_hand += (p++)->on_hand;
			num_parts--;
		} else {
			fprintf(stderr, "Parts with the same number have differing names.\n");
			free(merged_parts);
			exit(EXIT_FAILURE);
		}
		
	}

	for (;i < num_parts && q->number != 0; i++, q++)
		merged_parts[i] = *q;
	
	for (;i < num_parts && p->number != 0; i++, p++) 
		merged_parts[i] = *p;

	if ((dest = fopen(argv[3], "wb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[3]);
		exit(EXIT_FAILURE);
	}

	fwrite(merged_parts, sizeof(struct part), num_parts, dest);
	fclose(dest);
	free(merged_parts);

	return 0;
}
