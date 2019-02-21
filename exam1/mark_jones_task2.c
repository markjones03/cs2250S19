/*
 * =====================================================================================
 *
 *       Filename:  mark_jones_task2.c
 *
 *    Description:  gather integers from usser, divide integers and raise one int to power of another
 *
 *        Version:  1.0
 *        Created:  02/21/2019 09:02:18 AM
 *       Revision:  none
 *       Compiler:  gcc mark_jones_task2.c -o mark_jones_task2.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Main Function
int main()
{

    float num1;
    float num2;
    float sum;
    float power;

    printf("Enter your first number:\n");
    scanf("%f", &num1);
    printf("Enter your second number:\n");
    scanf("%f", &num2);

    sum = num1/num2;
    power = pow(num1,num2);
    
    if(num2 == 0)
    {
        printf("Error -- division by zero!!\n");
        printf("%6.3f to the power of %6.3f is [%6.3f]\n", num1, num2, power);
    }
    else if(num2 != 0)
    {
    printf("%6.3f / %6.3f = %6.3f\n", num1, num2, sum);
    
    printf("%6.3f to the power of %6.3f is [%6.3f]\n", num1, num2, power);
    }
    
    return 0;
}
// Function Definitions


