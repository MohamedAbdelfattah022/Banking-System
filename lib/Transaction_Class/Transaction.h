#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
using namespace std;

class transaction
{
private:
    // attributes
    int transactionID;
    string transactionName;
    string transactionDate;

public:
    // Default constructor imblementation
    transaction();
    // Parameterized constructor imblementation
     transaction(int id);
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