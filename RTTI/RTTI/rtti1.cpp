//
//  rtti1.cpp
//  RTTI 使用dynamic_cast 判断是否能安全转换指针，能则返回指针地址，否则返回0
//
//  Created by XiongGuang on 16/9/1.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
using namespace std;

class Grand
{
private:
    int hold;
public:
    Grand(int h=0):hold(h){}
    virtual void Speaker()const {cout<<"I am a grand class!! \n";}
    virtual int Value() const {return hold;}
    
};

class Superb:public Grand
{
public:
    Superb(int h=0):Grand(h){}
    void Speaker() const {cout<<"I am a superb class!! \n";}
    
    virtual void Say() const
        {cout<<" I Hold the superb value of "<<Value()<<"! \n";}
};

class Magnificent:public Superb
{
private:
    char ch;
public:
    Magnificent(int h=0,char c='A'):Superb(h),ch(c){}
    void speaker() const {cout<<" I am a magnificent class!!!!\n";}
    void Say()const {cout<<"I hold the character: "<<ch<<" and the integer "<<Value()
        <<"!\n";}
};

Grand * Getone();

int main()
{
    /*    //////---------rtti1
    std::srand(std::time(0));
    Grand * pg;
    Superb *ps;
    for (int i=0; i<5; i++) {
        pg=Getone();
        pg->Speaker();
        if ((ps=dynamic_cast<Superb *>(pg))) {
            ps->Say();
        }
    }
    cout<<"-----------------------------------\n";
    cout<<typeid(Magnificent).name()<<std::endl;
     */
    //------------------Rtti2
   srand(time(0));
    Grand *pg;
    Superb * ps;
    for (int i=0; i<5; i++) {
        pg=Getone();
        cout<<"Now processing type "<<typeid(*pg).name()<<".\n";
        pg->Speaker();
        if ((ps=dynamic_cast<Superb *>(pg))) {
            ps->Say();
        }
        if (typeid(pg)==typeid(Magnificent)) {
            cout<<" Yes , your are really magnificent.\n";
        }
    }
    return 0;
}

Grand * Getone()
{
    Grand *p;
    switch (std::rand()%3) {
        case 0:
            p=new Grand(std::rand()%100);
            break;
        case 1:
            p=new Superb(std::rand()%100);
            break;
        case 2:
            p=new Magnificent(std::rand()%100,'A'+std::rand()%26);
            break;
    }
    return p;
}