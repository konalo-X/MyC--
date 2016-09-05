//
//  stacktp.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/14.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include "stacktp.hpp"
#include <iostream>
#include <string>

using std::cin;
using std::cout;

int main()
{
    Stack<std::string> st;//创建一个存储string 的空栈 st
    char ch;
    std::string po;
    
    cout<<"Please enter A to add a  purhcase order,\n"
    <<"P to process a PO, or Q to quit. \n";
    
    while (cin>>ch&&std::toupper(ch)!='Q') {
        while (cin.get()!='\n') {
            continue;
        }
        if (!std::isalpha(ch)) {
            cout<<'\a';
            continue;
        }
        
        switch (ch) {
            case 'A':
                case 'a':cout<<"Enter a PO number to add: ";
                cin>>po;
                if (st.isfull()) {
                    cout<<"Stack already full \n";
                }
                else
                    st.push(po);
                break;
            case 'p':
            case 'P': if(st.isempty())
                cout<<"Stack is empty \n";
                else
                {
                    st.pop(po);
                    cout<<"PO #"<<po<<" poped \n";
                }
                break;
            
        }
        cout<<"Please Enetr A to add a purchase order,\n"
        <<"P to process a PO, or Q to quit. \n";
    }
    st.Show();
    cout<<"Bye\n";
    return 0;
    
    
}