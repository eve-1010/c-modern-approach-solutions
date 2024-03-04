/* 06_horners_rule.c */

#include <stdio.h>

int main(void)
{
    float x;

    printf("x: ");
    scanf("%f", &x);
    printf("%f\n", ((((3*x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}
