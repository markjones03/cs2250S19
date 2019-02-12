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
#define NUM 5
#define MIN 20  //min temp
#define MAX 45  //max temp

// Main Function
int main()
{
    double max_ogden[NUM];
    double min_ogden[NUM];
    double ave =0, min_temp = 0, max_temp = 0;
    int min_day = 1, max_day = 1;
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
    //initialize the min temp and max temp

   min_temp = min_ogden[0];
   max_temp = max_ogden[0];
   for(int i=0; i<NUM; i++)
   {
    ave += min_ogden[i];     //adding elements
    ave += max_ogden[i];

    if(min_temp >  min_ogden[i])     //select min
    {
        min_temp = min_ogden[i];
        min_day = i+1;              //what day min occured
    }
    if(max_temp < max_ogden[i])      //select max
    {
        max_temp = max_ogden[i];
        max_day = i + 1;            //what day max occured
    }
   }
   ave = ave/(NUM*2);           //calc ave
   printf("Your average temperature = [%6.2lf]\n", ave);
   printf("Your min [%6.2lf] on day [%02d]\n", min_temp, min_day);
   printf("Your max [%6.2lf] on day [%02d]\n", max_temp, max_day);
   return 0;
}
// Function Definitions


