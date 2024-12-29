/*
Calculate the profit or loss percentage for an item
with a cost price of UGX 200 and a selling price of UGX 250.

- Formula: profit_loss_percentage = ((selling_price - cost_price) / cost_price) * 100
*/

#include <stdio.h>
#include <stdlib.h>

const double selling_price = 250;
const double cost_price = 200;
double profit_loss_percentage = ((selling_price - cost_price) / cost_price) * 100;

int main()
{
    printf("The profit or loss percentage for an item is: %.0lf% \n", profit_loss_percentage);
    return 0;
}
