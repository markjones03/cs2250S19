/*
 * =====================================================================================
 *
 *       Filename:  struct_test.c
 *
 *    Description:  Define a structure with pointers
 *
 *        Version:  1.0
 *        Created:  03/19/2019 08:52:49 AM
 *       Revision:  none
 *       Compiler:  gcc struct_test.c -o struct_test.out -lm
            Usage: ./struct_test.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants & Globals
typedef struct test
{
    int idNum;  //store  an inte
    double* ptPay; //* is address, address of int
} Test;
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    Test emp;
    double pay = 456.23;

    emp.idNum = 12345;
    emp.ptPay = &pay;


        printf("Employee number %d was paid $[%6.2lf]\n",emp.idNum, *emp.ptPay);

    return 0;
}
// Function Definitions


