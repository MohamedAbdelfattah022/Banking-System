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
    // freopen("input2.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // int tc = 1;
    while (true)
    {
        welcomeText();   
        mainMenue();
        int option;   cout << ">> ";  cin >> option;
        
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
                        cout << "Enter transaction id ";
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
                        cout << "Enter transaction id ";
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
            printSortedArrayOfLinkedLists(arrayOfClients,0,10);
        }
        else if(option == 5)
        {
            // Bonus Part
        }
        else
        {
            break;
        }
    }

    return 0;
   
}