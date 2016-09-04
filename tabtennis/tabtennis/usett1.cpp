//
//  usett1.cpp
//  tabtennis
//
//  Created by XiongGuang on 16/8/2.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include "tabtenn1.hpp"

int main(void)
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara","Boomdea",false);
    RatedPlayer rplayer1(1140,"Mallory","Duck",true);
    rplayer1.Name();
    
    if (rplayer1.HasTable()) {
        cout<<": has a table \n";
    }
    else
        cout<<": hasn't a tabel \n";
    
    player1.Name();
    
    if (player1.HasTable()) {
        cout<<": has a table \n";
        
    }
    else
        cout<<": hasn't a table \n " ;
    
    cout<<"Name: ";
    rplayer1.Name();
    cout<<"; Rating :"<<rplayer1.Rating()<<endl;
    
    //重新初始化rpplayer 名字和比分
    
    RatedPlayer rplayer2(1212,player1);
    
    cout<<"Name: ";
    rplayer2.Name();
    cout<<" ; Rating :"<<rplayer2.Rating()<<endl;
    
    return 0;
}
