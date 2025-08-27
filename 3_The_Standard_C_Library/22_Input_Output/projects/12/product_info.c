// Name: product_info.c
// Purpose: print structured table, based on user input (file with items number and price)
// Author: myn0name

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	FILE *fp;
	char data[100];
    int item_num, month, day, year;
    float item_price;

	if (argc != 2) {
		fprintf(stderr, "usage: product_info filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	} 

	
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
	while (fscanf(fp, "%s", data) != EOF) {
		if (sscanf(data, "%d,%f,%d/%d/%d", &item_num, &item_price, &month, &day, &year) != 5) {
			fprintf(stderr, "Incorrect data\n");
			exit(EXIT_FAILURE);	
		}
    	printf("%-d\t\t$%7.2f\t%d/%d/%d\n", item_num, item_price, month, day, year);
	}

	fclose(fp);

    return 0;
}
