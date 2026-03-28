#include "includes.h"
////
Customer::Customer(std::string name,int id,std::string email,std::string pswd,double balance) :m_name(name),m_id(id),m_email(email),m_pswd(pswd),m_balance(balance) {}
double Customer::getBalance()
{
	return m_balance;
}
std::string Customer::getName() const
{
	return m_name;
}
std::string Customer::getEmail() const
{
	return m_email;
}
std::string Customer::getPswd() const 
{
	return m_pswd;
}

////
Employee::Employee(std::string name,int id,std::string employeePswd) : m_name(name),m_id(id),m_employeePswd(employeePswd) {}


////
admin::admin(int id,std::string adminPswd) : m_id(id),m_adminPswd(adminPswd) {}

////
void bankingSystem::deposit(Customer& c, double amount)
{	
	double bal;
	bal = c.getBalance();
	bal += amount;
	//post with pyhthon script
}
void bankingSystem::withdraw(Customer& c,double amount)
{
	double bal;
	if (amount > c.getBalance())
	{
		std::cout << "Withdraw Amount Exceeds Account Balance" << std::endl;
	}
	else
	{
		bal = c.getBalance();
		bal -= amount;
		//post with pyhton script//
	}
}

void bankingSystem::changePswd(Customer& c,std::string currentPswd)
{
	std::string p;
	p = c.getPswd();
	std::string newP;
	std::string confirmPswd;
	bool pswdMatch{false};
	if (p == currentPswd)
	{
		while (!pswdMatch)
		{
			std::cout << "Enter New Password: ";
			std::getline(std::cin,newP);
			std::cin.clear();
			std::cout << "Confirm New Password: ";
			std::getline(std::cin,confirmPswd);
			std::cin.clear();
			if (confirmPswd == newP)
			{
				pswdMatch = true;
			}
		}

		//update to csv pthon script
	}
	else
	{
		std::cout << "Current Password Incorrect" << std::endl;
	}

}

void bankingSystem::changeEmail(Customer& c,std::string currentEmail)
{
	std::string e;
	e = c.getEmail();
	std::string newEmail;
	std::string confirmEmail;
	bool emailsMatch{false};
	if (currentEmail == e)
	{
		while (!emailsMatch)
		{
			std::cout << "Enter New Email: ";
			std::getline(std::cin,newEmail);
			std::cin.clear();
			std::cout << "Confirm New Email: ";
			std::getline(std::cin,confirmEmail);
			if (confirmEmail == newEmail)
			{
				emailsMatch = true;
			}
		}

		//update to csv pthon script
	}
	else
	{
		std::cout << "Email Does Not Exist" << std::endl;
	}



}




int main()
{
	int userType{};
	int userChoice{};
	int userID{};

	std::cout << "    Standard Banking Application" << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	std::cout << "1. Customer\n2. Employee\n3. Admin\n4. Exit\n>> ";
	std::cin >> userType;
	
	std::cout << "Enter User ID: ";
	std::cin >> userID;

	while (userType != 4)
	{
		switch (userType)
		{
			int currentUserID{};
			std::string currentUserPswd;
			int fucntionChoice{};
			case 1: 
			{
				std::cout << "Enter ID: ";
				std::cin >> currentUserID;
				std::cout >> "Enter Password: ";
				std::cin >> currentUserPswd;
				bool isCorrect = bankingSystem::checkPswd(currentUserID,currentUserPswd);
				if (isCorrect)
				{
					while (functionChoice != 5)
					{
						Customer c1();
						std::cout << "Welcome " << c1.getName << std::endl;
						std::cout << "----------------------" << std::endl;
						std::cout << "1. Deposit\n2. Withdraw\n3. Change Email\n4. Change Password\5. Exit\n>> ";
						switch (functionChoice)
						{
							double currentAmount{};
							case 1:
							{
								std::cout << "Enter Amount To Deposit: ";
								std::cin >> currentAmount;
								bankingSystem::deposit(c1,currentAmount);
								std::cout << "Deposit Succesful!" << std::endl;
								break;
							}

							case 2:
							{
								std::cout << "Enter Amount To Withdraw: ";
								std::cin >> currentAmount;
								bankingSystem::withdraw(c1,currentAmount);
								break;
							}

						}
					}
				}
				else
				{
					std::cout << "User ID Or Password Inccorect" << std::endl;
				}
				break;
			}
			case 2: 
			{
				//employee
				Employee e1();
				break; 
			}
			case 3:
			{
				admin a1();
				break;
				//admin
			}

			default:
			{
				std::cout << "Not A Valid Entry" << std::endl;
				break;
			}
		}
	}



	return 0;
}
