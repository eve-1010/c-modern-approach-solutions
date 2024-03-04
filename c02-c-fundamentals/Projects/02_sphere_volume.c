/* 02_sphere_volume.c */

#include <stdio.h>
#define PI 3.14159f

int main(void)
{
    float radius = 10;
    // 4/3 * PI * radius**3
    float volume = 4.0f / 3.0f * PI * radius * radius * radius;
    printf("Volume of sphere with radius of 10 meters is %.2f m^3\n", volume);
    return 0;

    /*
    // Extra: User entered radius value
    float radius;
    printf("Radius of sphere in meter: ");
    scanf("%f", &radius);
    float volume = 4.0f / 3.0f * PI * radius * radius * radius;
    printf("Volume of sphere with radius of %.2f meters is %.2f m^3\n", radius, volume);

    return 0;
    */

    /* printf("%d\n", 4/3);  // Outputs 1
     * printf("%f\n", 4.0f/3.0f);  // Outputs 1.333333
     */
}