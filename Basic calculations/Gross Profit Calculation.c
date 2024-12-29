/*
Calculate the gross profit for a business with a total revenue of
UGX 12000 and total costs of UGX 8000.
- Formula: gross_profit = total_revenue - total_cost
*/

#include <stdio.h>
#include <stdlib.h>

const int total_revenue = 12000, total_cost = 8000;
int gross_profit = total_revenue - total_cost;

int main()
{
    printf("The gross profit thus is: %d\n", gross_profit);
    return 0;
}
