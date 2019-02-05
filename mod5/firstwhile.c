/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  learn while loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:36:50 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhile.c -o firstwhile.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAXCOUNT 4
// Function Prototypes

// Main Function
int main()
{
    //task 1; calcualte the average of user values
    int count = 0;
    float grade, avg;
    float total = 0;
    while(count < MAXCOUNT)
    {
        printf("\nEnter %d homework grade(0-100): ", count+1);
        scanf("%f", &grade);

        total += grade;     //add up grades
      //update test condition: sentinel
        count++;
    }
    avg = total/MAXCOUNT;
    printf("Your average is [%6.2f]\n",avg);
    printf("Bye\n");
    return 0;
}
// Function Definitions


