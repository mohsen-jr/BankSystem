#pragma once
#include "Employee.h"
class Admin :
    public Employee
{
public:
    Admin();
    Admin(string name, string password, double salary);

};

