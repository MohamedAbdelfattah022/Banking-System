#include "Transaction.h"
#include <iostream>
using namespace std;
// Default constructor imblementation
transaction::transaction()
{
    transactionID = 0;
    transactionName = "";
    transactionDate = "";
}
 // Parameterized constructor imblementation
 transaction::transaction(int id)
 {
     transactionID = id;
     transactionName = "Withdraw";
     transactionDate = "14/Dec/2022";
 }
// setters imblementation
void transaction::setId(int id)
{
    transactionID = id;
}
void transaction::setName(string name)
{
    transactionName = name;
}
void transaction::setDate(string date)
{
    transactionDate = date;
}
// getters imblementation
int transaction::getId()
{
    return transactionID;
}
string transaction::getName()
{
    return transactionName;
}
string transaction::getDate()
{
    return transactionDate;
}
// print function imblementation
void transaction::printTransactionInfo()
{
    cout << "Transaction Id: " << getId() << endl;
    cout << "Transaction Name: " << getName() << endl;
    cout << "Transaction Date: " << getDate() << endl;
}