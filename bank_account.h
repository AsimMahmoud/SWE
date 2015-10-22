#ifndef bank_account
#define bank_account
#include <string>
using namespace std;

class bank_account
{
public:
	bank_account ();
	bank_account (const string dep, std :: string ac_n, int bln);
	void display ();
	void deposit (int inc);
	void withdraw(int dec);

private:
	std :: string   depositor;
	std :: string	account_no ;
	int balance ;
	
};


#endif
