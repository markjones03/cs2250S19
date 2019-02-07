/*
 * =====================================================================================
 *
 *       Filename:  guessNumber.c
 *
 *    Description:  guess number
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> //use for random rand() srand()
#include <time.h>   //time()

// Constants
#define MAX 5
#define LIMIT 100
// Function Prototypes

// Main Function
int main()
{
    int number, guess;
    srand(time(0));     //set the random SEED
    guess = rand() % LIMIT; //set random number between 0-9
    //int i; //before C89 you need to define i outside loop
    for(int i = 0; i< MAX; i++)
    {
        printf("Please guess a number between 0 and %d\n",LIMIT - 1);
       printf("You have %d opportunities left\n", MAX -i);
        scanf("%d", &number);

        if(number > guess)
        {
            printf("Go lower\n");
        }
        else if( number < guess)
        {
            printf("Go higher\n");
        }
        else
        {
            printf("Congrats, you got the correct number\n");
            return 0;
        }
    } //end of for loop
    printf("Sorry, you did not guess the [%d] number\nPlay again\n",guess);

    return 0;
}
// Function Definitions


