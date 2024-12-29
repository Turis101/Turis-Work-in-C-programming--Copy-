/*
Calculate the revenue for a shop selling three items with prices
UGX 3000, UGX 4500, and UGX 6000, and quantities sold of 100, 150, and 200, respectively.

- Formula: total_revenue = (price1 * quantity1) + (price2 * quantity2) + (price3 * quantity3)

*/


#include <stdio.h>
#include <stdlib.h>

const int price1 = 3000, price2 = 4500, price3 = 6000;
const int quantity1 = 100, quantity2 = 150, quantity3 = 200;
int total_revenue = (price1 * quantity1) + (price2 * quantity2) + (price3 * quantity3);

int main()
{
    printf("The revenue for a shop selling three items is: UGX%d\n", total_revenue);
    return 0;
}
