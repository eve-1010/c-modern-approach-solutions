/* upc.c - Computes a Universal Product Code check digit */

/* UPC - Universal Product Code 
 * First digit - Type of item
     0 or 7 for most items
     2 for items that must be weighed
     3 for drugs
     5 for coupons
 * First group of 5 digits - Manufacturer
 * Second group of 5 digits - Product (including package size)
 * Last digit - Check digit
 *
 * Check digit calculation
 * Multiply the sum of odd place digits by 3 and add it to the
 * sum of even place digits. Subtract 1 from the total and compute
 * the remainder when the adjusted total is divided by 10. Subtract
 * the remainder from 9.
 */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, 
        first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
