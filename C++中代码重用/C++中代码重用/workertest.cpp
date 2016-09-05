//
//  workertest.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/14.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include "Worker0.h"
#include "Worker1.h"
#include <iostream>

const int LIM=5;
using std::cout;
using std::endl;
int main()
{
    Waiter Bob("Bob Apple",314L,5);
    Singer bev("Beverly Hills",522L,3);
    Waiter w_temp;
    Singer S_temp;
    SingerWaiter sw_temp;
    Worker * pw[LIM]={&Bob,&bev,&w_temp,&S_temp,&sw_temp};
    
    int i;
    for (i=4; i<LIM; i++) {
        pw[i]->Set();
    }
    
    for (i=4; i<LIM; i++) {
        pw[i]->Show();
        cout<<endl;
    }
    return 0;
}