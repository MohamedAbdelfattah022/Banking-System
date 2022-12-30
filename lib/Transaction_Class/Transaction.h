#ifndef TRANSACTION_H
#define TRANSACTION_H
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
    // Default constructor imblementation
    Transaction();
    // Parameterized constructor imblementation
     Transaction(int id);
    // setters
    void setId(int id);
    void setName(string name);
    void setDate(string date);
    // getters
    int getId();
    string getName();
    string getDate();
    // print the transaction info
    void printTransactionInfo();
};

#endif