#include "Parser.h"
#include "FileManager.h"
#include "Admin.h"
#include "Client.h"
#include "Employee.h"
#include "DataSourceInterface.h"
#include "FilesHelper.h"


vector<string> Parser::split(string line)
{
	vector<string> info;
	stringstream stream(line);
	string part;
	while (getline(stream, part, ','))
	{
		info.push_back(part);
	}
	return info;
}

Client Parser::parseToClient(string line)
{
	Client c;
	vector<string> info = Parser::split(line);
	c.setID(stoi(info[0]));
	c.setName(info[1]);
	c.setPassword(info[2]);
	c.setBalance(stod(info[3]));
	return c;
}

Employee Parser::parseToEmployee(string line)
{
	Employee e;
	vector<string> info = Parser::split(line);
	e.setID(stoi(info[0]));
	e.setName(info[1]);
	e.setPassword(info[2]);
	e.setSalary(stod(info[3]));
	return e;
}

Admin Parser::parseToAdmin(string line)
{
	Admin a;
	vector<string> info = Parser::split(line);
	a.setID(stoi(info[0]));
	a.setName(info[1]);
	a.setPassword(info[2]);
	a.setSalary(stod(info[3]));
	return a;
}
