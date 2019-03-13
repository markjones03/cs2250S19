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
// Constants

// Function Prototypes
void GetUserString();
char PrintMenu();
char FixCapitalization();
char ReplaceExclamation();
char ShortenSpace();
int GetNumOfNonWSCharacters();
int GetNumOfWords();


// Main Function
int main(int argc, char* argv[])
{
    GetUserString(char userStr);
    return 0;
}


// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetUserString
 *  Description:  gather user entered string
 *  return: none
 * =====================================================================================
 */
int GetUserString(const* char userStr)
{
    char userStr[200];
    fgets(getString, 200, stdin)

    printf("%s", getString);
    return;

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
int GetNumOfNonWSCharacters()
{

    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumOfwords
 *  Description:  counts words in user string
 *  return: number of words
 * =====================================================================================
 */
int GetNumOfWords()
{
return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  FixCapitilization
 *  Description:  change lowercase letters at beginning of sentences to uppercase ones
 * =====================================================================================
 */
char FixCapitalization()
{
return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ReplaceExclamation
 *  Description:  replaces each ! with a .
 * =====================================================================================
 */
char ReplaceExclamation()
{
return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShortenSpace
 *  Description:  reaplaces all sequences of 2 or more spaces with a single space
 * =====================================================================================
 */
char ShortenSpace()
{
return;
}
