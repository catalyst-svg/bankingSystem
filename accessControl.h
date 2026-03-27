#ifndef ACCESSCONTROL_H
#define ACCESSCONTROL_H

#include "includes.h"

class Customer

{
	std::string m_name;
	int m_id;
	std::string m_email;
	std::string m_pswd;
	double m_balance;
public:
	Customer(std::string name,int id, std::string email,std::string pswd,double balance);

	int getID() const;
	std::string getName() const;
	std::string getEmail() const;
	std::string getPswd() const;
	double getBalance();

};

class Employee
{
	std::string m_name;
	int m_id;
	std::string m_employeePswd;

public:
	Employee();
	Employee(std::string name,int id,std::string employeePswd);
	
	void deleteAccount(int userID);


};

class admin
{
	int m_id;
	std::string m_adminPswd;
public:
	admin();
	admin(int id,std::string adminPswd);


};

#endif
