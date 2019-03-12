/*
 * =====================================================================================
 *
 *       Filename:  date_struct.c
 *
 *    Description:  Practice structure usage
 *
 *        Version:  1.0
 *        Created:  03/12/2019 08:40:22 AM
 *       Revision:  none
 *       Compiler:  gcc date_struct.c -o date_struct.out -lm
            Usage: ./date_struct.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

struct Birth
{
    int month;
    int day;
    int year;
};

// Main Function
int main(int argc, char* argv[])
{
    // Variable type is: struct Birth
    struct Birth waldo;
   
    waldo.month = 12;  //access structure members with a .
    waldo.day = 14;
    waldo.year = 1991;

    printf("Waldo's month is = %d\n", waldo.month);
    printf("Waldo's day is = %d\n", waldo.day);
    printf("Waldo's year is = %d\n", waldo.year % 100);

    //define and initialize a structure
    
    struct Birth weber = {11, 5, 2017};

    printf("weber month, day, year is = %d, %d, %d\n", weber.month, weber.day, weber.year);


    return 0;
}
// Function Definitions


