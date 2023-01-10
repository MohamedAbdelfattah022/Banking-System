#ifndef INCLUDE
#define INCLUDE

//include classes we Implemeneted
#include "lib/Client_Class/Client.h"
#include "lib/LInkedList_Class/LinkedList.cpp" 
#include "lib/Transaction_Class/Transaction.h"
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
        int option;   cout << ">> ";  cin >> option;
        
        if(option == 1)
        {
            loginMenue();
        }
        else if(option == 2)
        {   
            newClient();
        }
        else if(option == 3)
        {

        }
        else if(option == 4)
        {

        }
        else if(option == 5)
        {

        }
        else
        {
            break;
        }
    }

    return 0;
    
}