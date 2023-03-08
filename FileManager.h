#pragma once
#include "DataSourceInterface.h"
#include "FilesHelper.h"
#include "FileManager.h"
#include "Admin.h"
#include "Client.h"
#include "Employee.h"
#include "Parser.h"
class FileManager :
    public DataSourceInterface
{
public:
	static void addClient(Client client);
	static void addEmployee(Employee employee);
	static void addAdmin(Admin admin);
	static vector<Client> getAllClients();
	static vector<Employee> getAllEmployees();
	static vector<Admin> getAllAdmins();
	static void fillFile(string fileName);
	static void removeAllClients();
	static void removeAllEmployees();
	static void removeAllAdmins();
};

