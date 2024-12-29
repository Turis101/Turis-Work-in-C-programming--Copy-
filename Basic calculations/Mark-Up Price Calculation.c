/*
Calculate the selling price of a product with a cost price of
UGX 100 and a desired profit margin of 25%.
- Formula: selling_price = cost_price + (profit_margin * cost_price)
*/

#include <stdio.h>
#include <stdlib.h>

const double cost_price = 100, profit_margin = 0.25;
double selling_price = cost_price + (profit_margin * cost_price);

int main()
{
    printf("The selling price is: UGX%.2lf\n", selling_price);
    return 0;
}
