#include "Admin.h"

Admin::Admin(){
}
Admin::Admin(string name, string password, double salary) : Employee(name, password, salary) {

}

void Admin::addEmployee(Employee& employee)
{
	allEmployees.push_back(employee);
}

Employee* Admin::searchEmployee(int id)
{
	for (emIt = allEmployees.begin(); emIt != allEmployees.end(); emIt++) {
		if (emIt->getID() == id) return emIt._Ptr;
	}
	return nullptr;
}

void Admin::editEmployee(int id, string name, string password, double salary)
{

	searchEmployee(id)->setName(name);
	searchEmployee(id)->setPassword(password);
	searchEmployee(id)->setSalary(salary);

}

void Admin::listEmployees()
{

	for (emIt = allEmployees.begin(); emIt != allEmployees.end(); emIt++) {
		emIt->display();
		cout << "------------------------------------\n";
	}
}
