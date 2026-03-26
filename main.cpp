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
std::string Customer::getPswd() 
{
	return m_pswd;
}

////
Employee::Employee(std::string name,int id,std::string employeePswd) : m_name(name),m_id(id),m_employeePswd(employeePswd) {}
void Employee::deleteAccount(int userID)
{
	//python script
}

////
admin::admin(int id,std::string adminPswd) : m_id(id),m_adminPswd(adminPswd) {}

	 
int main()
{

	return 0;
}
