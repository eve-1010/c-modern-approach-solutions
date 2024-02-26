/* dweight2.c - Computes dimensional weight of a box from input provided by the user */

#include <stdio.h>

int main(void)
{
    float length, width, height, volume;
    int weight;

    printf("Enter length of box: ");
    scanf("%f", &length);
    printf("Enter width of box: ");
    scanf("%f", &width);
    printf("Enter height of box: ");
    scanf("%f", &height);
    volume = length * width * height;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %.2f\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}