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
int j;
int newNum;
int newRating;
int newJersey;
int replaceJersey;
char choice;

   // printf("MENU\n");
   // printf("u - Update Player rating\n");
   // printf("a - Output players above a rating\n");
   // printf("r - Replace player\n");
   // printf("o - Output roster\n");
   // printf("q - Quit\n");
   // printf("\nChoose an option:\n");
   // scanf("%c", &choice);
   //
        for(j = 1; j <= NUM_PLAYERS; ++j)
    {
            printf("Enter player %d's jersey number(0-99): \n",j);
             scanf("%d", &jerseyNum[j]);
        
   printf("Enter player %d's rating(1-9): ",j);
    scanf("%d", &playerRating[j]);
         
    }
     
    printf("\nROSTER\n");
    for(j=1; j<= NUM_PLAYERS; ++j)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d \n", j, jerseyNum[j],playerRating[j]);
    }
    

    printf("\nMENU\n");
    printf("u - Update Player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n");
    printf("\nChoose an option:\n");
    scanf("%s", &choice);

    if(choice == 'q')
    {
        printf("Good Bye\n");
        return 0;
    }

    else if(choice == 'u')
    {
        printf("Enter a jersey number: \n");
        scanf("%d", &newNum);

        if( newNum == jerseyNum[j])
        {
        
        printf("Enter a new rating for player: \n");
        scanf("%d", &newRating);

            playerRating[j] = newRating;
        }
        
    }
    else if(choice == 'r')
    {
        printf("Enter a jersey number:\n");
        scanf("%d", &replaceJersey);
        if(replaceJersey == jerseyNum[j])
            {
                printf("Enter a new jersey number:\n");
                scanf("%d", &newJersey);
                printf("Enter a rating for the new player:\n");
                scanf("%d", &newRating);

            }

    }

    else if(choice == 'o')
    {
        printf("ROSTER\n");
         for(j=1; j<= NUM_PLAYERS; ++j)
         {
        printf("Player %d -- Jersey number: %d, Rating: %d \n", j, jerseyNum[j],playerRating[j]);
         }
    
    printf("MENU\n");
    printf("u - Update Player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n");
    printf("\nChoose an option:\n");
    scanf("%s", &choice);
if(choice == 'q')
    {
        printf("Good Bye\n");
        return 0;
    }
    } //end else if choice o - output roster



    return 0;
}
// Function Definitions


