#ifndef INCLUDE
#define INCLUDE

// include classes we Implemeneted
#include "lib/Client_Class/Client.h"
#include "lib/LInkedList_Class/LinkedList.h" 
#include "lib/Transaction_Class/Transaction.h"

// include most popular lib.
#include <bits/stdc++.h>

using namespace std;

#endif

int main()
{
    Client c("Ashraf", "Ashraf@nu.edu.eg", "0100", "Alex", 21100);
    Transaction t1(10), t2(20), t3(30), t4(40), t5(50), t6(60), t7(70);

    c.setTransaction(t1);
    c.setTransaction(t2);
    c.setTransaction(t4);
    c.setTransaction(t5);
    c.setTransaction(t6);
    c.setTransaction(t7);

    c.print_client_info();

    cout << "\n\n";

    c.getClientTransaction();


}