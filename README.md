# Banking System
 
This project was built to practice polyglot architecture using C++ and Python.
Banking System is a command line application that challenges me to think about how
different languages can work together, while also strengthening my coding and Git workflow.
 
## Features
 
- Role based access for customers, employees, and admins
- Full CRUD operations on accounts and transactions
- C++ handles core banking logic and user interaction
- Python handles all data persistence through CSV read/write operations
 
## Requirements
 
- g++ (C++17 or higher)
- Python 3.14.0
 
## How to Compile
 
```bash
make
```
 
## How to Run
 
```bash
./bankingSys
```
 
## How to Clean
 
```bash
make clean
```
 
## Project Structure
 
```

bankingSys/
main.cpp
includes.h
system.h
accessControl.h
crudScript.py
Makefile
README.md
.gitignore
userData/
employees.csv
users.csv
```
 
## How it Works
 
C++ manages the core logic including transaction processing, balance calculations,
and input validation. Python handles all data operations, reading and writing customer
and account data to a CSV file. C++ calls the Python script when data needs to be
retrieved or updated.
 
## CRUD Operations
 
### Customer
- **Create** — open a new bank account
- **Read** — view account balance and transaction history
- **Update** — deposit and withdraw funds
- **Delete** — close account
 
### Employee
- **Create** — open accounts on behalf of customers
- **Read** — view any customer account and transaction history
- **Update** — make deposits, withdrawals, and transfers for customers
- **Delete** — flag accounts for closure
 
### Admin
- **Create** — create customer and employee accounts
- **Read** — full access to all accounts and system data
- **Update** — modify any account including employee accounts
- **Delete** — permanently delete any account from the system
 
