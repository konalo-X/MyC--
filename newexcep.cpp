/*************************************************************************
	> File Name: newexcep.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  8/31 19:22:45 2016
 ************************************************************************/

#include<iostream>
#include<new>
#include<cstdlib>
using namespace std;
struct Big {
    double stuff[20000];
};

int main()
{
    Big *pb;
        pb=new(std::nothrow) Big[100000000000];

    if(pb==0){
        cout<<"Could not allcate memory.Bye\n";
        exit(EXIT_FAILURE);
    }
    return 0;
}





