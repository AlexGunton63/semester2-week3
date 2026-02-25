
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Alex Gunton
 * ID: kbzz0907
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    int salary = 36250; // set variables for worksheet
    float NI = 0.08;
    float TR = 0.15;
    // calculate the deductions and final take-home salary
    float NI_cost = salary * NI; // national insurance deduction
    float NI_salary = salary - NI_cost;
    float tax_cost = NI_salary *TR; // tax deduction
    float take_home_salary = NI_salary - tax_cost;  // final salary
    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    printf("Salary £",salary);
    //printf("NI contribution £...",var_name);
    printf("NI contribution £",NI_cost);
    //printf("Tax contribution £...",var_name);
    printf("Tax contribution £",tax_cost);
    //printf("Take home salary £...",var_name);
    printf("Take home salary £",take_home_salary);

    return 0;
 }