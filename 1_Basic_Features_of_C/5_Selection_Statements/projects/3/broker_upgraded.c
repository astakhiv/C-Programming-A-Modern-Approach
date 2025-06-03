// Name: broker_upgraded.c
// Purpose: calculate broker's commission
// Author: K. N. King, myn0name

#include <stdio.h>

int main(void) 
{
    float commision, rival_commision, price_per_share, value;
    int num_of_shares;

    printf("Enter number of shares: ");
    scanf("%d", &num_of_shares);

    printf("Enter price per share: ");
    scanf("%f", &price_per_share);

    value = num_of_shares * price_per_share;
    
    // Calculate brocker's commision

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

    // Calculate rival broker's commision

    if (num_of_shares < 2000) {
        rival_commision = 33.00f + 0.03 * num_of_shares;
    } else {
        rival_commision = 33.00f + 0.02 * num_of_shares;
    }

    printf("Rival commision: $%.2f\n", rival_commision);

    return 0;
}
