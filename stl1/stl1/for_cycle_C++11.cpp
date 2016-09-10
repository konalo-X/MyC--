//
//  for_cycle_C++11.cpp
//  vector
//
//  Created by XiongGuang on 16/9/8.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//
//基于迭代器为STL而设计的for循环
#include <stdio.h>
#include <iostream>
#include<vector>
std::vector<double> nums;
int main(){
    
    void increment(double &d);
    double d[5]={4.99,10.99,6.87,7.99,8.49};
    for (double X:d)
    {
        increment(X);
        nums.push_back(X);
    }
    int i=0;
    for (double X:nums) {
        
        std::cout<<"price["<<i++<<"]= "<<X<<std::endl;
    }
    return 0;
}
void increment(double &d){
    d++;
}