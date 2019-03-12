/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  Define an employee structure for record keeping
 *
 *        Version:  1.0
 *        Created:  03/12/2019 09:10:01 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c -o employee.out -lm
            Usage: ./employee.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants & Globals
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;
    double netPay;
    double taxRate;
    double grossPay;

} Employee;

#define TAXRATE1 0.10   //10%
#define TAXRATE2 0.25   //25%
#define TAXRATE3 0.75   //75%

// Function Prototypes
double CalcNet(Employee emp); //pass by value
double CalcGross(Employee* emp); //pass by reference
// Main Function
int main(int argc, char* argv[])
{
    
    Employee waldo = {1, 7.50, 20};
    waldo.netPay = CalcNet(waldo);  //pass by value
    printf("Hi waldo, your net pay for %lf hours at %lf rate is %lf\n", waldo.hours, waldo.payRate, waldo.netPay);
    
    //set tax rate
    waldo.taxRate = TAXRATE1;

    waldo.grossPay = CalcGross(&waldo);     //pass by reference
    printf("Hi waldo, your net pay for %lf hours at %lf rate is %lf\n", waldo.hours, waldo.payRate, waldo.grossPay);
    return 0;
}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcNet
 *  Description:  Calculate the net pay based on payRate and hours
 *  Param: Employee structure
 *  Return: Net Pay as double
 * =====================================================================================
 */
double CalcNet(Employee emp)
{

    return emp.payRate * emp.hours * (1 - emp.taxRate);
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcGross
 *  Description:  Calculate the gross pay based on payRate and hours
 *  Param: Employee Structure
 *  Return: Gross pay as a double
 * =====================================================================================
 */
double CalcGross(Employee* emp)
{
    //to access structure members when using a pointer (address)
    //use te dereference operator ->

    return emp->payRate * emp->hours;
}
