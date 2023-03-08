#pragma once
#include "Person.h"
#include "FilesHelper.h"
#include "FileManager.h"
class Employee :
    public Person
{
protected:
    static int count;
    double salary;
public:
    Employee();
    Employee(string name, string password, double salary);

    void setSalary(double salary);
    double getSalary();
    void addClient(Client& client);
    Client* searchClient(int id);
    void listClients();
    void editClient(int id, string name, string password, double balance);
    void display();
};

static vector<Employee> allEmployees;
static vector<Employee>::iterator emIt;