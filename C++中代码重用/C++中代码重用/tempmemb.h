//
//  tempmemb.h
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/18.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef tempmemb_h
#define tempmemb_h
#include <stdio.h>
#include<iostream>
using std::cout;
using std::endl;

template <typename T>
class beta {
private:
    template <class V>
    class hold
    {
    private:
        V val;
    public:
        hold(V v=0):val(v){}
        void Show()const{cout<<val<<endl;}
        V Value()const{return val;}
    };
    hold<T> q;
    hold<int>n;
public:
    beta(T t,int i):q(t),n(i){}
    template <typename U>
    U blab(U u,T t);//{return (n.Value()+q.Value())* u/t;}
    void show() const{q.Show();n.Show();}
};

#endif /* tempmemb_h */
