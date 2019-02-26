/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:51:49 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes
void DisplayPosition(double x, double y);
void DisplayOrigPosition(double* x, double* y);
void UpdatePosition(double* x, double* y, double new_x, double new_y);
void ResetPosition(double* x, double* y);
// Main Function
int main(int argc, char* argv[])
{
    double x, y;

    if( argc != 3)
    {
    printf("Usage: %s  <X_POS> <Y_POS>\n", argv[0]);
    return 1;
}
    x = atof(argv[1]);  // convert the first input param to double
    y = atof(argv[2]);  // convert he second input param to double
    printf("Your current postion address is (%p, %p)(main)\n", &x, &y);
    DisplayOrigPosition(&x, &y);  // takes two addresses of type double
    DisplayPosition(&x, &y);
    UpdatePosition(&x, &y, 2, 4);
    DisplayPosition(x, y); // takes 2 address of type double
    ResetPosition(&x, &y);  // reset values to original
    DisplayPosition(&x, &y);

    return 0;
}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdatePosition
 *  Description:  update point position to a new position
 *  Param:new_ x => x coordinate address
 *  * param:new_ y=> y coordinate address
 *  returns: nothing
 
 * =====================================================================================
 */

void UpdatePosition(double* x, double* y, double new_x, double new_y)
{
    printf("*****Updating Position*****\n");
   *x = new_x;  //derefernece the pointer to update the value
   *y = new_y;
    printf("*****Done Updating Position*****\n");

    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayPosition
 *  Description:  Display current positon
 * =====================================================================================
 */
void DisplayPosition(double x, double y)

{
    printf("Your current postion is (%4.2lf, %4.2lf)\n", x, y);
    printf("Your current postion address is (%p, %p)\n",&x, &y);
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayOrigPosition
 *  Description:  Display current position position of actual values
 *  param: x => x coordinate address
 *  para: y => y coordinate address
 *  reaturns; nothing
 *  
 * ====================================================================================
 */
void DisplayOrigPosition(double* x, double* y)

{
    printf("Your current original postion is (%p, %p)\n", x, y);
    // to display the values of pointers/ address use the
    // dereference operator "*". this is only applicable to pointers
    
    printf("Your current postion is (%4.2lf, %4.2lf)\n", *x, *y);

    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ResetPosition
 *  Description:  reset coordinates to original coordinates (0, 0)
 *  Param: reset x and y coordinates
 *  returns nothing
 * =====================================================================================
 *
 */
void ResetPosition(double* x, double* y)

{
    printf("*****Reseting Position*****\n");
    *x = 0;
    *y = 0;
}
