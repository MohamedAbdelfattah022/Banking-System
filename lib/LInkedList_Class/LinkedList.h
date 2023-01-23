#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "../Client_Class/Client.cpp"


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
    ClientLinkedList()  {head = NULL; tail = NULL; m_size=0;}
    
    // sort linked list // bonus function
    void sort();

    // insert new client
    bool insert(Client);

    LinkedListNode* isExist(string);
    
    void printAllElements();

    // function to return size of linked list
    int size() {return m_size;}

private:
LinkedListNode* head, *tail;
int m_size;

};


//array of ClientLinkedList
ClientLinkedList  arrayOfClients[10];

#endif