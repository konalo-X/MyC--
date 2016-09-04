//
//  useBrass2.cpp
//  Brass
//
//  Created by XiongGuang on 16/8/9.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include "brass.h"
#include<iostream>
#include<string>
const int CLIENTS=2;


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    
    Brass * p_clients[CLIENTS];
    
    std::string temp;
    long tempnum;
    double tempbal;
    char kind;
    for (int i=0; i<CLIENTS; i++) {
        cout<<"Enter Client's name: ";
        getline(cin,temp);
        cout<<"Enter the client's number:";
        cin>>tempnum;
        cout<<"Enter opening balance: $";
        cin>>tempbal;
        cout<<"Enter 1 for Brass Account or\n 2 for BrassPluss Account :";
        while (cin>>kind &&(kind!='1' && kind!='2')) {
            cout<<"Enter 1 either 2: ";
            }
        
        if (kind=='1') {
            p_clients[i]=new Brass(temp,tempnum,tempbal);
        } else {
            double tmax,trate ;//tOB;
            
            cout<<"Enter the overdraft limit: $:";
            cin>>tmax;
            cout<<"Enter the interest rate\n as  a decimal fraction: ";
            cin>>trate;
            p_clients[i]=new BrassPlus(temp,tempnum,tempbal,tmax,trate);
            p_clients[i]->Withdraw(1900)
            ;
        }
        while (cin.get()!='\n') {
            continue;
        }
    }
    cout<<endl;
    for (int i=0; i<CLIENTS; i++) {
        p_clients[i]->ViewAcct();
        cout<<endl;
    }
    
    for (int i=0;i<CLIENTS;i++) {
        delete p_clients[i];//free memory
    }
    cout<<"Done ! \n";
    return 0;
}
