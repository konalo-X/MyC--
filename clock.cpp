//
//  clock.cpp
//  C
//
//  Created by XiongGuang on 16/4/17.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include "clock.hpp"
#include <ctime>
#include <iostream>
using namespace std;
int main()  {
    
    clock_t start=clock();//clock () 返回值为 程序开始运行到现在的时间 单位为系统时间 CLOCKS_PER_SEC
    cout<<"请输入暂停秒数：";
    int sec;
    cin>>sec;
    clock_t delay=sec*CLOCKS_PER_SEC;
    while(clock()-start<delay){
    
    }
    cout<<"暂停结束！";
    typedef int* p2int;
    p2int p=new int[3];
    p[0]=1;
    
    
}
