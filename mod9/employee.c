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
void CreateEmployee(Employee* emp);
void CalcPay(Employee* emp);
void DisplayEmp(const Employee* emp);
// Main Function
int main(int argc, char* argv[])
{
    Employee waldo(&waldo);
    
    CreateEmployee(&waldo);
    CalcPay(&waldo);
    DisplayEmp(&waldo);

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


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreateEmployee
 *  Description:  Create Employee record
 *  Param: employee record
 * =====================================================================================
 */
void CreateEmployee(Employee* emp)
{
    emp->idNum = 1;
    emp->payRate = 7.50;
    emp->hours = 20;
    emp->
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcPay
 *  Description:  Calculate the gross and net pay for employee
 *  Param:
 * =====================================================================================
 */
void CalcPay(Employee* emp)
{
    //emp in an adress(pointer), so if you need to pass it to function
    //that requires a pointer, then just use the name: emp
    //if you need to pass the VALUES, you need to derefernce the reference
    //so use the *emp to access the values at the address
    emp->netPay = CalcNet(*emp);
    emp->grossPay = CalcGross(emp);
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayEmp
 *  Description:  Display employee record
 * =====================================================================================
 */
void DisplayEmp(const Employee* emp)
{
    printf("Hi waldo, your net pay for %lf hours at %lf rate is %lf\n", emp->hours, emp->payRate, emp->netPay);

    printf("your gross pay for %lf hours at %lf rate is %lf\n", emp->hours, emp->payRate, emp->netPay);
    return;
}
