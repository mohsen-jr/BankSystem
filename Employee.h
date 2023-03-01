#pragma once
#include "Person.h"
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
    void display();
};

