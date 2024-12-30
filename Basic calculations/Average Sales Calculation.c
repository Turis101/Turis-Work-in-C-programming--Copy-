/*
Calculate the average sales per day in a month with total sales of
UGX 60000 over 30 days.

- Formula: average_sales = total_sales / days

*/

#include <stdio.h>
#include <stdlib.h>

const int total_sales = 60000, days = 30;
int average_sales = total_sales / days;

int main()
{
    printf("The average sales per day in a month with total sales of UGX%d over %d days is: UGX%d\n", total_sales, days, average_sales);
    printf("The program run successfully\n");

    return 0;
}
