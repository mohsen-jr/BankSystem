#include "Client.h"

int Client::count = 0;
Client::Client() {
	count++;
	id = count;
	this->balance = 1500;
}
Client::Client(string name, string password, double balance) : Person(count + 1, name, password) {
	setBalance(balance);
	count++;
}
void Client::deposit(double amount) {
	if (Validation::isPositive(amount))
		balance += amount;
	else
		cout << "Can't add negative value!\n";
}
void Client::withdraw(double amount) {
	if (Validation::isPositive(amount)) {
		if (balance >= amount) {
			balance -= amount;
		}
		else {
			cout << "There isn't enough balance.\n";
		}
	}
	else
		cout << "Can't withdraw negative value!\n";
	
}
void Client::transferTo(double amount, Client& recipient) {
	if (Validation::isPositive(amount)) {
		if (balance < amount) return;
		else {
			balance -= amount;
			recipient.balance += amount;
		}
	}else
		cout << "Can't transfer negative value!\n";
}
void Client::checkBalance() {
	cout << "Your balance is: " << balance << endl;
}
void Client::setBalance(double balance) {
	if(Validation::validateBalance(balance)){
		this->balance = balance;
	}
	else
		cout << "Invalid Balance!\n";
	
}
double Client::getBalance() {
	return balance;
}
void Client::display() {
	Person::display();
	cout << "Balance = " << balance << endl;
}
