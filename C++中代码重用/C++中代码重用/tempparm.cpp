//
//  tempparm.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/18.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include"stacktp.hpp"


template <template <typename T>class Thing>
class Carb {
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Carb(){};
    
    bool push(int a,double x){return s1.push(a) && s2.push(x);}
    bool pop(int &a,double &x){return s1.pop(a) && s2.pop(x);}
        
};
int i=0;
int a[9];
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    Carb<Stack> nebula;
    
    int ni;
    double nb;
    cout<<"Enter int double pairs,such as 4 3.5 (q to quit):\n";
    while (cin>>ni>>nb && ni>0 &&nb>0 ) {
           // nebula.push(ni, nb);
        if(!nebula.push(ni, nb))
        {
        cout<<"输入结束！\n";
            break;
        }
    }
    while (nebula.pop(ni, nb))
        cout<<ni<<", "<<nb<<endl;
        cout<<"Done! \n";
    
}
