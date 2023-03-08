#include "FileManager.h"

void FileManager::addClient(Client client)
{
	FilesHelper::saveClient(client);
}

void FileManager::addEmployee(Employee employee)
{
	FilesHelper::saveEmployee("Employees.txt", employee);
}

void FileManager::addAdmin(Admin admin)
{
	FilesHelper::saveEmployee("Admins.txt", admin);
}

vector<Client> FileManager::getAllClients()
{
	vector<Client> clients;
	Client c;
	ifstream in;
	string line;
	in.open("Clients.txt");
	while (getline(in, line))
	{
		c = Parser::parseToClient(line);
		clients.push_back(c);
	}
	in.close();
	return clients;
}

vector<Employee> FileManager::getAllEmployees()
{
	vector<Employee> employees;
	Employee e;
	ifstream in;
	string line;
	in.open("Employees.txt");
	while (getline(in, line))
	{
		e = Parser::parseToEmployee(line);
		employees.push_back(e);
	}
	in.close();
	return employees;
}

vector<Admin> FileManager::getAllAdmins()
{
	vector<Admin> admins;
	Admin a;
	ifstream in;
	string line;
	in.open("Admins.txt");
	while (getline(in, line))
	{
		a = Parser::parseToAdmin(line);
		admins.push_back(a);
	}
	in.close();
	return admins;
}

void FileManager::fillFile(string fileName)
{
	if(fileName == "Clients.txt") {
		//allClients = getAllClients();
		removeAllClients();
		for (Client clnt : allClients) {
			addClient(clnt);
		}

	}else if (fileName == "Employees.txt") {
		//allEmployees = getAllEmployees();
		removeAllEmployees();
		for (Employee emp : allEmployees) {
			addEmployee(emp);
		}

	}
	else {
		//allAdmins = getAllAdmins();
		removeAllAdmins();
		for (Admin admn : allAdmins) {
			addAdmin(admn);
		}
	}

}

void FileManager::removeAllClients()
{
	FilesHelper::clearFile("Clients.txt");
}

void FileManager::removeAllEmployees()
{
	FilesHelper::clearFile("Employees.txt");
}

void FileManager::removeAllAdmins()
{
	FilesHelper::clearFile("Admins.txt");
}
