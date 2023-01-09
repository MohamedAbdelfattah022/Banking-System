#include <iostream>
#include "Client.h"
using namespace std;

int main(){
    Transaction t;
    Client c;
    transactionsMenu();
    c.setTransaction(1);
    c.setTransaction(2);
    c.setTransaction(3);
    c.setTransaction(4);
    c.setTransaction(5);
    c.viewTransaction();
    
    // c.deleteTransaction(1);
    // c.deleteTransaction(2);
    // c.deleteTransaction(3);
    c.deleteTransaction(4);
    c.deleteTransaction(5);

    cout<<"\nAfter deletion\n\n";
    c.viewTransaction();
    return 0;
}