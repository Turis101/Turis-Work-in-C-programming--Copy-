/*
Calculate the break-even point in units for a product with
fixed costs of UGX 2000, a variable cost per unit of UGX 15, and a selling price per unit of
UGX 25.
- Formula: break_even_units = fixed_costs / (selling_price - variable_cost

*/
#include <stdio.h>
#include <stdlib.h>

const int fixed_costs = 2000, variable_cost = 15, selling_price = 25;
int break_even_units = fixed_costs / (selling_price - variable_cost);

int main()
{
    printf("The break-even point in units is: %d \n", break_even_units);

    return 0;
}
