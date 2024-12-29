/*
Calculate the total cost of a meal with a base price of UGX 50,
a 15% tip, and an 8% tax.
- Formula: total_cost = base_price + (tip_rate * base_price) + (tax_rate * base_price)
*/

#include <stdio.h>
#include <stdlib.h>

const double base_price = 50, tip_rate = 0.15, tax_rate = 0.08;
double total_cost = base_price + (tip_rate * base_price) + (tax_rate * base_price);

int main()
{
    printf("the total cost of a meal with a base price of UGX 50, a 0.15 tip, and an 0.08 tax is: UGX%.2lf\n", total_cost);

    return 0;
}
