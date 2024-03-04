/* 04_tax.c */

#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("with tax added: $%.2f\n", amount * 105 / 100);

    return 0;
}
