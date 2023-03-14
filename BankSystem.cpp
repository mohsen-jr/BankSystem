#include <iostream>
#include <vector>
#include "Client.h"
#include "Admin.h"
#include "Parser.h"
#include "FilesHelper.h"
#include "FileManager.h"

using namespace std;


int main() {
	
	Client c("ahmed", "ahmed@011#", 2500), c2, c3;
	Employee e("mohamed", "moh@000#", 5000), e2, e3;
	Admin a("magdy", "mag@000#", 10000), a2, a3;
	/*cout << "Clients:.......\n";
	c.display();
	c.transferTo(1000, c2);
	allClients.push_back(c);
	allClients.push_back(c2);
	allClients.push_back(c3);
	for(Client client : allClients)
		client.display();*/
	
	Client client = Parser::parseToClient("1,aliAhmed,aliAhmed123,15000");
	/*cout << "----------------------------------\n";
	client.display();

	FilesHelper::saveClient(client);*/
	FileManager::addClient(client);
	FilesHelper::saveClient(client);
	FilesHelper::getClients();
	cout << Client::count << endl;
	

	/*cout << "----------------------------------\n";
	cout << "Employees:.......\n";
	e.display();
	e2.display();
	e3.display();

	cout << "----------------------------------\n";
	cout << "Admins:.......\n";
	a.display();
	a2.display();
	a3.display();
	cout << "new line " << endl;
	cout << "second line " << endl;*/
	
	
	return 0;
}