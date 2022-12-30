#include "Transaction.h"
#include <iostream>
using namespace std;
// Default constructor implementation
Transaction::Transaction()
{
    transactionID = 0;
    transactionName = "";
    transactionDate = "";
}
 // Parameterized constructor implementation
 Transaction::Transaction(int id)
 {
     transactionID = id;
     transactionName = "Withdraw";
     transactionDate = "14/Dec/2022";
 }
// Setters implementation
void Transaction::setId(int id)
{
    transactionID = id;
}
void Transaction::setName(string name)
{
    transactionName = name;
}
void Transaction::setDate(string date)
{
    transactionDate = date;
}
// Getters implementation
int Transaction::getId()
{
    return transactionID;
}
string Transaction::getName()
{
    return transactionName;
}
string Transaction::getDate()
{
    return transactionDate;
}
// Print function implementation
void Transaction::printTransactionInfo()
{
    cout << "Transaction Id: " << getId() << endl;
    cout << "Transaction Name: " << getName() << endl;
    cout << "Transaction Date: " << getDate() << endl;
}