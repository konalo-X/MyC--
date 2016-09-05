//
//  usebrass3.cpp
//  abstract class
//
//  Created by XiongGuang on 16/8/9.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <iostream>
#include "acctABC.hpp"
#include <string>

const int CLIENTS=4;
int main1(){
    
    using std::cin;
    using std::cout;
    using std::endl;
    
    AcctABC *p_client[CLIENTS];
    std::string temp;
    long tempnum;
    double tempbal;
    char kind;
    
    for (int i=0; i<CLIENTS; i++) {
        cout<<"Enter Client's name: ";
        getline(cin, temp);
        cout<<"Enter client's Account:";
        cin>>tempnum;
        cout<<"Enter the client's opening banlance:";
        cin>>tempbal;
        
        //选择开户类型
        cout<<"Enter 1 for Brass or\n 2 for BrassPlus account ";
        
        while (cin>>kind&&(kind!='1'&&kind!='2')) {
            cout<<"Enter either 1 or 2:";
        }
        if (kind=='1') {
            p_client[i]=new Brass(temp,tempnum,tempbal);
        }
        else
        {
            double tempml,tempr;
            cout<<"Enter the maxLoan: $";
            cin>>tempml;
            cout<<"Enter the Rate:";
            cin>>tempr;
            p_client[i]=new BrassPluss(temp,tempnum,tempbal,tempml,tempr);
            
        }
        while(cin.get()!='\n')
            continue;
    }
    cout<<endl;
    
    for(int i=0;i<CLIENTS;i++){
        p_client[i]->ViewAcct();
        cout<<endl;
    }
    
    for(int i=0;i<CLIENTS;i++)
        delete p_client[i];
    cout<<"Done! \n";
    
    return 0;
}
