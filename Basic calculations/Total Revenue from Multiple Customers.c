/*
Calculate the cumulative total revenue generated
from customers who spent UGX 200, UGX 500, and UGX 300 respectively.
- Formula: total_revenue = customer1 + customer2 + customer3
*/

#include <stdio.h>
#include <stdlib.h>

const int customer1 = 200, customer2 = 500, customer3 = 300;
int total_revenue = customer1 + customer2 + customer3;

int main()
{
    printf("The cumulative total revenue generated from customers 1 through 3 is: UGX%d\n", total_revenue);
    return 0;
}
