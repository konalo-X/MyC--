//brass.cpp -- bank account class methods

#include<iostream>
#include"brass.h"
using std::cout;
using std::endl;
using std::string;

//formatting stuff

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setFormat();

void restore(format f, precis p);

//brass methods

Brass::Brass(const string &s, long an, double bal)
{
	fullname = s;
	acctNum = an;
	balance = bal;
}

void Brass::Deposit(double amt)
{
	if (amt < 0)
		cout << "Negetive Desposit not allowed;"
		<< "desposit is cancelled. \n";
	else
		balance += amt;
}

void Brass::Withdraw(double amt)
{
	//set up ###.## format
	format initialState = setFormat();
	precis prec = cout.precision(2);

	if (amt < 0)
		cout << "Withdraw amount must be positive; "
		<< "Withdraw cancelled \n";
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "Withdraw amount of $" << amt
		<< "exceeds your balance. \n"
		<< "Withdraw cancelled. \n";
	restore(initialState, prec);
}

double Brass::Balance()const
{
	return balance;
}

void Brass::ViewAcct()const
{
	//set up ###.## format
	format initialState = setFormat();
	precis prec = cout.precision(2);

	cout << "Client: " << fullname << endl;
	cout << "Account number: " << acctNum << endl;
	cout << "Balance: $" << balance << endl;
	restore(initialState, prec);//restore original format

}

//BrassPluss methods

BrassPlus::BrassPlus(const std::string &s,long an,double bal,double ml,double rt)
	:Brass(s, an, bal), maxLoan(ml), rate(rt) {
	oweBank = 0.0;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double rt)
:Brass(ba)//use implicit copy constructor(隐式复制构造函数)
{
	maxLoan = ml;
	rate = rt;
	oweBank = 0.0;
}

//redefine  how ViewAcct() works

void BrassPlus::ViewAcct()const
{
	//set up ###.## format
	format initialState = setFormat();
	precis prec = cout.precision(2);

	Brass::ViewAcct();
	cout << "Maximum loan: $" << maxLoan << endl;
	cout << "Owed to Bank: $" << oweBank << endl;
	//set up ###.### format
	cout.precision(3);
	cout << "Loan Rate:" << rate*100 <<"% \n";

}

//redefine withdraw() works
void BrassPlus::Withdraw(double amt)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt);
	else if (amt <= bal + maxLoan - oweBank)
	{
		double advance = amt - bal;
		oweBank += advance*(1 + rate);
		cout << "Bank advance: $" << advance << endl;
		cout << "Finance charge: $" << advance*rate << endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}
	else
		cout << "Credit limit exceeded .Transaction cancelledd. \n ";
	restore(initialState, prec);

}

format setFormat()
{
	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f,precis p)
{
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}

