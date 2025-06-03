#include <stdio.h>

#define days 30
#define hours 24

int main(void) 
{
    float temperature_readings[30][24] = {0};
    float average = 0;
    
    for (int day = 0; day < days; day++) {
        for (int hour = 0; hour < hours; hour++) {
            average += temperature_readings[day][hour];
        }
    }
    average /= (days * hours);
    
    printf("Average: %.2f\n", average);

    return 0;
}
