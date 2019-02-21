/*
 * =====================================================================================
 *
 *       Filename:  mark_jones_extracredit.c
 *
 *    Description:  help mr.bugs fix his program
 *
 *        Version:  1.0
 *        Created:  02/21/2019 09:26:56 AM
 *       Revision:  none
 *       Compiler:  gcc mark_jones_extracredit.c -o mark_jones_extracredit.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
// Constants
void jamon(int num);
int Get_Num();
// Main Function
int main(int argc, char* argv[])
{
    int num;

    
    num = Get_Num();
    jamon(num);

    return 0;
}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  jamon
 *  Description:  count
 *  Param: read num and count up to num
 *  return: print statement num number of times
 * =====================================================================================
 */
void jamon(int num)
{
    int count;

    for(count =1 ; count <= num; ++count)
    {
        printf("O jamon mio!\n");
    }
    return;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Num
 *  Description:  gather usser num
 *  Param: none
 *  Return: user int input
 * =====================================================================================
 */

int Get_Num()

{
    int input;

    printf("Enter your number: ");
    scanf("%d", &input);

    return input;
}
