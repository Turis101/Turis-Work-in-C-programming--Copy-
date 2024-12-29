/*
Calculate the total amount payable after a 20% discount
on an original amount of UGX 1200.

- Formula: final_amount = original_amount - (discount_rate * original_amount)
*/

#include <stdio.h>
#include <stdlib.h>

const double original_amount = 1200, discount_rate = 0.2;
double final_amount = original_amount - (discount_rate * original_amount);

int main()
{
    printf("The total amount payable after 0.2 discount is: %.0lf\n", final_amount);
    return 0;
}
