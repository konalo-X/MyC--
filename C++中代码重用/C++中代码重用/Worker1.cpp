//
//  Worker1.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/14.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include "Worker0.h"
#include "Worker1.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
void SingerWaiter::Set()
{
    Worker::Set();
    cout<<"Enter number for SingerWaiter's voice range:\n";
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
    
    cout<<"Enter the SingerWaiter's panache:";
    cin>>panache;
    while (cin.get()!='\n') {
        continue;
    }
    
}

void SingerWaiter::Show()const
{
    std::cout<<"Category SingerWaiter \n";
    
    Worker::Show();
    std::cout<<"Voice type: "<<Singer::pv[voice]<<std::endl;
    std::cout<<"Panache rating: "<<panache<<std::endl;
}
