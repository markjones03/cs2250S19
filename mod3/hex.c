/*
 * =====================================================================================
 *
 *       Filename:  hex.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/24/2019 10:00:45 AM
 *       Revision:  none
 *       Compiler:  gcc hex.c -o hex.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const unsigned char PIN1 = 0x01;
const unsigned char PIN2 = 0x02;
const unsigned char PIN3 = 0x04;
const unsigned char PIN4 = 0x08;
// Function Prototypes

// Main Function
int main()
{
    unsigned char hex = 0xF;

    printf("Enter one hex number: ");
    scanf("%hhx", &hex);
    printf("Hex [%02X] and dec[%d]\n", hex, hex);
    //1) ask user to enter a hex number, 1 byte max
    //2) tell me which bits/pins are ON
    if(hex &  PIN1)  //use BITWISE And "&"
    {
        printf("PIN1 is ON\n");
    }
    return 0;
}
// Function Definitions


