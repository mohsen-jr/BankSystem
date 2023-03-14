#pragma once
#include "Person.h"
#include <vector>

class Client :
    public Person
{
private:
    
    double balance;
public:
    static int count;
    Client();
    Client(string name, string password, double balance);

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
