#include "FilesHelper.h"
#include "Parser.h"
#include "FileManager.h"
#include "Admin.h"
#include "Client.h"
#include "Employee.h"
#include "DataSourceInterface.h"


void FilesHelper::saveClient(Client c)
{
	fstream out;
	out.open("Clients.txt", ios::app);
	out << c.getID() << "," << c.getName() << "," << c.getPassword() << "," << c.getBalance() << endl;
	out.close();
}

void FilesHelper::saveEmployee(string fileName, Employee e)
{
	fstream out;
	out.open(fileName, ios::app);
	out << e.getID() << "," << e.getName() << "," << e.getPassword() << "," << e.getSalary() << endl;
	out.close();
}

void FilesHelper::getClients()
{
	Client c;
	ifstream in;
	string line;
	in.open("Clients.txt");
	
	while (getline(in, line))
	{
		c = Parser::parseToClient(line);
		c.display();
		cout << "===========================\n";
	}
	in.close();
}

void FilesHelper::getEmployees()
{
	Employee e;
	ifstream in;
	string line;
	in.open("Employees.txt");

	while (getline(in, line))
	{
		e = Parser::parseToEmployee(line);
		e.display();
		cout << "===========================\n";
	}
	in.close();
}

void FilesHelper::getAdmins()
{
	Admin a;
	ifstream in;
	string line;
	in.open("Employees.txt");

	while (getline(in, line))
	{
		a = Parser::parseToAdmin(line);
		a.display();
		cout << "===========================\n";
	}
	in.close();
}

void FilesHelper::clearFile(string fileName)
{
	fstream file;
	file.open(fileName, ios::out);
	file.close();
}




