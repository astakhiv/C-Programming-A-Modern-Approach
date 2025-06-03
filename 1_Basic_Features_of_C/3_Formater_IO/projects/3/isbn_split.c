// Name: isbn_split.c
// Purpose: split IBSN in groups
// Author: myn0name

#include <stdio.h>

int main(void) 
{
    int gs1, group_id, publisher_code, item_num, check_digit;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &publisher_code, &item_num, &check_digit);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
            gs1, group_id, publisher_code, item_num, check_digit);

    return 0;
}
