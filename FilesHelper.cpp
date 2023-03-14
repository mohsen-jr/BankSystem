#include "FilesHelper.h"

using namespace std;

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
	Client::count--;
	ifstream in;
	string line;
	in.open("Clients.txt");

	while (getline(in, line))
	{
		c = Parser::parseToClient(line);
		c.display();
		cout << "===========================\n";
		allClients.push_back(c);
	}
	in.close();
}

void FilesHelper::getEmployees()
{
	Employee e;
	Employee::count--;
	ifstream in;
	string line;
	in.open("Employees.txt");

	while (getline(in, line))
	{
		e = Parser::parseToEmployee(line);
		e.display();
		cout << "===========================\n";
		allEmployees.push_back(e);
	}
	in.close();
}

void FilesHelper::getAdmins()
{
	Admin a;
	Employee::count--;
	ifstream in;
	string line;
	in.open("Admins.txt");

	while (getline(in, line))
	{
		a = Parser::parseToAdmin(line);
		a.display();
		cout << "===========================\n";
		allAdmins.push_back(a);
	}
	in.close();
}

void FilesHelper::clearFile(string fileName)
{
	fstream file;
	file.open(fileName, ios::out);
	file.close();
}
