/*
Calculate the price of an item after applying a VAT of 18% on a base price
of UGX 150.
- Formula: final_price = base_price + (VAT_rate * base_price)
*/

#include <stdio.h>
#include <stdlib.h>

const double base_price = 150, VAT_rate = 0.18;
double final_price = base_price + (VAT_rate * base_price);

int main()
{
    printf("The price of an item after applying a VAT of %.2lf on a base price of %.0lf is: UGX%.0lf \n", VAT_rate, base_price, final_price);

    return 0;
}
