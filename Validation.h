#pragma once
#include <iostream>
using namespace std;
class Validation
{
public:
	static bool validateName(string &name);
	static bool validatePasswd(string password);
	static bool isPositive(double num);
	static bool validateBalance(double balance);
	static bool validateSalary(double salary);
};

