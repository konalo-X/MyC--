//
//  do_while.cpp
//  C
//
//  Created by XiongGuang on 16/4/17.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int  main(){
    int i;
    do{
        cout<<"input a num";
        //int i;
        cin>>i;
    }while(i!=7);
    for(;;){
        i++;
       
        if (i==20) {
            break;
        }
         cout<<"i="<<i;
    }
    
        
}