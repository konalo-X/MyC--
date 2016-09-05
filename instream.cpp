/*************************************************************************
	> File Name: instream.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  9/ 2 21:53:38 2016
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
ifstream fin;
fin.open("testrand.cpp");
string str;
while(getline(fin,str))
{
    cout<<str<<endl;;
}
cout<<"done!";
return 0;
}
