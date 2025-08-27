#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char *months[] = {"January", "February", "March", 
							 "April", "May", "June", 
							 "July", "August", "September",
							 "October", "November", "December"};
	char str[25];
	int month = 0, day = 0, year = 0;
	
	
	printf("Enter a date in the format: mm-dd-yyyy or mm/dd/yyyy\n");
	scanf("%s", str);

	if (sscanf(str, "%d-%d-%d", &month, &day, &year) == 3) 
		printf("%s %d, %d\n", months[month-1], day, year);	
	else if (sscanf(str, "%d/%d/%d", &month, &day, &year) == 3) 
		printf("%s %d, %d\n", months[month-1], day, year);	
	else
		printf("Date not in the proper form\n");

	return 0;
}
