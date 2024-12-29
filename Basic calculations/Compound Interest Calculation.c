/*
Calculate the compound interest on a principal of UGX
8000, a 4% annual interest rate, over 2 years, compounded quarterly.

- Formula: compound_interest = principal * (1 + (rate / n))^(n * time) - principal

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int principal = 8000;
const int rate = 0.04;
const int time = 2;
const int n = 0.25;



int main()
{
    int compound_interest = principal * (1 + (rate / n))^(n * time) - principal;

    printf("The compound interest on a principal of UGX%d, annual interest rate of %d, over %dyears and compounded quarterly is:\n %d \n", principal, rate, time, compound_interest);

    return 0;
}
