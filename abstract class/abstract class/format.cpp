//
//  format.cpp
//  abstract class
//
//  Created by XiongGuang on 16/8/10.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
struct formatting {
    ios_base::fmtflags flag;
    streamsize pr;
};

formatting f;
int main( )
{
    formatting setFormat();
    void Restore(formatting &f);
    double num=999.2333321;
    cout<<"num= "<<num<<endl;
    setFormat();
    cout<<"num= "<<num<<endl;
    Restore(f);
    cout<<"num= "<<num<<endl;
    return 0;
}

formatting setFormat()
{
    f.flag=cout.setf(ios_base::fixed,ios_base::floatfield);
    f.pr= cout.precision(4);
    return f;
}
void Restore(formatting &f)
{
    cout.setf(f.flag,ios_base::floatfield);
    cout.precision(f.pr);
}