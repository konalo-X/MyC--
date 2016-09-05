//
//  main.cpp
//  test
//
//  Created by XiongGuang on 16/9/2.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...

    //char str3[10]="hello";
    string str1="hello wold!";
    //int len=strlen(str3);
    //str3[len]=0;
    //str3=string(0);
    cout<<str1<<endl;;
    cout<<"length()= "<<str1.length()<<endl;
    cout<<"size() = "<<str1.size()<<endl;
    
    cout<<"o位于："<<str1.rfind('l')<<endl;//find 最后一次出现的位置
    cout<<str1.find_last_of('l');
    cout<<str1.find_first_of('l');
    return 0;
}
