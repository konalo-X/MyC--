//
//  acctABC.hpp
//  abstract class
//
//  Created by XiongGuang on 16/8/9.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef acctABC_hpp
#define acctABC_hpp

#include <stdio.h>
#include<iostream>
#include<string>

class AcctABC//抽象基类
{
private:
    std::string fullname;
    long acctNum;
    double balance;
protected:
    struct Formatting
    {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string &Fullname()const{return fullname;}
    long Acctnum()const{return acctNum;}
    Formatting SetFormat()const;
    void Restore(Formatting &f)const;
public:
    AcctABC(const std::string &s="Nullbody",long an=-1,double bal=0.0);
    void Desposit(double amt);
    virtual void Withdraw(double amt)=0;//纯虚函数
    double Balance()const{return balance;}
    virtual void ViewAcct()const =0 ;
    
    virtual ~AcctABC(){}
    
};
//brass account class
class Brass:public AcctABC
{
public:
    Brass(const std::string &s="Nullbody",long an=-1,double bal=0.0):AcctABC(s,an,bal)
    { }
    virtual void Withdraw(double amt);
    virtual void ViewAcct()const;
    virtual ~Brass(){}
};
//brassplus class account
class BrassPluss:public AcctABC
{
private:
    double maxLoan;
    double owesBank;
    double rate;
public:
    BrassPluss(const std::string &s="Nullbody",long an=-1,double bal=0.0,double ml=500,double r=0.10);
    BrassPluss(const Brass &ba,double ml=500,double r=0.10);
    virtual void Withdraw(double amt);
    virtual void ViewAcct()const;
    void ResetMax(double m){maxLoan=m;}
    void ResetRate(double r){rate=r;}
    void ResetOwes(){owesBank=0;}
    
};
#endif /* acctABC_hpp */
