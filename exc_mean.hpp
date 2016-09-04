/*************************************************************************
	> File Name: ObError.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  8/30 20:27:47 2016
 ************************************************************************/

#include<iostream>
using namespace std;
class bad_hmean
{
    private:
        double v1;
        double v2;
    public:
        bad_hmean(int a=0,int b=0):v1(a),v2(b){}
        void mesg();

};
inline void bad_hmean::mesg()
{
    cout<<"heman("<< v1 <<" , "<<v2<<"): "
    <<"invalid arguments a=-b \n";
}

class bad_gmean
{
    public:
    double v1;
    double v2;
    bad_gmean(double a=0,double b=0):v1(a),v2(b){}
    const char* mesg();
};

inline const char* bad_gmean::mesg()
{
    return "gmean () srguments should be >0 \n";
}
