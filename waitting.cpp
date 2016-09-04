//
//  waitting.cpp
//  C
//
//  Created by XiongGuang on 16/4/17.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    cout<<"Enter the delay time ,in system_time: ";
    float secs;
    cin>>secs;
    clock_t delay =secs * CLOCKS_PER_SEC;
    cout<<"strating \a\n";
    clock_t start=clock();
    while(clock()-start< delay)
      // cout<<"\a"
        ;
    cout<<"done \a\n";
    return 0;
    
}
