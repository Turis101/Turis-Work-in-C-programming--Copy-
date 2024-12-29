/*
Calculate the monthly loan installment for a loan of UGX
20000 at an annual interest rate of 6% over a term of 5 years.
- Formula: installment = (loan_principal * (1 + (annual_rate / 12))^(12 * term)) / (12 * term)
*/

#include <stdio.h>
#include <stdlib.h>

const int loan_principal = 20000, term = 5;
const double annual_rate = 0.06;
double installment = (loan_principal * (1 + (annual_rate / 12))^(12 * term)) / (12 * term);

int main()
{
    printf("the monthly loan installment for a loan of UGX20000 at an annual interest rate of 6% over a term of 5 years is: UGX%.2lf\n", installment);
    return 0;
}
