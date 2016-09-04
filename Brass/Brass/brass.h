//brass.h -- bank account classes
/*
Brass account :
��Ϣ:
�ͻ�����
�˺�
��ǰ����

����:
�����˻�
���
ȡ��
��ʾ�˻���Ϣ

Brassplus account

���� Brass������Ϣ ��������
.͸֧����
.͸֧��������
.��ǰ͸֧�ܶ�

����Ҫ����,������ʵ�ֲ�ͬ

.ȡ��,Ҫ���ǵ�͸֧����
.��ʾ����������ʾBrassPlus�������˻���Ϣ

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
	Brass(const std::string &s = "Nullbody", long an = -1, double bal = 0.0);//�����˻�
	void Deposit(double amt);//���
	virtual void Withdraw(double amt);//ȡ��
	double Balance()const;//�˻����
	virtual void ViewAcct()const;//��ѯ�˻���Ϣ

	//��������

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
