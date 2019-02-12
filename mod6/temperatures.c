/*
 * =====================================================================================
 *
 *       Filename:  temperatures.c
 *
 *    Description:  temperature analysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:02 AM
 *       Revision:  none
 *       Compiler:  gcc temperatures.c -o temperatures.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Constants
#define NUM 10
#define MIN 20  //min temp
#define MAX 45  //max temp

// Main Function
int main()
{
    double max_ogden[NUM];
    double min_ogden[NUM];
    srand(time(0));   //set random seed

    printf("Simulating the max and min Ogden temp for the next %d days\n", NUM);
//task: capture max and min temps from user

    for(int i=0; i< NUM; i++)
    {
//    printf("%d day max and min",i+1);
//    scanf("%lf %lf", &max_ogden[i], &min_ogden[i]);
    min_ogden[i] = ((rand() %MIN)+ (rand() %MAX))/2;
    max_ogden[i] = min_ogden[i] + (rand() % (MAX - MIN));
    }

    //task: display information
   for(int i=0; i< NUM; i++)
   {
   printf("%d max[%lf] min[%lf] temps in ogden\n",i+1, max_ogden[i],min_ogden[i]);
   }
   //task; calculate the average and min and max of the date range

   for(int i=0; i<NUM; i++)
   {
   }
   return 0;
}
// Function Definitions


