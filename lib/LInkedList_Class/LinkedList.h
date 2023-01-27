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
private:
    // sort linked list // bonus function
    LinkedListNode* sortedMerge(LinkedListNode*, LinkedListNode*);
    void frontBackSplit(LinkedListNode**, LinkedListNode**);
public:
    // Constructor to set head equal NULL
    ClientLinkedList()  {head = NULL; tail = NULL; m_size=0;}
    
    // sort linked list // bonus function
    void mergeSort();

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
ClientLinkedList  sortedArrayOfClients[10];


#endif