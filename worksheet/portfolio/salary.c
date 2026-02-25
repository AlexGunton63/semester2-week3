
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Alex Gunton
 * ID: kbzz0907
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 36250; // set variables for worksheet
    float NI = 0.08;
    float TR = 0.15;
    // calculate the deductions and final take-home salary
    float NI_cost = salary * NI; // national insurance deduction
    float NI_salary = salary - NI_cost;

    //float tax_cost = NI_salary *TR; // tax deduction
    //float take_home_salary = NI_salary - tax_cost;  // final salary

    float taxable_salary = NI_salary - 12500;
    float tax_cost = taxable_salary * TR;
    float take_home_salary = NI_salary - tax_cost;  // final salary

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    printf("Salary £%.2f\n",salary);
    //printf("NI contribution £...",var_name);
    printf("NI contribution £%.2f\n",NI_cost);
    //printf("Tax contribution £...",var_name);
    printf("Tax contribution £%.2f\n",tax_cost);
    //printf("Take home salary £...",var_name);
    printf("Take home salary £%.2f\n",take_home_salary);

    return 0;
 }