#pragma once
#include "Person.h"
#include "FileManager.h"
#include "Admin.h"
#include "Client.h"
#include "Employee.h"
#include "DataSourceInterface.h"
#include "FilesHelper.h"
#include "Parser.h"

class Client :
    public Person
{
private:
    static int count;
    double balance;
public:
    
    Client();
    Client(string name, string password, double balance);

    int getCount();
    void deposit(double amount);
    void withdraw(double amount);
    void transferTo(double amount, Client& recipient);
    void checkBalance();
    void setBalance(double balance);
    double getBalance();
    void display();
};

static vector<Client> allClients;
static vector<Client>::iterator clIt;
