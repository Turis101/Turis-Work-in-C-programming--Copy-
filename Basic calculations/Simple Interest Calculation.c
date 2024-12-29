
/*
Calculate the simple interest on a loan of UGX 10000 at an
interest rate of 5% over 3 years.

- Formula: simple_interest = (principal * rate * time) / 100

*/

#include <stdio.h>
#include <stdlib.h>

const double principal = 10000, rate = 0.05, time = 3;
double simple_interest = (principal * rate * time) / 100;

int main()
{
    printf("The simple interest on a loan of UGX%.0lf at an interest rate of %.2lf over %.0lfyears is: %.0lf\n", principal, rate, time, simple_interest);
    return 0;
}
