/*
Calculate the price of a product after applying a 10%
discount and an 18% VAT to an original price of UGX 200.
- Formula: discounted_price = original_price - (discount_rate * original_price)
final_price = discounted_price + (VAT_rate * discounted_price)

*/

#include <stdio.h>
#include <stdlib.h>

const double discount_rate = 0.1, original_price = 200, VAT_rate = 0.18;
const double discounted_price = original_price - (discount_rate * original_price);
double final_price = discounted_price + (VAT_rate * discounted_price);

int main()
{
    printf("The price of a product after applying a %.2lf discount and %.2lf VAT to an original price of UGX%.0lf is: UGX%.2lf \n", discount_rate, VAT_rate, original_price, final_price);
    return 0;
}
