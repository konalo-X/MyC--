//
//  Arrfun.cpp
//  C
//
//  Created by XiongGuang on 16/4/20.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include "Arrfun.hpp"
#include<iostream>
#include<string>
using namespace std;
int Arsize;
string str;
int sum_Arr(int arr[],int n);
int main( ){
    int cookies[]={1,2,4,8,16,32,64,128};
   
    /*for(int x:cookies){
        cout<<x<<endl;
    };
     */
    Arsize=  sizeof(cookies)/4;
    str="konalo";
    
    
    int sum=sum_Arr(cookies, Arsize);
  cout<<"Total cookies eaten :"<<sum<<"\n";
    cout<<"-------------------------------------\n";
    for (int x:cookies) {
        cout<<x;
    }
    cout<<"-------------------------------------\n";
    return 0;
}


int sum_Arr(int arr[],int n){
     int Total=0;
    for(int i=0;i<n;i++){
        arr[i]=i;
        Total+=arr[i];
        
    }
    return Total;
   
}
//int sum_Arr(int Arr[],int n){
//    int Total=0;
//    for (int i=0; i<n; i++) {
//        Total+=Arr[i];
//    }
//    return Total;
//}
