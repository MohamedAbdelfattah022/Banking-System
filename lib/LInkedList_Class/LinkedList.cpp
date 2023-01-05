#include "LinkedList.h"


bool ClientLinkedList::isExist(string email)
{
    LinkedListNode* curr = head;

    while(curr)
    {
        if(curr->data.getClientEmail() == email)
            return 1;

        curr = curr->next;
    }
    return 0;
}

// Function to insert new client in linked list
bool ClientLinkedList::insert(Client newclient)
{

    if(head == NULL)
        head = new LinkedListNode(newclient);
    else
    {

        tail->next = new LinkedListNode(newclient);
        tail = tail->next;
    }

    return 1;
}