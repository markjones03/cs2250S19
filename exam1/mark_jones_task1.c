/*
 * =====================================================================================
 *
 *       Filename:  mark_jones_task1.c
 *
 *    Description:  prompt user for how much money they want to  earn and dispaly spending choices
 *
 *        Version:  1.0
 *        Created:  02/21/2019 08:34:14 AM
 *       Revision:  none
 *       Compiler:  gcc mark_jones_task1.c -o mark_jones_task1.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define TV_MAX 5000 // max ammount of money to buy a tv
#define RTV_MAX 10000 //max ammount of money ot buy a RTV
#define CAR_MAX 50000 //max ammount of money to buy a car
#define HOUSE_MAX 100000 // max ammount of money to buy a small house

// Main Function
int main()
{
    float moneyEarn;

    printf("How much money would you like to earn?\n");
    scanf("%f", &moneyEarn);

    if(moneyEarn < TV_MAX)
    {
         printf("With this ammount of money: %6.2f you can buy a TV\n", moneyEarn);
    }

    else if(moneyEarn > TV_MAX && moneyEarn <= RTV_MAX)
    {
        printf("With this ammount of money: %6.2f you can buy a RTV\n", moneyEarn);
    }

    else if(moneyEarn > RTV_MAX && moneyEarn <= CAR_MAX)
    {
        printf("With this ammount of money: %6.2f you can buy a CAR\n", moneyEarn);
    }

    else if(moneyEarn > CAR_MAX && moneyEarn <= HOUSE_MAX)
    {
        printf("With this ammount of money: %6.2f you can buy a SMALL HOUSE\n", moneyEarn);
    }

    return 0;
}
// Function Definitions


