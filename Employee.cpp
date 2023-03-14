#include "FileManager.h"
#include "Admin.h"
#include "Client.h"
#include "Employee.h"
#include "DataSourceInterface.h"
#include "FilesHelper.h"
#include "Parser.h"

int Employee::count = 0;
vector<Employee> allEmployees = FileManager::getAllEmployees();

Employee::Employee() {
	count++;
	id = count;
	this->salary = 5000;
}
Employee::Employee(string name, string password, double salary) : Person(count + 1, name, password) {
	setSalary(salary);
	count++;
}

void Employee::setSalary(double salary) {
	if (Validation::validateSalary(salary)){
		this->salary = salary;
	}
	else
		cout << "Invalid Salary!\n";
}
double Employee::getSalary() {
	return salary;
}
void Employee::addClient(Client& client)
{
	allClients.push_back(client);
	FileManager::addClient(client);
}
Client* Employee::searchClient(int id)
{
	allClients = FileManager::getAllClients();
	auto id_match_fn = [&id](auto client) {
		return client.getID() = id;
	};

	clIt = find_if(begin(allClients), end(allClients), id_match_fn);
	// find_if returns first find if there is a match and last >> end(allClients) if no match
	if (clIt != end(allClients)) {
		return &(*clIt);
	}
	else {
		cout << "Client not found!\n";
		return nullptr;
	}
}
void Employee::listClients()
{
	FilesHelper::getClients();
}
void Employee::editClient(int id, string name, string password, double balance)
{
	// first searchClient by id in allClients vector
	// if client is found, edit it then update Clients.text
	// else create new client and add it to Clients.txt then update allClients vector 
	// by calling FileManager::getAllClients()
	allClients = FileManager::getAllClients();
	Client* ptr = searchClient(id);
	if (ptr != nullptr) {
		ptr->setName(name);
		ptr->setPassword(password);
		ptr->setBalance(balance);
		FileManager::fillFile("Clients.txt");
	}
	else {
		cout << "Adding new Client...\n";
		Client client(name, password, balance);
		allClients.push_back(client);
		addClient(client);
		client.display();

	}
}
void Employee::display() {
	Person::display();
	cout << "Salary: " << salary << endl;
}

void Employee::addClient(Client& client)
{
	allClients.push_back(client);
}

Client* Employee::searchClient(int id)
{
	for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
		if (clIt->getID() == id) return clIt._Ptr;
	}
	return nullptr;
}

void Employee::listClients()
{
	for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
		clIt->display();
		cout << "--------------------------------\n";
	}
}

void Employee::editClient(int id, string name, string password, double balance)
{
	searchClient(id)->setName(name);
	searchClient(id)->setPassword(password);
	searchClient(id)->setBalance(balance);
}	
