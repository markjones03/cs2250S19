/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  take month and day from user, and verify entires are valid
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:17:09 AM
 *       Revision:  none
 *       Compiler:  gcc month_day.c -o month_day.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define JANUARY 1
#define FEB 2
#define MARCH 3
#define APRIL 4
#define MAY 5
#define JUNE 6
#define JULY 7
#define AUGUST 8
#define SEPT 9
#define OCT 10
#define NOV 11
#define DEC 12
// Function Prototypes

// Main Function
int main()
{

     int month;
     int day;
    //1) capture usser info
    printf("Enter your month: 1 for January, 2 for Feb, ect: \n");
    scanf("%d", &month);

    printf("Enter your Day: \n");
    scanf("%d", &day);

    //2) use if to validate month
    if(month > 12 || month < 1)
    {
        printf("You have entered an invalid month\n");
        return 1;
    }
    // 3) use switch to validate day of the month
    switch(month)
    {
        //months with 31 days
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCT:
        case DEC:
            if(day > 31 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
        //months with 30 days
        case APRIL:
        case JUNE:
        case SEPT:
        case NOV:
            if( day> 30 || day <1)
            {
                printf("Invalid day\n");
            return 1;
            }
            break;
        //feburary
        case FEB:
            if(day > 28 || day <1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
    }
    printf("You entered valid month [%d] and day [%d]\n", month, day);

    return 0;
}
// Function Definitions


