// 03_isbn.c

/* ISBN - International Standard Book Number
 * GSI prefix (3): Either 978 or 979
 * Group identifier (1): Language or country of origin
 * Publisher code (3)
 * Item number (5)
 * Check digit (1): Verify the accuracy of preceding digits 
 * 
 * Example: 978-0-393-97950-3
 */

#include <stdio.h>

int main(void)
{
    int gsi, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d", &gsi, &group_identifier, &publisher_code, &item_number, &check_digit);
    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;

    
}
