#include <iostream>
#include "FileManager.h"
#include "Admin.h"
#include "Client.h"
#include "Employee.h"
#include "DataSourceInterface.h"
#include "FilesHelper.h"
#include "Parser.h"

int main() {
	Client c("ahmed", "ahmed@011#", 2500), c2, c3;
	Employee e("mohamed", "moh@000#", 5000), e2, e3;
	Admin a("magdy", "mag@000#", 10000), a2, a3;
	cout << "Clients:.......\n";
	c.display();
	c.transferTo(1000, c2);
	c.display();
	c2.display();
	c3.display();

	cout << "----------------------------------\n";
	cout << "Employees:.......\n";
	e.display();
	e2.display();
	e3.display();

	cout << "----------------------------------\n";
	cout << "Admins:.......\n";
	a.display();
	a2.display();
	a3.display();
	
	
	return 0;
}