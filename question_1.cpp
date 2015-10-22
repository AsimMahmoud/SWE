#include <iostream>
#include <string> 
using namespace std;
class bank_account
{

public:
	bank_account();
	bank_account(const string dep, string ac_n, int bln);
	void display();
	void deposit(int inc);
	void withdraw(int dec);
private:
	std::string   depositor;
	std::string	  account_no;
	int balance;
};

bank_account::bank_account()
{
	depositor  = "no name";
	account_no = "0000" ;
	balance    = 0 ;
}
bank_account::bank_account(string dep, string ac_n, int bln)
{
	depositor  = dep ;
	account_no = ac_n ;
	balance    = bln ;
}
void bank_account::display()
{
	cout << depositor << "\n" << account_no << "\n" << balance;
}
void bank_account::deposit(int inc)
{
	balance += inc;
}
void bank_account::withdraw(int dec)
{
	balance -= dec;
}
