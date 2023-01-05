#ifndef CLIENT_H
#define CLIENT_H

#include <bits/stdc++.h>
#include "../Transaction_Class/Transaction.cpp"

using namespace std;

class Client
{
private:

    string clientName, clientEmail, clientPhone, clientAddress, clientPassword;
    int clientID;

    int transactionCount;
    // <Transaction array>
    Transaction clientTransaction[5];

public:

    // Empty Constructor to initialize All with zeros and empty strings
    Client()
    {
        // initialization all string with empty string
        clientName = clientEmail = clientPhone = clientAddress = clientPassword =  "";

        // initialization transactionCount = zero
        transactionCount = 0;

        // initialization clientID to by random fucntion
        clientID = rand();

        // initialization Array of clientTransaction = zeros
        for(int i=0; i<5; i++)
            clientTransaction[i] = {0};
    }

    // Parameterized Constructor to initialize client (Name, Email, Phone, Address)
    Client(string name, string email, string phone,string password, string address)
    {
        clientName = name;
        clientEmail = email;
        clientPhone = phone;
        clientAddress = address;
        clientPassword = password;
        clientID = rand();
        transactionCount = 0;
    }


    // Setter

    void setClientName(string name) { clientName = name;}
    void setClientEmail(string email) {clientEmail = email;}
    void setClientPhone(string phone) {clientPhone = phone;}
    void setClientAddress(string address) {clientAddress = address;}
    void setClientPassword(string password) {clientPassword = password;}
    void setClientID(int id) {clientID = id;}
    
    // setter of Transaction
    bool setTransaction(Transaction trans)
    {
        if(transactionCount == 5)
        {
            cout << "No more transactions are allowed for this client\n";
            return 0;
        }
        else
        {
            // push transaction in clientTransaction array and increment transactionCount by 1
            clientTransaction[transactionCount++] = trans;
        }
        return 1;
    }


    // Getter

    string getClientName(){return clientName;}
    string getClientEmail() {return clientEmail;}
    string getClientPhone() {return clientPhone;}
    string getClientAddress() {return clientAddress;}
    string getClientPassword() {return clientPassword;}
    int getClientID() {return clientID;}

    // Getter for Client Transaction array
    void getClientTransaction()
    {
        // funciton to print all client Transactions
        for(int i=0; i< transactionCount; i++)
        {
            clientTransaction[i].printTransactionInfo();
            cout << "\n";
        }
    }

    // Function that print client info

    void print_client_info()
    {
        cout<<"Name: "<< clientName<<endl;
        cout<<"ID: "<< clientID<<endl;
        cout<<"Email: " << clientEmail<<endl;
        cout<<"Phone: " << clientPhone<<endl;
        cout<<"Address: " << clientAddress<<endl;
    }

};

#endif
