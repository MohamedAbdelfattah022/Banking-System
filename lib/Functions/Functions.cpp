#ifndef INCLUDE
#define INCLUDE

// include classes we Implemeneted
#include "../Transaction_Class/Transaction.h"
#include "../LInkedList_Class/LinkedList.cpp" 
#include "../Client_Class/Client.h"


// include most popular lib.
#include <bits/stdc++.h>

using namespace std;

#endif

//Function that print the welcome text every time a choice is made in the main menu
void welcomeText()
{
    cout << "=============================================================\n";
    cout << "++++++++++++++++ Welcome to the banking system ++++++++++++++++\n";
}


void mainMenue()
{
    // Function to print the system options
    cout << "CHOOSE ONE OF THE FOLLOWING OPTIONS\n";
    cout << "1. Login to your account" << endl;
    cout << "2. New client?" << endl;
    cout << "3. Forgot your password?" << endl;
    cout << "4. Sort clients by linked list size using the Quick Sort Algorithm" << endl;
    cout << "5. Sort each linked list by the id of the clients. (BOUNUS PART)" << endl;
    cout << "6. Exit the program." << endl;
}

void loginMenue()
{
    /* 
        Function to login by your account
        1.0 - take from user email
            1.1 - check if your account exist by email
            1...
        
        2.0 - if is exist Enter your password 
                2.1 - let's try again
                2.2 - if write password wrong ask if he/she forgot your password
                2.3 - function to return to the mainMenue
                2...
        
        3... -
    */


}

// hash Function
int hashFunction(string s)
{
    /*
        function to do hashing
        1- take string "email"
        2- summation of string
        and return it '%' size of array to put in it. 
    */
    int sum = 0;
    for(int i=0; i<(int)s.size(); i++)
    {
        sum += s[i];
    }

    return sum%10;
}

bool newClient()
{
    /* 
        Function to add newClient in system

        take from user name, email, phone, password, address

        push user email to hashfunction to return index 
        push user to arrayOfClient by using index
        check if user not exist in linkedlist by email
        then push in this index "linked list" by using insert function

    */

    string name, email, phone, address, password;
    Client newClient;
    welcomeText();
    cout << "++++++++++++++++ Create a new client account ++++++++++++++++";
    cout << "\nPlease write your name\n>>";       
    cin >> name;        newClient.setClientName(name);   
    cout << "\nPlease write your email\n>>";
    cin >> email;       newClient.setClientEmail(email);  
    cout << "\nPlease write your phone\n>>";
    cin >> phone;       newClient.setClientPhone(phone);  
    cout << "\nPlease write your password\n>>";
    cin >> password;    newClient.setClientPassword(password);  
    cout << "\nPlease write your address\n>>";
    cin >> address;     newClient.setClientAddress(address);  

    int indx = hashFunction(email);

    if(arrayOfClients[indx]->isExist(email))
        return 0;
    
    arrayOfClients[indx]->insert(newClient);
    return 1;

}