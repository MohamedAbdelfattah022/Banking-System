#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "../Client_Class/Client.h"


class LinkedListNode
{
public:

    Client data;
    LinkedListNode * next;
    LinkedListNode(Client d)
    {
        data = d;
        next = NULL;    
    }
  
};

class ClientLinkedList
{
public:
    // Constructor to set head equal NULL
    ClientLinkedList()  {head = NULL;}

    // function to return size of linked list
    int size() {return m_size;}

private:
LinkedListNode* head;
int m_size;

};


//array containing the heads of clients' linked lists
LinkedListNode * arrayOfClients[10];

#endif