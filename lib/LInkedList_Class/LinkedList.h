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



#endif