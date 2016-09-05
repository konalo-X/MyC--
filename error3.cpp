/*************************************************************************
	> File Name: error3.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  8/29 23:06:52 2016
 ************************************************************************/

#include<iostream>
using namespace std;
//try catch throw 异常处理机制

double hmean(double a, double b);

int main()
{
    double x,y,z;
    cout<<"Enter two numbers: ";
    while(cin>>x>>y)
    {
        try{
            z=hmean(x,y);
        }
        catch(int s)//const char * s)
        {
            cout<<s<<endl;
            cout<<"Enter a new pair of numbers: ";
            continue;
        }

        cout<<"Harmonic mean of  "<<x<<" and "<<y<<" is "<<z<<endl;
        cout<<"Enter next set of numbers <q to quit> : ";
    }
    cout<<"Bye ! \n";
}

double hmean(double a, double b)
{
    if(a==-b)
    throw 00000;//"bad hmean(  ) arguements : a= -b not allowed ! ";
    return 2.0*a*b/(a+b);
}
