//
//  acctABC.cpp
//  abstract class
//
//  Created by XiongGuang on 16/8/9.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include "acctABC.hpp"
#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios_base;
//Abstract base class
AcctABC::AcctABC(const std::string& s,long an,double bal)
{
    fullname=s;
    acctNum=an;
    balance=bal;
}
void AcctABC::Desposit(double amt){
    if (amt<0) {
        cout<<"Negetive Desposit not allowed\n";
        cout<<"Desposit cancelled\n";
    } else {
        balance+=amt;
    }
}

void AcctABC::Withdraw(double amt)
{
    balance-=amt;
    
}

//protected methods for formatting

AcctABC::Formatting AcctABC::SetFormat()const//格式以结构体表示
{
    Formatting f;
    f.flag=cout.setf(ios_base::fixed,ios_base::floatfield);
    f.pr=cout.precision(2);
    return f;
    }

void AcctABC::Restore(Formatting &f)const
{
    cout.setf(f.flag,ios_base::floatfield);
    cout.precision(f.pr);
}


//brass methods
void Brass::Withdraw(double amt)
{
    if(amt<0)
        cout<<"Withdraw amount must be positive ;"
        <<"wtihdraw cancelled \n";
    else if (amt<=Balance())
        AcctABC::Withdraw(amt);
    else
        cout<<"Withdraw amount of $"<<amt<<" exceeds your balance. \n"<<
        "Withdraw cancelled. \n";
}

void Brass::ViewAcct()const
{
    Formatting f=SetFormat();
    cout<<"Brass Client: "<<Fullname()<<endl;
    cout<<"Account Number: "<<Acctnum()<<endl;
    cout<<"Balance: $"<<Balance()<<endl;
    Restore(f);
}

//BrassPlus methods

BrassPluss::BrassPluss(const std::string &s,long an,double bal,double ml,double r)
:AcctABC(s,an,bal)
{
    maxLoan=ml;
    rate=r;
    owesBank=0.0;
}
BrassPluss::BrassPluss(const Brass &ba,double ml,double r):AcctABC(ba)
{
    maxLoan=ml;
    rate=r;
    owesBank=0.0;
}

void BrassPluss::ViewAcct()const
{
    Formatting f=SetFormat();
    
    cout<<"BrassPlus Clients: "<<Fullname()<<endl;
    cout<<"Account Number: "<<Acctnum()<<endl;
    cout<<"Balance: $"<<Balance()<<endl;
    cout<<"Maximum loan: $"<<maxLoan<<endl;
    cout<<"Owed to Bank: $"<<owesBank<<endl;
    cout.precision(3);
    cout<<"Loan Rate : "<<100*rate<<"% \n";
    
    Restore(f);
}

void BrassPluss::Withdraw(double amt)
{
    Formatting f=SetFormat();
    
    double bal=Balance();
    if(amt<bal)
        AcctABC::Withdraw(amt);
    else if (amt<=bal+maxLoan-owesBank)//设owesBank 0；
    {
        double advance=amt-bal;  //advance 为预支银行钱
        owesBank+=(rate+1)*advance;//
        cout<<"Bank advance: $"<<advance<<endl;
        cout<<"Finance charge: $"<<advance*rate<<endl;
        Desposit(advance);//////////////////////////////???
        AcctABC::Withdraw(amt);
    }
    else
        cout<<"Credit limit exceeds. Transaction cancelled. \n";
    Restore(f);
    
}



































