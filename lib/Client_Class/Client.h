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
    Transaction()
    {
        transactionID = 0;
        transactionName = "";
        transactionDate = "";
    }
    // Parameterized constructor implementation
    Transaction(int id)
    {
        transactionID = id;
        transactionName = "Withdraw";
        transactionDate = "14/Dec/2022";
    }
    void setId(int id)
    {
        transactionID = id;
    }
    void setName(string name)
    {
        transactionName = name;
    }
    void setDate(string date)
    {
        transactionDate = date;
    }
    // Getters implementation
    int getId()
    {
        return transactionID;
    }
    string getName()
    {
        return transactionName;
    }
    string getDate()
    {
        return transactionDate;
    }
    // Print function implementation
    void printTransactionInfo()
    {
        cout << "Transaction Id: " << getId() << endl;
        cout << "Transaction Name: " << getName() << endl;
        cout << "Transaction Date: " << getDate() << endl << endl;
    }
};

void transactionsMenu()
{
    cout << "++++++++++++++++ Welcome to the transaction system ++++++++++++++++\n"
         << "CHOOSE ONE OF THE FOLLOWING OPTIONS:\n"
         << "1. Create a new transaction\n"
         << "2. View your transactions \n"
         << "3. Delete a transaction by its ID\n"
         << ">> " << endl;
}

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
        clientName = clientEmail = clientPhone = clientAddress = clientPassword = "";

        // initialization transactionCount = zero
        transactionCount = 0;

        // initialization clientID to by random fucntion
        clientID = rand();

        // initialization Array of clientTransaction = zeros
        for (int i = 0; i < 5; i++)
            clientTransaction[i] = {0};
    }

    // Parameterized Constructor to initialize client (Name, Email, Phone, Address)
    Client(string name, string email, string phone, string password, string address)
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

    void setClientName(string name) { clientName = name; }
    void setClientEmail(string email) { clientEmail = email; }
    void setClientPhone(string phone) { clientPhone = phone; }
    void setClientAddress(string address) { clientAddress = address; }
    void setClientPassword(string password) { clientPassword = password; }
    void setClientID(int id) { clientID = id; }

    // setter of Transaction
    bool setTransaction(int id)
    {
        if (transactionCount == 5)
        {
            cout << "No more transactions are allowed for this client\n";
            return 0;
        }
        else
        {
            // push transaction in clientTransaction array and increment transactionCount by 1
            Transaction newTransaction(id);
            clientTransaction[transactionCount++] = newTransaction;
        }
        return 1;
    }

    // Getter

    string getClientName() { return clientName; }
    string getClientEmail() { return clientEmail; }
    string getClientPhone() { return clientPhone; }
    string getClientAddress() { return clientAddress; }
    string getClientPassword() { return clientPassword; }
    int getClientID() { return clientID; }
    // Getter for Client Transaction array
    void getClientTransaction()
    {
        // funciton to print all client Transactions
        for (int i = 0; i < transactionCount; i++)
        {
            clientTransaction[i].printTransactionInfo();
            cout << "\n";
        }
    }

    // Function that print client info

    void print_client_info()
    {
        cout << "Name: " << clientName << endl;
        cout << "ID: " << clientID << endl;
        cout << "Email: " << clientEmail << endl;
        cout << "Phone: " << clientPhone << endl;
        cout << "Address: " << clientAddress << endl;
    }

    void viewTransaction()
    {

        for (int i = 0; i < 5; i++)
        {
            if(clientTransaction[i].getId()==0|| clientTransaction[i].getId() == INT_MIN)
                continue;
            else
                clientTransaction[i].printTransactionInfo();
        }
    }

    void deleteTransaction(int id)
    {
        for (int i = 0; i < 5; i++)
        {
            if(transactionCount==0){
                cout<<"Transaction does not exist\n";
                break;
            }
            if (id == clientTransaction[i].getId())
            {
                clientTransaction[i].setId(INT_MIN);
                transactionCount--;
                break;
            }
        }
    }
};

#endif
