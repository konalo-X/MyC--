//
//  queue.cpp
//  stl1
//
//  Created by XiongGuang on 16/9/10.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <queue>
#include <iostream>

int main()
{
    using namespace std;
    queue<int>qu;
    for (int i=0; i<100; i++)
    qu.push(i);
    cout<<"Size of qu: "<<qu.size()<<endl;;
    cout<<"Front of qu: "<<qu.front()<<endl;
    while (qu.size()>0) {
        qu.pop();
        cout<<qu.back()<<endl;
        if (qu.front()==65) {
            break;
        }
    }
    cout<<"----"<<qu.front()<<endl;
    bool state=qu.empty();
    string str=   state? "Ture":"False";
    cout<<str<<"done";
    
    
    return 0;
}