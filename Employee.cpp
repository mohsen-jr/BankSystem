#include "Employee.h"

int Employee::count = 0;

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
