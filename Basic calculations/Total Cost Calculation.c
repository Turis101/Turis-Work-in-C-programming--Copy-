/*
Write a program to calculate the total cost of items given a fixed unit
price of UGX 1500 and a quantity of 2000.

Formula: total_cost = unit_price * quantity

*/

#include <stdio.h>
#include <stdlib.h>

const int unit_price = 1500;
const int quantity = 2000;
int total_cost = unit_price * quantity;

int main()
{

    printf("The total cost of items is: UGX %d\n", total_cost);

    return 0;
}
