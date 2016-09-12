//
//  listmv.cpp
//  stl1
//
//  Created by 熊光 on 16/9/12.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include<list>
#include <algorithm>

void show(int);
const int LIM=10;

int main()
{
    using namespace std;
    int ar[LIM]={4,5,4,2,2,3,4,8,1,4};
    list<int> la(ar,ar+LIM);
    list<int>lb(la);
    
    cout<<"Original list contents:\n\t";
    for_each(la.begin(), la.end(), show);
    cout<<endl;
    la.remove(4);
    cout<<"After using the remove() method:\n";
    cout<<"la:\t";
    for_each(la.begin(), la.end(), show);
    cout<<endl;
    list<int>::iterator last;
    last=remove(lb.begin(), lb.end(), 4);
    cout<<"lb:\t";
    for_each(lb.begin(), lb.end(), show);
    cout<<endl;
    cout<<"超尾元素last="<<*last<<endl;
    lb.erase(last,lb.end());
    cout<<"After using earse() method:\n";
    cout<<"lb:\t";
    for_each(lb.begin(), lb.end(), show);
    cout<<endl;
    
    return 0;
}
void show(int n)
{
    std::cout<<n<<"  ";
}

