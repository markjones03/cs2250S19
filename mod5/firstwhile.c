/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  learn while loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:36:50 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhile.c -o firstwhile.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MINCOUNT 2
#define MAXCOUNT 5
// Function Prototypes

// Main Function
int main()
{
    //task 1; calcualte the average of user values
    //task 2; validate user input for 0 to 100 only
    //task 3; ask user how many values they need to enter
    //task 4; if user enters a number below MINCOUNT set it MINCOUNT
    //        and if user enters a value greater than MAXCOUNT, set it to MAXCOUNT
    int count = 0;
    float grade, avg;
    float total = 0;
    int student_count = 0;

    printf("How many hw values do you want to enter?(between %d and %d) \n",MINCOUNT, MAXCOUNT);
    scanf("%d",&student_count);

    if(student_count < MINCOUNT)
    {
        printf("%d is lower than %d. Setting your entry to %d\n",student_count, MINCOUNT, MINCOUNT);
    }
    if (student_count > MAXCOUNT)
    {
        printf("%d is greater than %d. Setting your entery to %d\n",student_count, MAXCOUNT, MAXCOUNT);
    }

    while(count < MAXCOUNT)
    {
        printf("\nEnter %d homework grade(0-100): ", count+1);
        scanf("%f", &grade);
    if(grade<0 || grade > 100)
    {
        printf("Invalid input please try again\n");
        continue;
    }
        total += grade;     //add up grades
      //update test condition: sentinel
        count++;
        if (count == student_count)
        {
            break;      //reacht he student_count
        }
    }
    avg = total/MAXCOUNT;
    printf("Your average is [%6.2f]\n",avg);
    printf("Bye\n");
    return 0;
}
// Function Definitions


