//
//  studenti.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/13.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include "student1.h"
#include<iostream>
using std::ostream;
using std::istream;
using std::cout;

//private method
ostream &  Student::arr_out(ostream & os)const
{
    
    int i=0;
    int lim=ArrayDb::size();
    if (lim>0)
    {
        for (i=0; i<lim; i++) {
            os<<ArrayDb::operator[](i)<<" ";//只存在类名，没有对象，只能使用
        }
        cout<<std::endl;
    }
        
        else
        os<<"Scores is empty \n";
    return os;
}

//public methods
double Student::Average() const
{
    return ArrayDb::sum()/ArrayDb::size();
}

 const std::string & Student::Name()const
{
    return (std::string &) *this;// name 是本身 ，从string 继承过来的，强制转换成string
}
/*
double & Student::operator[](int i)
{
    return ArrayDb::operator[](i);
}

double Student::operator[](int i)const
{
    return ArrayDb::operator[](i);
}
*/
//friend methods

std::istream & operator>>(std::istream & is,Student & stu)
{
    
    is>>stu;
    return is;
}
std::istream & getline(std::istream & is,Student & stu)
{
    getline(is,(std::string &)stu);
    return is;
}

std::ostream & operator<<(std::ostream & os, Student & stu)
{
    os<<(std::string &)stu<<std::endl;
    stu.arr_out(os);
    return os;
}


