#ifndef INCLUDE
#define INCLUDE

// include classes we Implemeneted
#include "../LInkedList_Class/LinkedList.cpp"
#include "../Client_Class/Client.cpp"

// include most popular lib.
#include <bits/stdc++.h>

using namespace std;

#endif

// Function that print the welcome text every time a choice is made in the main menu
void welcomeText()
{
    cout << "\n===============================================================\n";
    cout << "++++++++++++++++ Welcome to the banking system ++++++++++++++++\n\n";
}

void mainMenue()
{
    // Function to print the system options
    cout << "CHOOSE ONE OF THE FOLLOWING OPTIONS\n";
    cout << "1. Login to your account" << endl;
    cout << "2. New client?" << endl;
    cout << "3. Forgot your password?" << endl;
    cout << "4. Sort clients by linked list size using the Quick Sort Algorithm" << endl;
    cout << "5. Sort each linked list by the id of the clients. (BOUNUS PART)" << endl;
    cout << "6. Exit the program." << endl;
    cout << "===============================================================\n";
}


// hash Function
int hashFunction(string s)
{
    /*
        function to do hashing
        1- take string "email"
        2- summation of string
        and return it with '%' size of array to put in it.
    */
    int sum = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        sum += s[i];
    }

    return sum % 10;
}

void forgetPassword(string email)
{
    welcomeText();
    cout<<"++++++++++++++++++++ Forgetten Password ++++++++++++++++++++\n\n";
    int indx = hashFunction(email);
    LinkedListNode* curr = arrayOfClients[indx].isExist(email);
    if(curr)
    {
        cout<<"Related password is " << curr->data.getClientPassword() << "\n";
    }
    else
    {
        cout << "Email does not exist" << "\n";
    }
}

LinkedListNode* loginMenue()
{
    welcomeText();
    cout << "+++++++++++++++++ Welcome back dear client ++++++++++++++++++\n";
    cout << "Please write your email\n>> ";
    string mail, pass;
    cin >>  mail;
    cout << "\nPlease write your password\n>> ";
    cin >>  pass;
   
    int index = hashFunction(mail);

    LinkedListNode* curr = arrayOfClients[index].isExist(mail);
    
    if(curr != NULL && curr->data.getClientEmail() == mail){
        if(arrayOfClients[index].isExist(mail)->data.getClientPassword() == pass){
            return curr;
        }
        else
        {
            cout<<"\nWrong Password !!\n";            
            return 0;
        }
    }
    else{
        cout<<"\nThis email does not exist!!\n";
        return 0;
    }
    return curr;
}



bool newClient()
{
    /*
        Function to add newClient in system

        take from user name, email, phone, password, address

        push user email to hashfunction to return index
        push user to arrayOfClient by using index
        check if user not exist in linkedlist by email
        then push in this index "linked list" by using insert function

    */

    string name, email, phone, address, password;
    Client newClient;
    welcomeText();
    cout << "++++++++++++++++ Create a new client account ++++++++++++++++";

    cout << "\nPlease write your name\n>>";      
    cin.ignore();       getline(cin, name);         newClient.setClientName(name);   

    cout << "\nPlease write your email\n>>";
    cin >> email;       newClient.setClientEmail(email);  

    cout << "\nPlease write your phone\n>>";
    cin >> phone;       newClient.setClientPhone(phone);  

    cout << "\nPlease write your password\n>>";
    cin.ignore();       getline(cin,password);      newClient.setClientPassword(password);  

    cout << "\nPlease write your address\n>>";
    cin >> address;
    newClient.setClientAddress(address);

    int indx = hashFunction(email);

    if(arrayOfClients[indx].isExist(email))
    {       
            cout<<"\nThis Email already used\n";
            return 0;
    }
    
    arrayOfClients[indx].insert(newClient);

    return 1;
}

void clientHome()
{
    cout << "++++++++++++++++ Welcome to the home page ++++++++++++++++";
    cout << "\nCHOOSE ONE OF THE FOLLOWING OPTIONS\n";
    cout << "1. Transactions menu\n";
    cout << "2. View personal info\n";
    cout << "3. Logout\n";
    cout << "===============================================================\n";
}

int partitioningFunction(ClientLinkedList arr[], int left, int right)
{
    /*
    This is a function that divides the given array to two partitions according to the value of the pivot
    the left partition is all values smaller than the pivot and the right partition is all values larger
    than the pivot then it returns the position of the new limit to be called agian recursively in the
    next partitions
    */
    int pivot = arr[left].size();
    int greaterThanPivot = left;
    int smallerThanPivot = right;
    do
    {
        // Search for elements greater than pivot
        do
        {
            greaterThanPivot++;
            if (greaterThanPivot >= right)
                break;
        } while (arr[greaterThanPivot].size() <= pivot);
        // Search for elements less than pivot
        do
        {
            smallerThanPivot--;
        } while (arr[smallerThanPivot].size() > pivot);
        // move elements greater than pivot to the right and elements less than pivot to the left
        if (greaterThanPivot < smallerThanPivot)
            swap(arr[smallerThanPivot], arr[greaterThanPivot]);
    } while (greaterThanPivot < smallerThanPivot);
    // bring pivot point to the place where all the left elements are smaller and all the right elements
    // are larger
    swap(arr[smallerThanPivot], arr[left]);
    // return the position of the pivot to partition the array to smaller than pivot and bigger than pivot in
    // the next recursive call
    return smallerThanPivot;
}

void sortArrayOfLinkedLists(ClientLinkedList arr[], int left, int right)
{
    /*
    This function applies quick sort algorithm to sort the array of linked lists ascendingly
    according to their size by dividing the array to smaller subarrays until all of them are sorted
    */
    if (left < right)
    {
        int nextLimit = partitioningFunction(arr, left, right);
        // Quick sort of the left portion of the array
        sortArrayOfLinkedLists(arr, left, nextLimit);
        // Quick sort of the right portion of the array
        sortArrayOfLinkedLists(arr, nextLimit + 1, right);
    }
}

// void printSortedArrayOfLinkedLists(ClientLinkedList arr[], int left, int right)
// {
//     /*Function to sort and print the array of linked lists ascendingly according to their size
//         This function uses sortArrayOfLinkedLists to sort the array and prints the content of the array
//             using a for loop that calls printAllElements() on each linked list*/
//     welcomeText();
//     cout << "After sorting the array of linked lists, we have the following info\n";
//     sortArrayOfLinkedLists(arr, left, right);
//     for (int i = 0; i < right; ++i)
//     {
//         cout << "Index #" << i + 1 << ": Linked list of " << arr[i].size() << " Clients\n";
//         cout << "Clients of index #" << i + 1 << ":\n\n";
//         arr[i].printAllElements();
//     }
// }

void swap(ClientLinkedList arr, ClientLinkedList arr2)
{
    ClientLinkedList tmp = arr;
    arr = arr2;
    arr2=tmp;
}
