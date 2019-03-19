/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description: test the itemtopurhcase library
 *
 *        Version:  1.0
 *        Created:  03/18/2019 08:32:39 PM
 *       Revision:  none
 *       Compiler:  gcc main.c -o main.out -lm
            Usage: ./main.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "ItemToPurchase.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    char userStr[30];
    ItemToPurchase Item;
    
    printf("Item \n");
    printf("Enter the item name:\n");
    fgets(userStr, 30, stdin);

    printf("Enter the item price:\n");
    scanf("%d",&Item.itemPrice);

    printf("Enter the item Quantity:\n");
    scanf("%d",&Item.itemQuantity);


    ItemToPurchase Item2;
    Getitem(Item2);
   
    PrintitemCost(Item);
    PrintitemCost(Item2);

    return 0;
}
// Function Definitions


