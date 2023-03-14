#pragma once
#include "Person.h"
#include "Client.h"
#include <vector>

class Employee :
    public Person
{
protected:
   
    double salary;
public:
    static int count;
    Employee();
    Employee(string name, string password, double salary);

    void setSalary(double salary);
    double getSalary();
    void addClient(Client& client);
    Client* searchClient(int id);
    void listClients();
    void editClient(int id, string name, string password, double balance);
    void display();
    void addClient(Client& client);
    Client* searchClient(int id);
    void listClients();
    void editClient(int id, string name, string password, double balance);


};

static vector<Employee> allEmployees;
static vector<Employee>::iterator emIt;
