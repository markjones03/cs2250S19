/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  calculate the quadrant based on the input
 *                  Quadrant I: angle between 0 and 90
 *                  Quadrant II: angle between 90 and 180
 *                  Quadrant III: angle between 180 and 270
 *                  Quadrant Iv: angle between 270 and 360
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:38:39 AM
 *       Revision:
 *       Compiler:  gcc angle.c -o angle.out -lm
 *
 *         Author:  Mark Jones (),} markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int angle;
    printf("Please enter an angle: ");
    scanf("%d", &angle);

    angle = angle % 360; //check for angles above 360
    if (angle < 0)
    {
        angle = fabs( 360 + angle);
    }

    if (angle > 0 && angle < 90)
    {
        printf("Your angle is in Quadrant I\n");
   }
    else if ( angle > 90 && angle < 180)
    {
        printf("Your angle is in Quadrant II\n");
    }
    else if ( angle > 180 && angle < 270)
    {
        printf("Your angle is in Quadrant III\n");
    }
    else if ( angle > 270 && angle < 360)
    {
        printf("Your angle is in Quadrant IV\n");
    }

    return 0;
}
// Function Definitions


