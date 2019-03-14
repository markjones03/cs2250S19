/*
 * =====================================================================================
 *
 *       Filename:  chapter6_main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/12/2019 08:46:51 PM
 *       Revision:  none
 *       Compiler:  gcc chapter6_main.c -o chapter6_main.out -lm
            Usage: ./chapter6_main.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Constants

// Function Prototypes
char PrintMenu();
void FixCapitalization(const char* NewUserStr);
char ReplaceExclamation(char* userStr);
//char ShortenSpace();
void GetNumOfNonWSCharacters(const char* userStr);
void GetNumOfWords(const char* userStr);


// Main Function
int main(int argc, char* argv[])
{
    char Str[500];
    char menuOp = '-';

    printf("Enter a sample text:\n");
    fgets(Str, 500, stdin);
    printf("You entered: %s\n",Str);

    PrintMenu();


    do {

       menuOp = PrintMenu();

        if (menuOp == 'c')
                {
                   GetNumOfNonWSCharacters(Str);
                }
        else if (menuOp == 'w')
                {
                   GetNumOfWords(Str);
                }
        else if (menuOp == 'f')
                {
                   FixCapitalization(Str);
                }
        else if (menuOp == 'r')
                {
                    ReplaceExclamation(Str);
                }
        else if (menuOp == 's')
                {
                   // shorten spaces
                }
        else if (menuOp == 'q')
                {
                    printf("Good Bye!\n");
                }
        else 
                {
                    printf("invalid entry. please try again!\n");
                }
        
    } while(menuOp != 'q');

    return 0;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintMenu
 *  Description:  display menu choices
 *  Return: character with choice
 * =====================================================================================
 */
char PrintMenu()
{
    char input;
    printf("\nMENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - quit\n");


    printf("\nChoose an option:\n");
    scanf("%c", &input);

    return input;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumOfwSCharacters
 *  Description:  number of characters exluding whitespace characers
 *  return: number of characters
 * =====================================================================================
 */

void GetNumOfNonWSCharacters(const char* userStr)
{
    printf("Number of non-whitespace characters: %ld\n",strlen(userStr));

    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumOfwords
 *  Description:  counts words in user string
 *  return: number of words
 * =====================================================================================
 */
void GetNumOfWords(const char* userStr)
{
    int count=0, i, len;
    char lastC;
    len = strlen(userStr);
        if (len > 0)
        {
            lastC = userStr[0];
        }
    for(i = 0; i <= len; i++)
    {
        if((userStr[i] == ' ' || userStr[i] == '\0') && lastC)
        {
            count++;
        }
        lastC = userStr[i];
    }

    printf("Number of words: %ld\n",strlen(userStr));

return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  FixCapitilization
 *  Description:  change lowercase letters at beginning of sentences to uppercase ones
 * =====================================================================================
 */
void FixCapitalization(const char* NewUserStr)
{
    int i;

    for( i = 0; i < strlen(NewUserStr); ++i)
    {
        if( NewUserStr[i] == '.')
        {
           // NewUserStr[i+1] == toupper(NewUserStr[i+1]);
             printf("Edited text: %d\n",toupper(NewUserStr[i+1]));
        }
    }
  //  printf("Edited text: %s\n",toupper NewUserStr[i+1]));

    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ReplaceExclamation
 *  Description:  replaces each ! with a .
 * =====================================================================================
 */
char ReplaceExclamation(char* userStr)
{
    int i;
   // char NewStr;

    for ( i = 0; i < strlen(userStr); ++i)
    {
        if (userStr[i] == '!')
        {
            userStr[i] = '.';
        }
    }
   // NewStr = &userStr;

return userStr;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShortenSpace
 *  Description:  reaplaces all sequences of 2 or more spaces with a single space
 * =====================================================================================
 */
void ShortenSpace()
{
return;
}
