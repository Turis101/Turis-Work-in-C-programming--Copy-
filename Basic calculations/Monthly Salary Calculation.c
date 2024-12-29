/*
Write a program to calculate the monthly salary of an employee
with an hourly wage of UGX 2500, working 16000 hours per month.
- Formula: monthly_salary = hourly_wage * hours_worked

*/

#include <stdio.h>
#include <stdlib.h>

const int hourly_wage = 2500;
const int hours_worked = 16000;
int monthly_salary = hourly_wage * hours_worked;

int main()
{
    printf("The Monthly Salary of an employee is: UGX %d\n", monthly_salary);

    return 0;
}
