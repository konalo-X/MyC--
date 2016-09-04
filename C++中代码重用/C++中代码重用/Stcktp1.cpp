//
//  Stcktp1.cpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/15.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//
/*
#include "Stcktp1.hpp"
#include<iostream>
#include <cstdlib>//for rand(),srand();
#include <ctime>
const int Num=10;

int main()
{
    std::srand(std::time(0));//randomise rand()
    std::cout<<"Please Enter stack sizde: ";
    int stacksize;
    std::cin>>stacksize;
    
    //create an empty with stacksize slots
    Stack<const char *>st(stacksize);
    
    const char * in[Num]={
        "1: Hank Gilgamesh " ,"2: Kiki Ishtar ",
        "3: Betty Rocky ","4: Ian Flagranti ",
        "5: WolfGang Kibber ","6: Portia Koop ",
        "7: Joy Almondo ","8: Xaverie Paprika ",
        "9: Juan Moore ","10: Misha Mache "
    };
    
    const char * out[Num];
    
    int processed=0;
    int nextin=0;
    while(processed<Num)
    {
        if(st.isEmpty())
            st.push(in[nextin++]);
        else if(st.isFull())
            st.pop(out[processed++]);
        
        else if (std::rand()%2 && nextin<Num)
            st.push(in[nextin++]);
        else
            st.pop(out[processed++]);
    }
    
    for (int i=0; i<Num;i++)
        std::cout<<out[i]<<std::endl;
    
    std::cout<<"Bye \n";
    
    return 0;
    
        
    
}
*/