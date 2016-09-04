//
//  tempmemb.cpp
//  C++中代码重用
//  成员模板----------模板可用作结构、类、或模板类的成员
//  Created by XiongGuang on 16/8/17.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include "tempmemb.h"
using std::cout;
using std::endl;
template <class T>
template <class U>
U  beta<T>::blab(U u,T t) {
    return (n.Value()+q.Value())*u/t;
}



int main()
{
    beta<double> guy(3.5,3);
    
    cout<<"T was set to double\n";
    guy.show();
    
    cout<<"V was set to T, which is double,then V was set to int\n";
    
    cout<<guy.blab(10, 2.3)<<endl;
    cout<<"U was set to int \n";
    cout<<guy.blab(10.0, 2.3)<<endl;
    cout<<"U was set to double\n";
    cout<<"Done\n";
    return 0;
}