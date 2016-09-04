//
//  student1.h
//  C++中代码重用
//                                   私有且多重继承
//  Created by XiongGuang on 16/8/13.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef student1_h
#define student1_h
#include<iostream>
#include<string>
#include<valarray>

typedef std::valarray<double> ArrayDb;//用来存储学生分数

class Student:private std::string,private std::valarray<double>
{
private:
    
    //output scores
    std::ostream & arr_out(std::ostream & os) const;
public:
    /*
     double operator[](int i) const;
     double & operator[](int i);
     私有继承和保护继承 通过using 指令 可以绕过父类 用子类直接调用父类方法
     */
    
    using ArrayDb::operator[];
    
    
    Student():std::string("Nully Student"),ArrayDb(){};
    explicit Student(const std::string & s):std::string(s),ArrayDb(){};
    explicit Student(int n):std::string("Nully Student"),ArrayDb(n){};
    Student(const std::string & s,int n):std::string(s),ArrayDb(n){};
    Student(const std::string &s,const ArrayDb & a):std::string(s),ArrayDb(a){}
    Student(const char * str,const double *pd,int n):std::string(str),ArrayDb(pd,n){}
    
    ~Student(){}
    
    double Average() const ;
   // double operator[](int i) const;
   // double & operator[](int i);
    const std::string & Name()const;
    
    //friends
    
    //input
    
    friend std::istream & operator>>(std::istream & is,Student & stu);
    friend std::istream & getline(std::istream & is,Student & stu);
    
    //output
    friend std::ostream & operator<<(std::ostream & os, Student & stu);
    
};

#endif /* student1_h */
