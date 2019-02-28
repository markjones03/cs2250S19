/*
 * =====================================================================================
 *
 *       Filename:  strings_with_spaces.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:09 AM
 *       Revision:  none
 *       Compiler:  gcc strings_with_spaces.c -o strings_with_spaces.out -lm
            Usage: ./strings_with_spaces.out
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
const int INPUT_SIZE = 50;
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    char user_input[INPUT_SIZE];
    printf("enter a string with spaces: ");
    //get user input includeing spaces
    // where to, how many, where from
    fgets(user_input, INPUT_SIZE, stdin);
    //overwrite the '\n' capture by pressing ENTER in the keyboard
    user_input[strlen(user_input) - 1] = '\0';  //set last char as NULL char
    printf("You entered [%s]\n",user_input);
    // explore this string char by char
    for(int i = 0; i < strlen(user_input); i++)
    {
        printf("%d char is [%c]\n", i, user_input[i]);
    }
    
    
    return 0;
}
// Function Definitions


