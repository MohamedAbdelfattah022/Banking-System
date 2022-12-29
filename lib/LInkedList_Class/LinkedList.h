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
    ClientLinkedList()  {head = NULL; tail = NULL;}

    // function to add Node from tail
    void insert(Client el)
    {
        if(head == NULL)
            head = tail = new LinkedListNode(el);
        else
        {
            tail->next = new LinkedListNode(el);
            tail = tail->next;
        }
    }
 
    // function to return size of linked list
    int size() {return m_size;}

private:
LinkedListNode* head, *tail;
int m_size;

};



#endif