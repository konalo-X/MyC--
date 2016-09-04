//
//  tabtenn0.cpp
//  tabtennis
//
//  Created by XiongGuang on 16/8/2.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include "tabtenn0.h"
#include<iostream>

TabtennisPlayer::TabtennisPlayer(const string &fn,const string &ln,bool ht):
firstname(fn),lastname(ln),hasTable(ht){}

void TabtennisPlayer::Name()const
{
    std::cout<<lastname<<" ,"<<firstname;
}
