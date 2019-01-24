/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  determine if the input value is even or odd
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:36:33 AM
 *       Revision:  none
 *       Compiler:  gcc even_odd.c -o even_odd.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int num1;
    int num2;

    printf("Enter and integer:");
    scanf("%d %d", &num1, &num2);
    // test value for even or odd
    if((num1 + num2) % 2 != 0)
    {
        
        printf("%d and  %d are even and odd \n", num1, num2);
    }
    else
    {
        printf("%d and %d are not even and odd numbers\n", num1, num2);
    }
    printf("Audios amigo\n");

    return 0;
}
// Function Definitions


