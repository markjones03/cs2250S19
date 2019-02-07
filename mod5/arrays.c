/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  first look at arrays
 *
 *        Version:  1.0
 *        Created:  02/07/2019 10:04:57 AM
 *       Revision:  none
 *       Compiler:  gcc arrays.c -o arrays.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM 3

// Main Function
int main()
{
   // int i1, i2, i3
    //arrays use index notation to access members
    int grades[NUM];  //array of size NUM
    for(int i = 0; i < NUM; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &grades[i]);  // use address operator (&) for arrays
        //make sure to speciify the index position in  []
    }
    for(int i = 0; i < NUM; i++)
    {
        printf("%d number is [%d]\n",i+1, grades[i]);
    }
    return 0;
}
// Function Definitions


