#pragma once
#include <iostream>
#include <vector>
#include "FileManager.h"
#include "Admin.h"
#include "Client.h"
#include "Employee.h"
#include "DataSourceInterface.h"
#include "FilesHelper.h"
#include "Parser.h"

class DataSourceInterface
{
public:
	virtual void addClient(Client client) = 0;
	virtual void addEmployee(Employee employee) = 0;
	virtual void addAdmin(Admin admin) = 0;
	virtual vector<Client> getAllClients() = 0;
	virtual vector<Employee> getAllEmployees() = 0;
	virtual vector<Admin> getAllAdmins() = 0;
	virtual void fillFile(string fileName) = 0;
	virtual void removeAllClients() = 0;
	virtual void removeAllEmployees() = 0;
	virtual void removeAllAdmins() = 0;

};

