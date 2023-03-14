#include "Parser.h"
using namespace std;

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
	Client client;
	Client::count--;
	vector<string> info = Parser::split(line);
	client.setID(stoi(info[0]));
	client.setName(info[1]);
	client.setPassword(info[2]);
	client.setBalance(stod(info[3]));
	return client;
}

Employee Parser::parseToEmployee(string line)
{
	Employee employee;
	Employee::count--;
	vector<string> info = Parser::split(line);
	employee.setID(stoi(info[0]));
	employee.setName(info[1]);
	employee.setPassword(info[2]);
	employee.setSalary(stod(info[3]));
	return employee;
}

Admin Parser::parseToAdmin(string line)
{
	Admin admin;
	Admin::count--;
	vector<string> info = Parser::split(line);
	admin.setID(stoi(info[0]));
	admin.setName(info[1]);
	admin.setPassword(info[2]);
	admin.setSalary(stod(info[3]));
	return admin;
}