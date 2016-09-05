//
//  str1.cpp
//  string
//
//  Created by XiongGuang on 16/9/1.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include<string>
#include<iostream>

//使用string 构造函数
int main()
{
    using namespace std;
    string str;
    cin>>str;
    string ch;
    cin>>ch;
    cout<<str<<ch<<endl;
    /*
    string one("Lottery Winner!");//使用构造函数 string(const char *s)
    cout<<one<<endl;
    string two(20,'$');//使用构造函数 string（size_type n,char c)
    cout<<two<<endl;
    string three(one);//string（const string &str）//复制构造函数
    cout<<three<<endl;
    one+=" Oops!"; //重载+=运算符
    cout<<one<<endl;
    two="Sorry! that was ";
    three[0]='P';
    string four;//默认构造函数
    four=two+three;//重载+ ，=
    cout<<four<<endl;
    
    char alls[]="All's well that ends well";
    string five(alls,20);//string(const char * s,size_type n)
    cout<<five<<endl;
    string six(alls+6,alls+10);//template<class Iter>string(iter begin,Iter end)
    cout<<six<<endl;
    string seven(&five[6],&five[10]);//template<class Iter>string(iter begin,Iter end)
    cout<<seven<<"------------"<<endl;
    string eight(four,7,16);//string(const string &str,string size_type pos=0,size_type n=npos)
    cout<<eight<<"in motion!"<<endl;
     */
    return 0;
}