# BankSystem

## Create Bank system app which contains 3 modules:
`1.` `Client Module`

a. Each client contains:
  int id,
  string name,
  string password,
  double balance.
  
b. Client can login to the system using id and password.

c. Client can deposit amount of money

d. Client can withdraw amount of money

e. Client can check his balance

f. Client can transfer money to another client

`2.` `Employee Module`

a. Each employee contains: string name, int id, string password, double salary.

b. Employee can login to the system by id and password

c. Employee can add new Client

d. Employee can search for client by id

e. Employee can list all clients

f. Employee can edit info of client

g. Employee can display his info

`3.` `Admin Module`

a. Admin will be the same like Employee

b. Admin can add new Employee

c. Admin can search for Employee

d. Admin can edit Employee

e. Admin can list all employees

`Hint: you can create Person which contains name, id, password and let the client, employee inherit all data from Person, Admin could inherit from employee.`
