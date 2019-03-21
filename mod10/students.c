/*
 * =====================================================================================
 *
 *       Filename:  students.c
 *
 *    Description:  create a dynamically allocated structure
 *
 *        Version:  1.0
 *        Created:  03/21/2019 08:44:44 AM
 *       Revision:  none
 *       Compiler:  gcc students.c -o students.out -lm
            Usage: ./students.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants & Globals
#define MAX 50
typedef struct student
{
    char fName[50];
    int idNum;
}Student;

// Function Prototypes
void AddStudent(Student* thisStudent, char name[],int id);
// Main Function
int main(int argc, char* argv[])
{
    int id = 0;
    char name[MAX] = "";
    Student st;

    printf("Student %d\n", id + 1);
    id = id + 1;
    printf("Please enter your name: ");
    fgets(name, MAX, stdin);
    name[strlen(name) - 1] = '\0';  //eliminate EOL character
    // Save it to a student struct
    AddStudent(&st, name, id);

    printf("Hi [%s] student with id [%d]\n", st.fName, st.idNum);
    return 0;
}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddStudent
 *  Description:  
 * =====================================================================================
 */
void AddStudent(Student* thisStudent, char name[],int id)
{
    strcpy(thisStudent->fName,name);
    thisStudent->idNum = id;
    return;

}
