//
//  use_stui.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/13.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include"student1.h"
#include <iostream>
using std::cin;
using std::endl;
using std::cout;

const int pupils=3;
const int quizzes=5;
int main()
{
    Student ada[pupils]=
                    {Student(quizzes),Student(quizzes),Student(quizzes)};
    
    void set(Student & sa,int n);
    
    for (int i=0; i<pupils; i++) {
        
        set(ada[i], quizzes);
    }
    
    //out
    cout<<" Student List \n";
    for (int i=0; i<pupils; i++) {
        cout<<ada[i].Name()<<endl;;
    }
    
    for (int i=0; i<pupils; i++) {
        cout<<ada[i];
    }
    
    
}


void set(Student & sa,int n)
{
    cout<<"Enter name: ";
    getline(cin,sa);
    cout<<"Enter scroes of " <<n<<":";
    for (int i=0; i<n; i++) {
        cin>>sa[i];
        
        }
    while (cin.get()!='\n') {
        continue;
    }
}
   

