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
void ClientLinkedList::sort()
{

}