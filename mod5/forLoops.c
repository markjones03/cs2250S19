/*
 * =====================================================================================
 *
 *       Filename:  forLoops.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:41:34 AM
 *       Revision:  none
 *       Compiler:  gcc forLoops.c -o forLoops.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAX_NUMBER 5
// Function Prototypes

// Main Function
int main()
{
    int num = 0;
   for(int i = 0; i< MAX_NUMBER; i++)
{
    printf("Your i [%d] num++ [%d]\n", i, num++);
    printf(" your i [%d] ++num[%d]\n", i, ++num);
}
    printf("Bub bye\n");

    return 0;
}
// Function Definitions


