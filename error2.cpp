/*************************************************************************
	> File Name: error2.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  8/30 20:06:06 2016
 ************************************************************************/

#include<iostream>
#include<cfloat>
using namespace std;
bool hmean(double a,double b,double *ans);

int main()
{
    double x,y,z;
    cout<<"Enter two nubers< q to quit >:";
    while(cin>>x>>y)
    {
        if(hmean(x,y,&z)){
            
        
        cout<<"heman() of "<<x<<" and "<<y<<" is "<<z;
            cout<<"enter two numbers <q to quit>:";
        }
            else
        cout<<"a=-b ,please input again<q to quit>:";
    }


}


bool hmean(double a,double b,double *ans)
{
    if(a==-b)
    {
        *ans=DBL_MAX;
        return false;
    }
    else
    {
       *ans=2.0*a*b/(a+b);
        return true;
    }
}
