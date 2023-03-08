#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "FileManager.h"
#include "Admin.h"
#include "Client.h"
#include "Employee.h"
#include "DataSourceInterface.h"
#include "FilesHelper.h"
#include "Parser.h"

class Parser
{
public:
	static vector<string> split(string line);
	static Client parseToClient(string line);
	static Employee parseToEmployee(string line);
	static Admin parseToAdmin(string line);
};

