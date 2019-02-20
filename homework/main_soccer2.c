/*
 * =====================================================================================
 *
 *       Filename:  main_soccer2.c
 *
 *    Description:  Soccer team roster
 *
 *        Version:  1.0
 *        Created:  02/19/2019 07:00:49 PM
 *       Revision:  none
 *       Compiler:  gcc main_soccer2.c -Wall -o a_soccer2.out -lm
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM_PLAYERS 5
// Function Prototypes

// Main Function
int main()
{
int jerseyNum[5];
int playerRating[5];
//int i;
int j;

//for(i = 0; i < 1 ; ++i)

        for(j = 1; j <= NUM_PLAYERS; ++j)
    {
            printf("Enter player %d's jersey number(0-99): \n",j);
             scanf("%d", &jerseyNum[j]);
        
   printf("Enter player %d's rating(1-9): ",j);
    scanf("%d", &playerRating[j]);
         
    }
     
    printf("ROSTER\n");
    for(j=1; j<= NUM_PLAYERS; ++j)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d \n", j, jerseyNum[j],playerRating[j]);
    }

    


    return 0;
}
// Function Definitions


