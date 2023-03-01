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
