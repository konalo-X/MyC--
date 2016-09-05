//brass.h -- bank account classes
/*
Brass account :
信息:
客户姓名
账号
当前结余

操作:
创建账户
存款
取款
显示账户信息

Brassplus account

包含 Brass所有信息 并增加了
.透支上限
.透支贷款利率
.当前透支总额

不需要新增,但操作实现不同

.取款,要考虑到透支保护
.显示操作必须显示BrassPlus的其他账户信息

*/

#ifndef BRASS_H_
#define BRASS_H_

#include<string>

//bass account Class
class Brass
{
private:
	std::string fullname;
	long acctNum;
	double balance;
public:
	Brass(const std::string &s = "Nullbody", long an = -1, double bal = 0.0);//创建账户
	void Deposit(double amt);//存款
	virtual void Withdraw(double amt);//取款
	double Balance()const;//账户余额
	virtual void ViewAcct()const;//查询账户信息

	//析构函数

	virtual ~Brass() {};



};


//BrassPlus account class
class BrassPlus :public Brass
{
private:
	double maxLoan;
	double rate;
	double oweBank;
public:
	BrassPlus(const std::string &s="Nullbody", long an = -1, double bal = 0.0, double ml = 500, double  r = 0.11125);
	BrassPlus(const Brass &ba, double ml = 500, double  r = 0.11125);

	virtual void ViewAcct()const;
	virtual void Withdraw(double amt);
	
	void ResetMax(double m) { maxLoan = m; };
	void ResetOwns() { oweBank = 0; };
};
#endif // !BRASS_H_
