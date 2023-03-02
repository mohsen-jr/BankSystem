#pragma once
#include <iostream>
#include "Validation.h"
using namespace std;

class Person
{
protected:
	int id;
	string name;
	string password;
public:
	Person();
	Person(int id, string name, string password);

	void setName(string name);
	void setPassword(string password);
	//void setID(int id);

	string getName();
	string getPassword();
	int getID();

	void display();
};

