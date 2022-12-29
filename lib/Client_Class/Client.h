#ifndef CLIENT_H
#define CLIENT_H

#include<bits/stdc++.h>
using namespace std;

class Client
{
public:



// setter
void setClientName(string name) { clientName = name;}
void setClientEmail(string email) {clientEmail = email;}


// getter
string getClientName(){return clientName;}

private:

string clientName, clientEmail;

};

#endif