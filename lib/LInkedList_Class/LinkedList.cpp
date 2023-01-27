#include "LinkedList.h"


LinkedListNode* ClientLinkedList::isExist(string email)
{
    LinkedListNode* curr = head;

    while(curr)
    {
        if(curr->data.getClientEmail() == email)
            return curr;

        curr = curr->next;
    }
    return 0;
}



// Function to insert new client in linked list
bool ClientLinkedList::insert(Client newclient)
{

    if(head == NULL)
    {  
        head = tail =  new LinkedListNode(newclient);
        m_size++;
    }
    else
    {

        tail->next = new LinkedListNode(newclient);
        tail = tail->next;
        m_size++;
    }
    
    return 1;
}
void ClientLinkedList::printAllElements()
{
    /*Fucntion to print all clients of the linked list using print_client_info()*/
    LinkedListNode * curr = head;
    int count = 1;
    while (curr)
    {
        cout << "Client " << count << "\n";
        curr->data.print_client_info();
        cout << "\n";
        curr = curr->next;
        count ++;
    }
}

/* sorts the linked list by changing next pointers (not data) */
void ClientLinkedList::mergeSort()
{
    
    LinkedListNode* a;
    LinkedListNode* b;

    // Base case -- length 0 or 1
    if((head == NULL) || (head->next == NULL))
        return;

    // Split head into 'a' and 'b' sublists
    frontBackSplit(&a, &b);

    // Recusively sort the sublists
    head = a;
    mergeSort();
    head = b;
    mergeSort();

    /* answer = merge the two sorted lists together */
    head = sortedMerge(a, b);
}


void ClientLinkedList::frontBackSplit(LinkedListNode** frontRef, LinkedListNode** backRef)
{
    LinkedListNode* fast;
    LinkedListNode* slow;

    slow = head;
    fast = head->next;

    // fast bymshy two nodes wal slow one node
    while (fast!=NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }

    // slow htkoun wa2fa abl al mid n2dr n3ml split into two halfes
    *frontRef = head;
    *backRef = slow->next;
    slow->next = NULL;
}

LinkedListNode* ClientLinkedList::sortedMerge(LinkedListNode* a, LinkedListNode* b)
{
    LinkedListNode* result = NULL;

    // base Cases
    if(a == NULL)
        return b;
    else if (b == NULL)
        return a;

    // amsk a aw b w recurse
    if(a->data.getClientID() <= b->data.getClientID())
    {
        result = a;
        result->next = sortedMerge(a->next, b);
    }
    else
    {
        result = b;
        result->next = sortedMerge(a, b->next);
    }

    return result;
}