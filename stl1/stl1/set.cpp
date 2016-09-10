//
//  set.cpp
//  stl1
//
//  Created by XiongGuang on 16/9/11.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iterator>
#include <set>
#include <list>
#include <fstream>
const int NUM=6;

int main()
{
    using namespace std;
    fstream fin;
    fin.open("/Users/konalo/MyC--/data.txt");
    string s1[6]={"buffoon","thinkers","for","heavey","can","for"};
    set<string>A(s1,s1+NUM);
    list<string>B;
    ostream_iterator<string,char> out(cout," ");

    copy(A.begin(), A.end(), out);
    cout<<endl<<"input:";
    
    copy(istream_iterator<string,char>(fin), istream_iterator<string,char>(),
         insert_iterator<list<string> >(B,B.begin()));
            cout<<"输出流：";
    copy(B.begin(), B.end(), out);
    cout<<endl;
    fin.close();
    return 0;
}