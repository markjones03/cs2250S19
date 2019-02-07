/*
 * =====================================================================================
 *
 *       Filename:  ave_grade_mc.c
 *
 *    Description:  learn while loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:36:50 AM
 *       Revision:  none
 *       Compiler:  gcc ave_grade_mc.c -o ave_grade_mc.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h> //true false variables
#include <stdlib.h> //rand() srand()
#include <time.h>   //time()
// Constants
#define MINCOUNT 2
#define MAXCOUNT 5
#define MINGRADE 0
#define MAXGRADE 100
#define MAXSTUDENTS 3

// Function Prototypes

// Main Function
int main()
{
    //task 1; calcualte the average of user values
    //task 2; validate user input for 0 to 100 only
    //task 3; ask user how many values they need to enter
    //task 4; if user enters a number below MINCOUNT set it MINCOUNT
    //        and if user enters a value greater than MAXCOUNT, set it to MAXCOUNT
    //task 5; support multiple student entries. calculate class average.
    //task 6; display student letter grade
    int grade_count = 0; //student_count = MAXSTUDENTS;
   float grade, avg;
    float total = 0;
   int hw_count = 0;
   int student_count;

   while( student_count < MAXSTUDENTS)      // loop over students

    printf("How many hw values do you want to enter?(between %d and %d) \n",MINCOUNT, MAXCOUNT);
    scanf("%d",&hw_count);

    if(student_count < MINCOUNT)
    {
        printf("%d is lower than %d. Setting your entry to %d\n",hw_count, MINCOUNT, MINCOUNT);
    }
    if (student_count > MAXCOUNT)
    {
        printf("%d is greater than %d. Setting your entery to %d\n",hw_count, MAXCOUNT, MAXCOUNT);
    }

    while(grade_count < MAXCOUNT)
    {
        printf("\nEnter %d homework grade(%d - %d): ", grade_count+1,MINGRADE,MAXGRADE);
        scanf("%f", &grade);
    if(grade< MINGRADE || grade > MAXGRADE)
    {
        printf("Invalid input please try again\n");
        continue;
    }
        total += grade;     //add up grades
      //update test condition: sentinel
       grade_count++;
        if (grade_count == hw_count)
        {
            break;      //reacht he student_count
        }
    }
    avg = total/hw_count;
    printf("Your average is [%6.2f]\n",avg);
    student_count++;
}  //loop over students
    printf("Bye\n");
    return 0;
}
// Function Definitions


