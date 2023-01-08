#ifndef INCLUDE
#define INCLUDE

//include classes we Implemeneted
#include "lib/Client_Class/Client.h"
#include "lib/LInkedList_Class/LinkedList.cpp" 
#include "lib/Transaction_Class/Transaction.h"
#include "lib/Functions/Functions.cpp"

// include most popular lib.
#include <bits/stdc++.h>

using namespace std;

#endif

int main()
{
Client a("Mohamed","m.com","01089","blala","KafrAbdo");
Client b("Ahmed","a.com","01089","blala","KafrAbdo");
Client c("Kamal","b.com","01089","blala","KafrAbdo");
Client d("Ashraf","c.com","01089","blala","KafrAbdo");
Client e("Morshdy","d.com","01089","blala","KafrAbdo");
Client f("Omar","e.com","01089","blala","KafrAbdo");
Client g("Michael","f.com","01089","blala","KafrAbdo");
Client h("Hany","g.com","01089","blala","KafrAbdo");
Client i("Qushta","e.com","01089","blala","KafrAbdo");

ClientLinkedList l1;
ClientLinkedList l2;
ClientLinkedList l3;
ClientLinkedList * p1 = &l1;
ClientLinkedList * p2 = &l2;
ClientLinkedList * p3 = &l3;
l1.insert(a);
l1.insert(b);
l2.insert(c);
l2.insert(d);
l2.insert(e);
l2.insert(f);
l3.insert(g);
l3.insert(h);
l3.insert(i);

ClientLinkedList * arr[3] = {p2 , p3, p1};
printSortedArrayOfLinkedLists(arr,0,3);
}