/*************************************************************************
	> File Name: testabort.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  8/29 21:57:22 2016
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;
//检查一个输入是否为数字
int main()
{
    double a;
    while(cin>>a)
    {
        cout<<"next input: ";
        abort();
    }
    cout<<"bye";
    return 0;
}

