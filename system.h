#ifndef SYSTEM_H
#define SYSTEM_H

#include "includes.h"


namespace bankingSystem
{

	static void deposit(Customer& c, double amount);

	static void withdraw(Customer& c, double amount);

	static void changePswd(Customer& c, std::string currentPswd);

	static void changeEmail(Customer& c,std::string currentEmail);
	
}


#endif
