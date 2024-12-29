/*
Write a program that calculates the net salary after a 10% tax
deduction for an employee with a gross salary of UGX 5000.

- Formula: net_salary = gross_salary - (tax_rate * gross_salary)

*/

#include <stdio.h>
#include <stdlib.h>

const float tax_rate = 0.1;
const int gross_salary = 5000;
double net_salary = gross_salary - (tax_rate * gross_salary);

int main()
{
    printf("The Net Salary after a 0.1 tax deduction for an employee is: UGX %.0lf\n", net_salary);

    return 0;
}
