/* Calculates a broker's commision */

#include <stdio.h>

int main(void) 
{
    float commision, value;

    printf("Enter value of trade: ");
    scanf("%f", &value);

    if (value < 2500.00f) {
        commision = 30.00f + value * 0.017f;
    } else if (value < 6250.00f ) {
        commision = 56.00f + value * 0.0066f;
    } else if (value < 20000.00f) {
        commision = 76 + value * 0.0034f;
    } else if (value < 50000.00f) {
        commision = 100 + value * 0.0022f;
    } else if (value < 500000.00f) {
        commision = 155.00f + value * 0.0011f;
    } else {
        commision = 255.00f + value * 0.0009f;
    }

    if (commision < 39.00f) {
        commision = 39.00f;
    }

    printf("Commision: $%.2f\n", commision);

    return 0;
}
