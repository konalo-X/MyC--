/*************************************************************************
	> File Name: error4.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  8/30 21:07:38 2016
 ************************************************************************/

#include<iostream>
#include<cmath>
#include"exc_mean.hpp"
using namespace std;
double hmean(double a,double b);
double gmean(double a,double b);

int main()
{
    double x,y,z;
    cout<<"Enter two numbers: ";
    while(cin>>x>>y)
    {
        try
        {
            z=hmean(x,y);
            cout<<"Harmonic mean of "<<x<<" and "<<y<<" is "<<z<<endl;
            cout<<"Geometric mean of "<<x<<" and "<<y<<" is "<<gmean(x,y)<<endl;
            cout<<"enter next set of numbers <q to quit> : ";
        }
        catch(bad_hmean &bh)
        {
            bh.mesg();
            cout<<"Try again! \n";
            continue;
        }
        catch(bad_gmean &bg)
        {
            cout<<bg.mesg();
            rout<<"Values uere "<<bg.v1<<" , "<<bg.v2<<endl;
            cout<<"Sorry ,you don't play again. \n";
            break;
        }
    }
    cout<<"Bye! \n";
    return 0;
}

double hmean(double a,double b)
{
    if(a==-b){
    bad_hmean A=bad_hmean(a,b);
    throw A;
    }
    return 2.0*a*b/(a+b);
}
double gmean(double a, double b)
{
    if(a<0||b<0){
    bad_gmean B=bad_gmean(a,b);
    throw B;
    }
    return sqrt(a*b);
}

