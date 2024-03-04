/* 07_bills.c */

#include <stdio.h>

int main(void)
{
    int amount;
    int twenties, tens, fives;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenties = amount / 20;
    printf("$20 bills: %d\n", twenties);
    amount -= 20 * twenties;

    tens = amount / 10;
    printf("$10 bills: %d\n", tens);
    amount -= 10 * tens;

    fives = amount / 5;
    printf(" $5 bills: %d\n", fives);
    amount -= 5 * fives;
    
    printf(" $1 bills: %d\n", amount);

    return 0;
}
