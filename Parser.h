#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Client.h"
#include "Admin.h"

class Parser
{
public:
	static vector<string> split(string);
	static Client parseToClient(string);
	static Employee parseToEmployee(string);
	static Admin parseToAdmin(string);
};

