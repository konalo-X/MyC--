//
//  functor.cpp
//  stl1
//
//  Created by XiongGuang on 16/9/11.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//  STL函数对象
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>


template <class T>
class TooBig {
private:
    T cutoff;
    
public:
    TooBig(const T &t):cutoff(t){}
    bool operator()(const T &val){return val>cutoff;}//值不固定，类型不固定
};
template<class T>
bool comp(const T &t,const T & val) {
    return val<t;//100 值固定，类型固定
}

template <class T>
class Comp {
private:
    T cutoff;
    
public:
    Comp(const T &t):cutoff(t){}
    bool operator()(const T &val){return comp<T>(val,cutoff);}//值不固定，类型不固定
};



void outint(int n){std::cout<<n<<" ";}

int main()
{
    using std::list;
    using std::cout;
    using std::endl;
    
    TooBig<int>f100(100);//设置cutoff 为100
   // int vals[10]={50,100,90,180,60,210,415,88,188,201};
    //list<int>yadayada(vals,vals+10);
    //list<int>etcetera(vals,vals+10);
    //C++11 支持初始化列表
    list<int>yadayada={50,100,90,180,60,210,415,88,188,201};
    list<int>etcetera={50,100,90,180,60,210,415,88,188,201};
    
    cout<<"Orginal lists: \n";
    for_each(yadayada.begin(),yadayada.end(),outint);
    cout<<endl;
    
   // for_each(etcetera.begin(),etcetera.end(),outint);
   // cout<<endl;
    int x;
    cout<<"input limit:";
    std:: cin>>x;
    yadayada.remove_if(Comp<int>(x));//-----------
   // etcetera.remove_if(TooBig<int>(200));//-------------
    
    cout<<"Trimmed lists: \n";
    for_each(yadayada.begin(),yadayada.end(),outint);
    cout<<endl;
    
   // for_each(etcetera.begin(),etcetera.end(),outint);
    //cout<<endl;
    
}