#pragma once
#include "Employee.h"
#include "FileManager.h"
#include "Admin.h"
#include "Client.h"
#include "DataSourceInterface.h"
#include "FilesHelper.h"
#include "Parser.h"
class Admin :
    public Employee
{
public:
    Admin();
    Admin(string name, string password, double salary);
    void addEmployee(Employee& employee);
    void addAdmin(Admin& admin);
    Employee* searchEmployee(int id);
    void editEmployee(int id, string name, string password, double salary);
    void listEmployees();
    void listAdmins();

};

static vector<Admin> allAdmins;
static vector<Admin>::iterator adIt;

