#ifndef INCLUDE
#define INCLUDE

//include classes we Implemeneted
#include "lib/Client_Class/Client.h"
#include "lib/LInkedList_Class/LinkedList.cpp" 
#include "lib/Functions/Functions.cpp"

// include most popular lib.
#include <bits/stdc++.h>

using namespace std;

#endif

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // int tc = 1;
    while (true)
    {
        welcomeText();   
        mainMenue();
        int option; fflush(stdin);   cout << ">> ";  cin >> option;
        
        if(option == 1)
        {
            LinkedListNode* client = loginMenue();
            while(client)
            {

                clientHome();
                int choice;
                cin >> choice;

                if(choice == 1)
                {
                    transactionsMenu();
                    int akhtar;
                    cin >> akhtar;

                    if(akhtar == 1)
                    {
                        int id;
                        cout << "Enter transaction ID\n>> ";
                        cin >> id;
                        client->data.setTransaction(id);
                    }
                    else if(akhtar == 2)
                    {
                        client->data.viewTransaction();
                    }
                    else if(akhtar == 3)
                    {
                        int id;
                        cout << "Enter transaction ID\n>> ";
                        cin >> id;
                        client->data.deleteTransaction(id);
                    }
                    else
                    {
                        cout << "Invalid choice" << "\n";
                    }            

                }
                else if(choice == 2)
                {
                    client->data.print_client_info();
                }
                else
                {
                    break;
                }
            }
            
        }
        else if(option == 2)
        {   
            newClient();
        }
        else if(option == 3)
        {
            // forget password
            string em;
            cout << "Enter you mail \n>> ";
            cin >> em;
            forgetPassword(em);
        }
        else if(option == 4)
        {
            welcomeText();
            sortArrayOfLinkedLists(arrayOfClients, 0, 10);
            cout << "After sorting the array of linked lists, we have the following info\n";
            for (int i = 0; i < 10; ++i)
            {
                cout << "Index #" << i + 1 << ": Linked list of " << arrayOfClients[i].size() << " Clients\n";
                cout << "Clients of index #" << i + 1 << ":\n\n";
                arrayOfClients[i].printAllElements();
            }
        }
        else if(option == 5)
        {
            // Bonus Part
        }
        else if(option ==6)
        {
            break;
        }
    }
    
    return 0;
   
}