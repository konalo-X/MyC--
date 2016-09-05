//
//  Worker0.h
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/14.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//  从抽象基类worker 派生出 Waiter 类 和Singer 类
//  再从Waiter 类 和 Singer 类 共同派生出 SingerWaiter 类

#ifndef Worker0_h
#define Worker0_h

#include<string>
//申明一个抽象基类 worker
class Worker
{
private:
    std::string fullname;
    long id;
public:
    Worker():fullname("no one"),id(0L){}
    
    Worker(const std::string & s,long n):fullname(s),id(n){}
    
    virtual ~Worker()=0;//纯虚函数  抽象基类标志
    virtual void Set();
    virtual void Show()const;
};

//Worker 的一个派生类 Waiter

class Waiter:virtual public Worker
{
protected:
    int panache;//n. 羽饰；灿烂；耍派头
public:
    //构造函数
    //Waiter():Worker(),panache(0){}
    
    Waiter(int p=0):Worker(),panache(p){}
    
    Waiter(const std::string & s,long n,int p=0):Worker(s,n),panache(p){}
    
    Waiter(const Worker & wk,int p=0):Worker(wk),panache(p){}
    
    virtual void Set();
    virtual void Show()const;
    
    
};
// Worker 的另一个派生类 Singer

class Singer:virtual public Worker
{
protected:
    enum{other, alto,contralto,soprano,bass,baritone,tenor};//音色
    enum{Vtypes =7 };

    static char *pv[Vtypes];//存储声音类型(相应的C-风格 字符串)
    int voice;
public:
    Singer():Worker(),voice(other){}
    
    Singer(const std::string & s,long id,int v=other):Worker(s,id),voice(v){}
    
    Singer(const Worker & wk, int v=other):Worker(wk),voice(v){}
    
    virtual void Set();
    virtual void Show()const;
    
};
#endif /* Worker0_h */
