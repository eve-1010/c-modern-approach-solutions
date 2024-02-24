/* dweight.c - Computes the dimensional weight of a 12" x 10" x 8" box. */

#include <stdio.h>

int main(void)
{
    int  length, width, height, volume, weight;

    length = 12;
    width = 10;
    height = 8;
    volume = height * width * length;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    /* Can also be:
       printf("%d\n", length * width * height);*/
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}