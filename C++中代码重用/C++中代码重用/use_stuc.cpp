//
//  use_stuc.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/12.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "studentc.h"
using std::cin;
using std::cout;
using std::endl;

void set(Student & sa,int n);

const int pupils=3;
const int quizzes=5;

int  main1()
{
    Student ada[pupils]=
    {Student(quizzes),Student(quizzes),Student(quizzes)};//代表3个学生，每组学生5 个分数
    int i;
    for (i=0; i<pupils; i++) {
        set(ada[i], quizzes);
        
    }
    cout<<"\n Student list: \n";
    for (i=0;i<pupils; i++) {
        cout<<ada[i].Name()<<endl;
        
    }
    cout<<"\n Result: ";
    for (i=0; i<pupils; i++) {
        cout<<endl<<ada[i];
        cout<<"Average: "<<ada[i].Average()<<endl;
    }
    cout<<"Done !\n";
    
    
    return 0;
}

void set(Student & sa, int n)
{
    cout<<"Please enter Student's name: ";
    getline(cin,sa);
    cout<<"please enter "<<n<<" quiz Scores: \n";
    for (int i=0;i<n;i++)
        cin>>sa[i];
    while (cin.get()!='\n') {
        continue;
    }
}
