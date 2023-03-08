#include "Admin.h"

vector<Admin> allAdmins = FileManager::getAllAdmins();
Admin::Admin(){
}
Admin::Admin(string name, string password, double salary) : Employee(name, password, salary) {

}

void Admin::addEmployee(Employee& employee)
{
	allEmployees.push_back(employee);
	FilesHelper::saveEmployee("Employees.txt", employee);
	cout << "New employee had been added...\n";
}

void Admin::addAdmin(Admin& admin)
{
	allAdmins.push_back(admin);
	FilesHelper::saveEmployee("Admins.txt", admin);
	cout << "New Admin had been added...\n";
}

Employee* Admin::searchEmployee(int id)
{
	
	allEmployees = FileManager::getAllEmployees();
	auto id_match_fn = [&id](auto employee) {
		return employee.getID() = id;
	};
	
	emIt = find_if(begin(allEmployees), end(allEmployees), id_match_fn);
	// find_if returns first find if there is a match and last >> end(allEmployees) if no match
	if (emIt != end(allEmployees)) {
		return &(*emIt);
	}
	else {
		cout << "Employee not found!\n";
		return nullptr;
	}
	
}

void Admin::editEmployee(int id, string name, string password, double salary)
{
	// first searchEmployee by id in allEmployees vector
	// if emp is found, edit it then update Employees.text
	// else create new emp and add it to Employees.txt then update allEmployees vector 
	// by calling FileManager::getAllEmplyees()
	allEmployees = FileManager::getAllEmployees();
	Employee* ptr = searchEmployee(id);
	if (ptr != nullptr) {
		ptr->setName(name);
		ptr->setPassword(password);
		ptr->setSalary(salary);
		FileManager::fillFile("Employees.txt");
	}
	else {
		cout << "Adding new employee...\n";
		Employee emp(name, password, salary);
		allEmployees.push_back(emp);
		addEmployee(emp);
		emp.display();

	}
}

void Admin::listEmployees()
{
	FilesHelper::getEmployees();
}

void Admin::listAdmins()
{
	FilesHelper::getAdmins();
}
