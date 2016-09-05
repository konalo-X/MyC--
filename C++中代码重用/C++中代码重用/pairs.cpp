//
//  pairs.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/16.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

//#include <stdio.h>
#include<iostream>
#include<string>

template<class T1,class T2>
class Pairs
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    
    T1 first()const{return a;}
    T2 second()const{return b;}
    
    Pairs(const T1 & aval,const T2 & bval):a(aval),b(bval)
    {}
    Pairs(){}
};

//显式 (全部)具体化
template<>class Pairs<std::string,int>
{
private:
    std::string a;
    int b;
public:
    std::string & first();
    int & second();
    
    std::string first()const{return a;}
    int second()const{return b;}
    
    Pairs(const std::string & aval,const int & bval):a(aval),b(bval)
    {}
    Pairs(){}
};
//显示 部分具体化

template<class T1>class Pairs<T1, int>
{
private:
    std::string a;
    int b;
public:
    std::string & first();
    int & second();
    
    std::string first()const{return a;}
    int second()const{return b;}
    
    Pairs(const std::string & aval,const int & bval):a(aval),b(bval)
    {}
    Pairs(){}
};
template <class T1,class T2>
T1 & Pairs<T1,T2>::first()
{
    return a;
}
template <class T1,class T2>
T2 & Pairs<T1,T2>::second()
{
    return b;
}

int main()
{
    using std::endl;
    using std::cout;
    using std::string;
    
    Pairs<string,int>ratings[4]=
    {
        Pairs<string,int>("The Purpled Duck",5),
        Pairs<string,int>("Jaquie's Frisco Al fresco",4),
        Pairs<string,int>("Cafe Souffe",5),
        Pairs<string,int>("Bertie's Eats",3)
    };
    
    int joints = sizeof(ratings)/sizeof(Pairs<string,int>);
    cout<<"Rating:\t Eatery\n";
    
    for (int i = 0; i < joints; i++)
        cout<<ratings[i].second()<<"\t "
        <<ratings[i].first()<<endl;
    
    cout<<"Oops! Revised rating:\n";
    ratings[3].first()="Bertie's Fab Eats";
    ratings[3].second()=6;
    
    cout<<ratings[3].second()<<":\t "
    <<ratings[3].first()<<endl;
    
    return 0;

}