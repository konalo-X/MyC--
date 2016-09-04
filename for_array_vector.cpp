//
//  for_array_vector.cpp
//  C
//
//  Created by XiongGuang on 16/4/17.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include<vector>
using namespace std;
int main(){
    int i;
    vector<int>v(5);
    double d[5];
    for(int i=0;i<5;i++){
        v[i]=i;
        d[i]=i;
    }
    for(double x:d){
        cout<<x<<endl;
    }
    for(int x:v){
        cout<<x<<endl;
    }
}