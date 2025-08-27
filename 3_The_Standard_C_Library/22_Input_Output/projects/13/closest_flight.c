// Name: closest_flight.c
// Purpose: find the closest flight to given time
// Author: myn0name

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 12

int read_line(char *s, int n, FILE *fp);

int main(void) 
{
	FILE *fp; 
	int hours, minutes, time, diff, 
		min = 24 * 60, i; 
	char flight_data[MAX_LEN];
	char min_flight[MAX_LEN];

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hours, &minutes);

    time = hours * 60 + minutes;

	if ((fp = fopen("flights.dat", "r")) == NULL) {
		fprintf(stderr, "Can't open flights.dat\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; read_line(flight_data, MAX_LEN, fp); i++) {
		sscanf(flight_data, "%d:%d", &hours, &minutes);

		diff = abs((hours * 60 + minutes) - time);
		if (min > diff) {
			min = diff;
			strcpy(min_flight, flight_data);
		}
	}	

	printf("Closest flight departs at ");
	sscanf(min_flight, "%d:%d", &hours, &minutes);
	printf("%d:%.2d %c. m. ", hours > 12 ? hours - 12 : hours, minutes, hours > 12 ? 'p' : 'a');
	printf("and arrives at ");
	sscanf(min_flight, "%*d:%*d %d:%d", &hours, &minutes);
	printf("%d:%.2d %c. m.\n", hours > 12 ? hours - 12 : hours, minutes, hours > 12 ? 'p' : 'a');

	return 0;
}

int read_line(char *s, int n, FILE *fp)
{
	int ch, i = 0;
	while ((ch = getc(fp)) != EOF && ch != '\n')
		if (i < n)
			s[i++] = ch;
	s[i] = '\0';

	return i;
}
