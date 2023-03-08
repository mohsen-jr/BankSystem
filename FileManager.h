#pragma once
#include "DataSourceInterface.h"
#include "FilesHelper.h"
class FileManager :
    public DataSourceInterface
{
public:
	static void addClient(Client);
	static void addEmployee(Employee);
	static void addAdmin(Admin);
	static vector<Client> getAllClients();
	static vector<Employee> getAllEmployees();
	static vector<Admin> getAllAdmins();
	static void fillFile(string fileName);
	static void removeAllClients();
	static void removeAllEmployees();
	static void removeAllAdmins();
};
