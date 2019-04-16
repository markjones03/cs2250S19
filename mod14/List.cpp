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


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert_start
 *  Description:  Insert a node at the begining of the list. remapped your head pointer
 * =====================================================================================
 */
void List::insert_start(int value)
{
    //create the new node
    node *temp = new node;
    temp->data = value;
    temp->next =head;
    // Set the head pointer
    head = temp;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert_position
 *  Description:  insert at a given index position then, reconnect the list
 * =====================================================================================
 */
void List::insert_position(int pos, int value)
{
    node *prev = new node;
    node *temp = new node;
    node *cur = new node;
    
    cur = head; // point to first member
    for(int i = 1; i < pos; i++)
    {
        prev = cur;
        cur = cur->next;
    }
    // Connect prev to current to rest of the list
    temp->data = value;
    prev->next = temp;
    temp->next = cur;
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  delete_first
 *  Description:  delete first member then remapped the head
 * =====================================================================================
 */
void List::delete_first()
{
    node *temp = new node;
    temp = head; // save old head
    head = head->next;

    delete temp; //free this memory
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  delete_last
 *  Description:  delete last member of list, set new last member to NULL
 * =====================================================================================
 */
void List::delete_last()
{
    node *current = new node;
    node *prev = new node;

    current = head; // point at first
    //Loop until the end
    while(current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    // set last member
    tail = prev;
    prev->next = NULL;

    delete current; //free this memory
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  delete_position
 *  Description:  delete by a given position in the list
 * =====================================================================================
 */
void List::delete_position(int pos)
{
    node *prev = new node;
    node *cur = new node;
    cur = head; // point to first member
    //Loop over nodes
    for(int i = 1; i < pos; i++)
    {
        prev = cur;
        cur = cur->next;
    }
    // Set new addresses
    prev->next = cur->next;

    delete cur;
    // NOTE: TODO: make sure you are within your bounds
    return;
}
