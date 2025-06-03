// Name: product_info.c
// Purpose: print structured table, based on user input (item number and price)
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int item_num, month, day, year;
    float item_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter item price: ");
    scanf("%f", &item_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%7.2f\t%d/%d/%d\n", item_num, item_price, month, day, year);

    return 0;
}
