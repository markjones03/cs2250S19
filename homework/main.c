/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  peoples weights
 *
 *        Version:  1.0
 *        Created:  02/19/2019 05:40:42 PM
 *       Revision:  none
 *       Compiler:  gcc main.c -Wall - o a.out -lm
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM_PPL 5
// Function Prototypes

// Main Function
int main()
{
double  weight[NUM_PPL-1];
double  Sum;
double Ave;
double Max;
int i;

    printf("Enter weight 1: \n");
    scanf("%lf", &weight[0]);

    printf("Enter weight 2: \n");
    scanf("%lf", &weight[1]);
    
    printf("Enter weight 3: \n");
    scanf("%lf", &weight[2]);
    
    printf("Enter weight 4: \n");
    scanf("%lf", &weight[3]);
    
    printf("Enter weight 5: \n");
    scanf("%lf", &weight[4]);

    printf("You entered: %lf %lf %lf %lf %lf\n",weight[0], weight[1], weight[2], weight[3], weight[4]);
    
    Sum = weight[0] + weight[1] + weight[2] + weight [3] + weight[4];
    printf("Total weight: %lf\n", Sum);

    Ave = Sum/ NUM_PPL;
    printf("Average weight: %lf\n", Ave);
    
    Max = 0;

    for(i=0; i< NUM_PPL; ++i)
    {
        if(Max < weight[i])
        {
            Max = weight[i];
        }

    }
    printf("Max weight: %lf\n", Max);

    
    return 0;

}
// Function Definitions


