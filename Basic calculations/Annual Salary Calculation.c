/*
Convert an hourly wage of UGX 30 to an annual salary
assuming 40 working hours per week and 52 weeks in a year.
- Formula: annual_salary = hourly_wage * hours_per_week * weeks_per_year
*/

#include <stdio.h>
#include <stdlib.h>

const int hourly_wage = 30, hours_per_week = 40, weeks_per_year = 52;
int annual_salary = hourly_wage * hours_per_week * weeks_per_year;

int main()
{
    printf("The annual salary assuming 40 work hours and 52 weeks per year is: UGX%d\n", annual_salary);
    return 0;
}

