#include "Validation.h"

bool Validation::validateName(string &name) {
	for (int i = 0; i < name.size(); i++) {
		if (!isalpha(name[i]) || name.size() < 5 || name.size() > 20) {
			//cout << "Invalid name!\n" << "Enter a valid name: ";
			return false; //(bool)(cin >> name);
		}
	}
	return true;
}
bool Validation::validatePasswd(string password) {
	if (password.size() < 8 || password.size() > 20)
		return false;
	return true;
}
bool Validation::isPositive(double num) {
	return num > 0;
}
bool Validation::validateBalance(double balance) {
	if (balance < 1500)
		return false;
	return true;
}
bool Validation::validateSalary(double salary) {
	if (salary < 5000)
		return false;
	return true;
}