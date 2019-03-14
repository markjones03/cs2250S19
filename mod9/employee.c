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
#define TOTAL 5
//Function Prototypes
double CalcNet(Employee emp); //pass by value
double CalcGross(Employee* emp); //pass by reference
void CreateEmployee(Employee* emp, int idNum);
void CalcPay(Employee* emp);
void DisplayEmp(const Employee* emp);
// Main Function
int main(int argc, char* argv[])
{
    Employee students[TOTAL];
    for(int i = 0; i < TOTAL; i++)
    {
        // Notes: An array name "students" is the same as the address of the
        // first number. If you need to pass one member, use the address and
        // member index number: &students[i]
        CreateEmployee(&students[i], i + 1);
        CalcPay(&students[i]);
        DisplayEmp(&students[i]);
    }
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
void CreateEmployee(Employee* emp, int idNum)
{
    emp->idNum = idNum;
    emp->payRate = 7.50 * emp->idNum;
    emp->hours = 20;
    emp->taxRate = TAXRATE1;
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
    printf("Hi [%d], your net pay for %lf hours at %lf rate is %lf\n",emp->idNum, emp->hours, emp->payRate, emp->netPay);

    printf("your gross pay for %lf hours at %lf rate is %lf\n", emp->hours, emp->payRate, emp->netPay);
    return;
}
