#pragma once
#include "FilesHelper.h"
#include "DataSourceInterface.h"

using namespace std;

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
	static void fillClients(string fileName, vector<Client> allClients);
	static void fillEmployees(string fileName, vector<Employee> allEmployees);
	static void fillAdmins(string fileName, vector<Admin> allAdmins);
	static void removeAllClients();
	static void removeAllEmployees();
	static void removeAllAdmins();
};

