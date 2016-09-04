//
//  str2.cpp
//  string
//
//  Created by XiongGuang on 16/9/3.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//
/*
 capacity()//返回当前字符串分配的空间大小
 reserve()//请求内存块的最小长度
 */
#include <stdio.h>
#include<iostream>
#include <string>
#include<fstream>
int main()
{
    using namespace std;
    
    string empty;
    string small="bit";
    string langer="Elephants are a girl's best friend";
    cout<<"Size: \n";
    cout<<"\tempty: "<<empty.size()<<endl;
    cout<<"\tsmall: "<<small.size()<<endl;
    cout<<"\tlarger: "<<langer.size()<<endl;
    
    cout<<"Capacities: \n";
    cout<<"\tempty: "<<empty.capacity()<<endl;
    cout<<"\tsmall: "<<small.capacity()<<endl;
    cout<<"\tlarger: "<<langer.capacity()<<endl;
    
    empty.reserve(50);//请求分配内存
    cout<<" Capacity after empty.reserve(50): "
    <<empty.capacity()<<endl;
    open()
    return 0;
}
