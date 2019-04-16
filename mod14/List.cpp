#include<iostream>
#include "List.h"
using namespace std;

List::List()
{
    head=NULL;
    tail=NULL;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  createnode
 *  Description:   create a new nde
 * =====================================================================================
 */
void List::createnode(int value)
{   
    //create a new node from the HEAP
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    // Connect the nodes
    if(head == NULL) // first node
    {
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else  // second or more node
    {
        tail->next = temp;
        tail = temp;
    }
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  display
 *  Description:  display linked list
 * =====================================================================================
 */
void List::display()
{
    node *temp =new node;
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "\t";
        temp =temp->next; // point to next member
    }
    return;
}


void List::insert_start(int value)
{
    return;
}


void List::insert_position(int pos, int value)
{
    return;
}


void List::delete_first()
{
    return;
}


void List::delete_last()
{
    return;
}


void List::delete_position(int pos)
{
    return;
}
