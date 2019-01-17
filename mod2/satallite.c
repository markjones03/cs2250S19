/*
 * =====================================================================================
 *
 *       Filename:  satellite.c
 *
 *    Description:  Calculate altitude of satallite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:47:17 AM
 *       Revision:  none
 *       Compiler:  gcc satellite.c -o satellite.out -lm
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
 const double GRAVITY = 6.67e11;    //Gravity, newtons constant (m^3 kg^-1 s^-2)
 const double E_MASS = 5.97e24;     //Earths mass in kg
 const double E_RADIUS = 6371e3;    //Earths Radius in meters
 const double PI = 3.1415941;       // PI

// Function Prototypes

// Main Function
int main()
{
    //1)enter period
    
    double time = 0;
    double height = 0;
    printf("Enter your time in seconds:");
    scanf("%lf", &time);

    // Height = ([Gravity  M T^2]/[4PI^2])^1/3 -R
    height = GRAVITY*E_MASS*pow(time,2);  //get the numerator
    height = height/(4*pow(PI,2));  //denominator
    height = pow(height,1/3);
    height = height - E_RADIUS;

    //display result ex: 86400 seconds = 35855 meters
    printf("Your satellite after %lf seconds is %lf meters from the earth\n",time, height);


    return 0;
}
// Function Definitions


