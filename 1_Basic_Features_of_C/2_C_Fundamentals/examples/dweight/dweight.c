#include <stdio.h>

int main(void) {
    int height = 8, 
        length = 12, 
        width = 10, 
        volume, 
        weight;

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
