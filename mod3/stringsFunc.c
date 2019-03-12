/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  learn some string functions
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:27 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc.c -o stringsFunc.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>     //for string manipulatioin operations
// Constants

// Function Prototypes

// Main Function
int main()
{

    char first[50];
    char last[50];
    char fullName[100];

    printf("Enter Your First and Last  Name:\n");
    scanf("%s %s", first, last);
    printf("HI [%s] [%s]\n", first, last);
    strcpy(fullName, first);    //fullName = first
    strcat(fullName," ");   //fullName = fullName + " "
    strcat(fullName, last);     //fullName = fullName + last
    printf("Your full name is: [%s]\n",fullName);

    return 0;

}
// Function Definitions


