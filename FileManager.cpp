#include "FileManager.h"

using namespace std;

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
	
	Client c;
	//Client::count--;
	ifstream in;
	string line;
	in.open("Clients.txt");
	while (getline(in, line))
	{
		c = Parser::parseToClient(line);
		allClients.push_back(c);
	}
	in.close();
	return allClients;
}

vector<Employee> FileManager::getAllEmployees()
{
	
	Employee e;
	//Employee::count--;
	ifstream in;
	string line;
	in.open("Employees.txt");
	while (getline(in, line))
	{
		e = Parser::parseToEmployee(line);
		allEmployees.push_back(e);
	}
	in.close();
	return allEmployees;
}

vector<Admin> FileManager::getAllAdmins()
{

	
	Admin a;
	//Admin::count--;
	ifstream in;
	string line;
	in.open("Admins.txt");
	while (getline(in, line))
	{
		a = Parser::parseToAdmin(line);
		allAdmins.push_back(a);
	}
	in.close();
	return allAdmins;
}

void FileManager::fillClients(string fileName, vector<Client> allClients)
{
	FileManager::removeAllClients();
	for (Client client : allClients) {
		FileManager::addClient(client);
	}

}

void fillEmployees(string fileName, vector<Employee> allEmployees)
{

	FileManager::removeAllEmployees();
	for (Employee emp : allEmployees) {
		FileManager::addEmployee(emp);
	}

}

void fillAdmins(string fileName, vector<Admin> allAdmins)
{

	FileManager::removeAllAdmins();
	for (Admin admin : allAdmins) {
		FileManager::addAdmin(admin);
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
