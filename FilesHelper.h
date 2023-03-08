#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "Client.h"
#include "Admin.h"
#include "Parser.h"

using namespace std;

class FilesHelper
{
public:
	static void saveClient(Client c);
	static void saveEmployee(string fileName, Employee e);
	static void getClients();
	static void getEmployees();
	static void getAdmins();
	static void clearFile(string fileName);
};

