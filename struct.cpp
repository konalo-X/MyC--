//
//  struct.cpp
//  C
//
//  Created by XiongGuang on 16/4/15.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include "struct.hpp"
#include<iostream>
using namespace std;
struct mystruct
{
    char name[10];
    int age;
};


mystruct* getst()
{   mystruct *p=new mystruct[3];
    
    for (int i=0; i<3; i++)
    {
        cout<<"輸入name:\n";
    //    cout<<"p="<<p<<endl;
        cin.getline(p[i].name,10);
        //    cout<<"p="<<p<<endl;
      //  cin.get();
        cout<<"輸入age:\n";
        
        cin>>p[i].age;
        cin.get();
        
   //     p++;
    }
    cout<<"p="<<p;
    return p;
    
}

int main()
{
    ////  mystruct s[3]={{"lij",89},{"hu",7},{"ki",9}};
    
    mystruct *m=getst();
  //  cout<<"getst()="<<m<<endl;
    
    for (int i=0; i<3; i++)
    {
        cout<<"輸出&m: "<<m;
        cout<<"輸出name: "<<m[i].name<<"  輸出age :"<<m[i].age<<endl;
        //    m=m+1;
    }
    return 0;
}
//初始化

//輸出
void outprint()
{
    
}