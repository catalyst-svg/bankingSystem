#ifndef BANKINGSYS_H
#define BANKINGSYS_H 
#include "includes.h"

class Client
{
	std::string m_name;
	std::string m_email;
	std::string m_pswd;
	double m_balance;
public:
	Client();
	Client(std::string name,std::string email,std::string pswd,double balance);

	std::string getName() const;
	std::string getEmail() const;
	std::string getPswd() const;
	double getBalance() const;

};


#endif
