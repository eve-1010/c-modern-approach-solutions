/* 05_polynomial.c */

#include <stdio.h>

int main(void)
{
    float x;

    printf("x: ");
    scanf("%f", &x);
    printf("%f\n", 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6);

    return 0;
}
