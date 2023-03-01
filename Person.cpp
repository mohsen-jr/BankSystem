#include "Person.h"


Person::Person() {
	id = 0;
	name = "";
	password = "";
}
Person::Person(int id, string name, string password) {
	setID(id);
	setName(name);
	setPassword(password);
}

void Person::setID(int id) {
	this->id = id;
}
void Person::setName(string name) {
	if (Validation::validateName(name)) {
		this->name = name;
	}
	else {
		cout << "Invalid Name!\n";
	}
	
}
void Person::setPassword(string password) {
	if (Validation::validatePasswd(password)) {
		this->password = password;
	}
	else {
		cout << "Invalid Password!\n";
	}
	
}

string Person::getName() {
	return name;
}
string Person::getPassword() {
	return password;
}
int Person::getID() {
	return id;
}

void Person::display() {
	cout << "ID: " << id << endl
		<< "Name: " << name << endl
		<< "Password: " << password << endl;
}

