//
//  Woker0.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/14.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include "Worker0.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//worker methods

//这里必须实现 虚 析构函数 ，哪怕是 纯虚函数（纯虚函数 不一定非要定义，视情况而定）

Worker::~Worker(){}

void Worker::Set()
{
    cout<<"Enetr the Worker's name: ";
    getline(cin,fullname);
    cout<<"Enter worker's ID: ";
    cin>>id;
    while (cin.get()!='\n') {
        continue;
    }
}

void Worker::Show()const
{
    cout<<"Name: "<<fullname<<"\n";
    cout<<"ID: "<<id<<"\n";
}

//Waiter's Methods

void Waiter::Set()
{
    Worker::Set();
    cout<<"Enter the Waiter's panache:";
    cin>>panache;
    while (cin.get()!='\n') {
        continue;
    }
}

void Waiter::Show()const
{
    cout<<"Category: Waiter\n";
    Worker::Show();
    cout<<"Panache rating: "<<panache<<endl;
}

//Singer's nethods

char * Singer::pv[]={"other","alto","contralto","soprano","bass","baritone","tenor"};

void Singer::Set()
{
    Worker::Set();
    cout<<"Enter number for Singer's voice range:\n";
    int i;
    for (i=0; i<Vtypes; i++) {
        cout<<i<<" : "<<pv[i]<<"  ";
        if(i%4==3)
            cout<<endl;
    }
    if(i%4!=0)
        cout<<endl;
    while (cin>>voice&&(voice<0||voice>=Vtypes)) {
        cout<<"Please enter a Value >=0 and <"<<Vtypes<<endl;
    }
    while (cin.get()!='\n') {
        continue;
    }
}

void Singer::Show()const
{
    cout<<"Category: Singer \n";
    Worker::Show();
    cout<<"Voice type: "<<pv[voice]<<endl;
}