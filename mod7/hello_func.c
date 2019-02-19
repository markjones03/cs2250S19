/*
 * =====================================================================================
 *
 *       Filename:  hello_func.c
 *
 *    Description:  Practice functions
 *
 *        Version:  1.0
 *        Created:  02/19/2019 08:48:25 AM
 *       Revision:  none
 *       Compiler:  gcc hello_func.c -o hello.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Hello_World();
void Hello_Number(int num);
int Get_Square(int num);
int Get_Number();
int Get_Sum(int num1, int num2);
double Get_BMI(double weight, double height);
// Main Function
int main(int argc, char* argv[])
{
    int i1 = 23;
    int num1, num2, sum;

    Hello_World();

    Hello_Number(i1);

    i1 = Get_Square(i1);
    Hello_Number(i1);

    i1 = Get_Number();
    Hello_Number(i1);

    num1 = Get_Number();
    Hello_Number(num1);
    num2 = Get_Number();
    Hello_Number(num2);
    sum =  Get_Sum(num1, num2);
    Hello_Number(sum);

    double bmi = Get_BMI(65.8, 1.89);
    printf("your BMI is [%lf]\n", bmi);

    return 0;
}
// Function Definitions
// to reccomend your functions type: 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_world
 *  Description:  Print Hello world message
 * =====================================================================================
 */

void Hello_World()
{
    printf("Hello World\n");
    return;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello_Number
 *  Description:  prints value of number
 *         Param1: num => integer value
 *         Return: nothing
 * =====================================================================================
 */

void Hello_Number(int num)
{
    printf("Hello %d number\n", num);
    return;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Square
 *  Description:  get the square of int number
 *  Param1: num => integer value
 *  return: thesquare of num
 * =====================================================================================
 */

int Get_Square(int num)
{
    int square;
    // algorithm
    square = num * num;

     return square;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Number
 *  Description:  ask user to enter an interger and use it
 *  Param: none
 *  Return: User int input
 * =====================================================================================
 */

int Get_Number()
{
    int input;
    //Algorithm

    printf("Enter your number: ");
    scanf("%d",&input);


    return input;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Sum
 *  Description:  return the sum of two integers
 *  param1: first integer
 *  Param2: second integer
 *  return: first + second
 * =====================================================================================
 */

int Get_Sum(int num1, int num2)
{
    return num1 + num2;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_BMI
 *  Description:  calculate bmi, weight(kg)/height^2(m)
 *  param1: get weight in kg
 *  param2: get height in m
 *  return: bmi
 * =====================================================================================
 */

double Get_BMI(double weight, double height)
{
    double bmi;
    //algorithm
    bmi = weight/(height * height);
    return bmi;
}

