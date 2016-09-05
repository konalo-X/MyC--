//
//  studentc.h
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/12.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef studentc_h
#define studentc_h
#include<valarray>
#include<iostream>
#include<string>

class Student
{
private:
    typedef std::valarray<double> ArrayDb;
    std::string name;          //姓名类
    ArrayDb scores;   //分数类,存储一系列分数
    //private method for scores output //输出分数
    std::ostream & arr_out(std::ostream & os)const;
public:
    //构造函数
    Student():name("Null student"),scores(){}
    explicit Student(const std::string &s):name(s),scores(){}//explicit 显式
    explicit Student(int n):name("Nully"),scores(n){}
    Student(const std::string &s,int n):name(s),scores(n){}
    Student(const std::string & s ,const ArrayDb & a):name(s),scores(a){}
    Student(const char * str,const double * pd,int n):name(str),scores(pd,n){}
    //析构函数
    ~Student(){}
    //取平均值
    double Average() const;
    //返回名字
    const std::string & Name()const;
    
    double & operator[](int i);
    double operator[](int i)const;
    
    //friends
    //input
    friend std::istream & operator>>(std::istream & is,Student & stu);//1 word
    
    friend std::istream & getline(std::istream & is,Student & stu);//1 line
    
    //output
    
    friend std::ostream & operator<<(std::ostream & os,const Student & stu);
};



#endif /* studentc_h */
