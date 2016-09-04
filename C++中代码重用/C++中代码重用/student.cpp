//
//  student.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/12.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

//#include <stdio.h>
//#include <iostream>
#include "studentc.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

//public methods

double Student::Average()const
{
    if (scores.size()>0) {
        return scores.sum()/scores.size();
    }
    else
        return 0;
}

const string & Student::Name()const
{
    return name;
}

double & Student::operator[](int i)//数组第i个元素
{
    return scores[i];
}

double Student::operator[](int i)const//读取第i个元素
{
    return scores[i];
}

//private methods

ostream & Student::arr_out(std::ostream &os)const
{
    int i;
    int lim=scores.size();
    if (lim>0) {
        for (i=0; i<lim; i++) {
            os<<scores[i]<<" ";
            if (i%5==4)
                os<<endl;
           }
            if (i%5!=0)
                os<<endl;
            }
    else
        os<<" Empty array ";
    return os;
}

//friend
//using string version of operator>>()
istream & operator>>(std::istream & is,Student & stu)
{
    is>>stu.name;
    return is;
}

//use string friend getline(istream & is ,Student & stu)

istream & getline(istream & is, Student & stu)
{
    getline(is, stu.name);
    return is;
}

//use string version of operator<<()
ostream & operator<<(ostream & os,const  Student & stu)
{
    os<<"Scores for "<<stu.name<<" \n";
    stu.arr_out(os);//use private methods for scores
    return os;
}