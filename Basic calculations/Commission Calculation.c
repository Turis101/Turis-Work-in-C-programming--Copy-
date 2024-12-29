/*
Calculate the commission for a salesperson who sold UGX
50000 worth of goods at a 5% commission rate.

- Formula: commission = sales_volume * commission_rate

*/

#include <stdio.h>
#include <stdlib.h>

const double sales_volume = 50000, commission_rate = 0.05;
double commission = sales_volume * commission_rate;

int main()
{
    printf("The commission for a salesperson who sold UGX%.0lf worth of goods at a %.2lf commission rate is: %.2lf\n", sales_volume, commission_rate, commission);
    return 0;
}
