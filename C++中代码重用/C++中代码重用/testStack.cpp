//
//  testStack.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/15.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include"Stcktp1.hpp"
#include <iostream>

int main(){
Stack<const char *>Student(5);
    std::cout<<Student.isEmpty()<<std::endl;
    
    Student.push("konalo");
    Student.push("light");
    Student.push("konalo");
    Student.push("light");
    Student.push("konalo");
   // Student.push("light");
    std::cout<<Student.isEmpty()<<std::endl;
    const char * name[3];
    const char * outname[4];
    for (int i=0; i<3; i++) {
        Student.push(name[i]);
        
    }
  
    for (int i=0; i<4; i++) {
        Student.pop(outname[i]);
        //std::cout<<i<<" :"<<outname[i]<<std::endl;
    }
    for (int i=0; i<4; i++) {
       // Student.pop(outname[i]);
        std::cout<<i<<" :"<<outname[i]<<std::endl;
    }
    return 0;
}