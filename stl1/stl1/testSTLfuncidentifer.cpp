//
//  testSTLfuncidentifer.cpp
//  stl1
//
//  Created by XiongGuang on 16/9/11.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <math.h>
#include <iterator>
#include <vector>
#include <stdlib.h>
const int LIM=6;
double arr1[LIM]={1,-1,1,1,1,1};
double arr2[6]={36,39,42,45,48,89.9};
using namespace std;
vector<double>gr8(arr1,arr1+6);
vector<double>m8(arr2,arr2+6);


template<class T>
class Adatper {
private:
   const double times;
    
public:
    Adatper(const T &t):times(t){}
    T operator()(const T &val){return multiplies<T>()(val,times);}
};

ostream_iterator<double,char>out(cout," ");
int main()
{
    /*
    transform(gr8.begin(), gr8.end(), out,sqrt);
    cout<<endl;
    transform(gr8.begin(), gr8.end(), m8.begin(), out, minus<double>());
    
    cout<<endl;
    transform(gr8.begin(), gr8.end(), m8.begin(), out, multiplies<double>());
    
    cout<<endl;
    transform(gr8.begin(), gr8.end(), m8.begin(), out, divides<double>());
    
    cout<<endl;
   // cout<<"%"<<endl;
    transform(gr8.begin(), gr8.end(), m8.begin(), out, modulus<int>());
    
    cout<<endl;
    cout<<"logical_or";
    transform(gr8.begin(), gr8.end(), m8.begin(), out, logical_and<double>());
    */
    cout<<endl;
    //Adatper <double>ada(2.5);
    //自定义一个转换器，将二元函数转换为一元
    transform(gr8.begin(), gr8.end(), out, Adatper<double>(2.5));
    
    cout<<endl;
    
    
    transform(gr8.begin(), gr8.end(), out,bind1st(multiplies<double>(),2.5));
    
    
    
    cout<<endl;
}