/*************************************************************************
	> File Name: testrand.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/ 1 21:38:01 2016
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;
int main()

{
    srand(time(0));
    for(int i=0;i<5;i++)
    cout<<"输出随机数："<<rand()<<endl;
    return 0;

}
