#include"Client.h"


Transaction::Transaction()
{
    transactionID = INT_MIN;
    transactionName = "";
    transactionDate = "";
}

Transaction::Transaction(int id)
{
    transactionID = id;
    transactionName = "Withdraw";
    transactionDate = "14/Dec/2022";
}

void Transaction::printTransactionInfo()
{
    cout << "Transaction Id: " << getId() << endl;
    cout << "Transaction Name: " << getName() << endl;
    cout << "Transaction Date: " << getDate() << endl << endl;
}

void transactionsMenu()
{
    cout << "++++++++++++++ Welcome to the transactions system +++++++++++++\n"
         << "CHOOSE ONE OF THE FOLLOWING OPTIONS:\n"
         << "1. Create a new transaction\n"
         << "2. View your transactions \n"
         << "3. Delete a transaction by its ID\n"
         << "===============================================================\n"
         << ">> ";
        
}


Client::Client()
{
    // initialization all string with empty string
    clientName = clientEmail = clientPhone = clientAddress = clientPassword = "";

    // initialization transactionCount = zero
    transactionCount = 0;

    // initialization clientID to by random fucntion
    clientID = rand();

    // initialization Array of clientTransaction = INT_MIN
    for (int i = 0; i < 5; i++)
        clientTransaction[i] = {INT_MIN};
}

Client::Client(string name, string email, string phone, string password, string address)
{
    clientName = name;
    clientEmail = email;
    clientPhone = phone;
    clientAddress = address;
    clientPassword = password;
    clientID = rand();
    transactionCount = 0;
}

bool Client::setTransaction(int id)
{
    if (transactionCount == 5)
    {
        cout << "No more transactions are allowed for this client\n";
        return 0;
    }
    else
    {
        // push transaction in clientTransaction array and increment transactionCount by 1
        Transaction newTransaction(id);
        clientTransaction[transactionCount++] = newTransaction;
    }
    return 1;
}

void Client::getClientTransaction()
{
    // funciton to print all client Transactions
    for (int i = 0; i < transactionCount; i++)
    {
        clientTransaction[i].printTransactionInfo();
        cout << "\n";
    }
}

void Client::print_client_info()
{
    cout << "Name: " << clientName << endl;
    cout << "ID: " << clientID << endl;
    cout << "Email: " << clientEmail << endl;
    cout << "Phone: " << clientPhone << endl;
    cout << "Address: " << clientAddress << endl;
}

void Client::viewTransaction()
{
    // welcomeText();
    cout << "\n===============================================================\n";
    cout << "++++++++++++++++ Welcome to the banking system ++++++++++++++++\n\n";

    cout << "++++++++++++++++++++ Transactions informations ++++++++++++++++++++\n";
    if(transactionCount == 0)
       cout<<"No Transactions Available\n";
    else {
        for (int i = 0; i < 5; i++)
        {
            if(clientTransaction[i].getId() == INT_MIN)
                continue;
            else
                clientTransaction[i].printTransactionInfo();
        }
    }
}

void Client::reorder_Transaction()
{
    int flag = 0, j =0;
    for(int i=0; i<transactionCount; i++)
    {
        if(clientTransaction[i].getId() == INT_MIN)
        {
            flag = 1;
            j = i+1;
        }
        if(flag)
        {
            clientTransaction[i] = clientTransaction[j++];
        }
    }
    if(flag)
        clientTransaction[--j].setId(INT_MIN);
}

void Client::deleteTransaction(int id)
{
    bool flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if(transactionCount==0){
            cout<<"Transaction does not exist !!\n";
            break;
        }
        if (id == clientTransaction[i].getId())
        {
            clientTransaction[i].setId(INT_MIN);
            transactionCount--;
            reorder_Transaction();
            flag=1;
            break;
        }        
    }
    if(flag==0) cout<<"Transaction does not exist !!\n";
}