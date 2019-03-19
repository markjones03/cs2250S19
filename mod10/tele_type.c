/*
 * =====================================================================================
 *
 *       Filename:  tele_type.c
 *
 *    Description:  first look into LinkedList
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:03:14 AM
 *       Revision:  none
 *       Compiler:  gcc tele_type.c -o tele_type.out -lm
            Usage: ./tele_type.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants & Globals
#define MAXNAME 30
#define MAXPHONE 15

struct TeleType
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
    struct TeleType* nextaddr;  // "should" be the last member of structure
};
typedef struct TeleType Tele;
// Function Prototypes
void displayTele(Tele* content);

// Main Function
int main(int argc, char* argv[])
{
    Tele t1 = {"Acme, John", "(801) 891-4784"};
    Tele t2 = {"Sharp, Bill", "(801) 654-6669"};
    Tele t3 = {"Bilkins, Clark", "(801) 923-1667"};
    Tele* first;    // pointer(address) to structure
    
    first = &t1;    // get the address of a Tele structure
    t1.nextaddr = &t2;  // set the address of the next structure
    t2.nextaddr = &t3;  // set the address of the next structure
    t3.nextaddr = NULL;  // set the address of NULL, last member
// display link list info
   displayTele(first);
    return 0;
}
// Function Definitions


void displayTele(Tele* content)
{
    while(content != NULL)
    {
        printf(" %-30s %-20s\n",content->name, content->phoneNum);  // (*first).name, (*first).phoneNum same thing
        content = content->nextaddr;
    }
    return;
}
