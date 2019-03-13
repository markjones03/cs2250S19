/*
 * =====================================================================================
 *
 *       Filename:  chapter6_warmup.c
 *
 *    Description:  text analyzer and modifier
 *
 *        Version:  1.0
 *        Created:  03/12/2019 06:38:43 PM
 *       Revision:  none
 *       Compiler:  gcc chapter6_warmup.c -o chapter6_warmup.out -lm
            Usage: ./chapter6_warmup.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Constants

// Function Prototypes
//void GetNumOfCharacters();
// Main Function
int main(int argc, char* argv[])
{

    char Str[100];
    int i, count = 0;

    printf("Enter a sentence or phrase:\n");
    fgets(Str, 100, stdin);
    printf("You entered: %s\n",Str);
    printf("Number of characters: %ld\n",strlen(Str));
    for(i = 0; i < strlen(Str); ++i)
    {
        if(Str[i] != ' ')
        {
            Str[count] = Str[i];
        }
    }
    Str[count] = '\0';

    printf("String with no whitespace: %s\n",Str);

    

    return 0;
}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumbOfCharacters
 *  Description:  prompt user to enter a string
 * =====================================================================================
 */
//void GetNumOfCharacters(const* char)
//{
//    char Str;
  //  printf("Number of characters: %ld\n",strlen(Str));
    //return;
//}
