#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "FileManager.h"
#include "Admin.h"
#include "Client.h"
#include "Employee.h"
#include "DataSourceInterface.h"
#include "FilesHelper.h"
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

