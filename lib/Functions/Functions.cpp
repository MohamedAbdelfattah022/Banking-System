#ifndef INCLUDE
#define INCLUDE

// include classes we Implemeneted
#include "lib/Client_Class/Client.h"
#include "lib/LInkedList_Class/LinkedList.h" 
#include "lib/Transaction_Class/Transaction.h"

// include most popular lib.
#include <bits/stdc++.h>

using namespace std;

#endif

//Function that print the welcome text every time a choice is made in the main menu
void welcomeText()
{
    cout << "=============================================================\n";
    cout << "++++++++++++++++Welcome to the banking system++++++++++++++++\n";
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
    welcomeText();
    cout << "+++++++++++++++++ Welcome back dear client ++++++++++++++++++\n";
    cout << "Please write your email\n>> ";
    string email;
    cin >>  email;
    /*if (search(email)){
        s

    }*/
    
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