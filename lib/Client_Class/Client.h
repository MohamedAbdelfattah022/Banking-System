#ifndef CLIENT_H
#define CLIENT_H

#include <bits/stdc++.h>
using namespace std;

class Client
{

private:

string clientName, clientEmail, clientPhone, ClientAddress, clientPassword;
int clientID;

// <Transaction array>

public:

// constructor

Client(){
clientName=""; 
clientEmail=""; 
clientPhone=""; 
ClientAddress=""; 
clientPassword="";
clientID=0;
// Transaction
}

Client(string n, string e, string p, string a)
{
clientName = n;
clientEmail = e;
clientPhone = p;
ClientAddress = a;
}




// Setter

void setClientName(string name) { clientName = name;}
void setClientEmail(string email) {clientEmail = email;}
void setclientPhone(string phone) {clientPhone = phone;}
void setclientAddress(string address) {ClientAddress = address;}
void setclientPassword(string password) {clientPassword = password;}
void setclientID(int id) {clientID = id;}



// Getter

string getClientName(){return clientName;}
string getClientEmail() {return clientEmail;}
string getclientPhone() {return clientPhone;}
string getclientAddress() {return ClientAddress;}
string getclientPassword() {return clientPassword;}
int getclientID() {return clientID;}


// Function that print client info

void print_client_info(){

cout<<"Name: "<<clientName<<endl;
cout<<"ID: "<<clientID<<endl;
cout<<"Email: "<<clientEmail<<endl;
cout<<"Phone: "<<clientPhone<<endl;
cout<<"Address: "<<ClientAddress<<endl;

}

};

#endif
