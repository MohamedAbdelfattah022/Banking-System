#ifndef CLIENT_H
#define CLIENT_H

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Transaction
{
private:
    // attributes
    int transactionID;
    string transactionName;
    string transactionDate;

public:

    Transaction();

    // Parameterized constructor implementation
    Transaction(int id);

    void setId(int id)          {transactionID = id;}
    void setName(string name)   {transactionName = name;}
    void setDate(string date)   {transactionDate = date;}

    // Getters implementation
    int getId()                 {return transactionID;}
    string getName()            {return transactionName;}
    string getDate()            {return transactionDate;}

    // Print function implementation
    void printTransactionInfo();
};


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
    Client();

    // Parameterized Constructor to initialize client (Name, Email, Phone, Address)
    Client(string name, string email, string phone, string password, string address);


    // Setter

    void setClientName(string name) { clientName = name; }
    void setClientEmail(string email) { clientEmail = email; }
    void setClientPhone(string phone) { clientPhone = phone; }
    void setClientAddress(string address) { clientAddress = address; }
    void setClientPassword(string password) { clientPassword = password; }
    void setClientID(int id) { clientID = id; }

    // setter of Transaction
    bool setTransaction(int id);

    // Getter

    string getClientName() { return clientName; }
    string getClientEmail() { return clientEmail; }
    string getClientPhone() { return clientPhone; }
    string getClientAddress() { return clientAddress; }
    string getClientPassword() { return clientPassword; }
    int getClientID() { return clientID; }

    // Getter for Client Transaction array
    void getClientTransaction();


    // Function that print client info
    void print_client_info();

    void viewTransaction();

    void deleteTransaction(int id);
};

#endif
