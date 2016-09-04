//
//  tabtenn1.cpp
//  tabtennis
//
//  Created by XiongGuang on 16/8/2.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include "tabtenn1.hpp"

#include<iostream>

TableTennisPlayer::TableTennisPlayer(const string &fn,const string &ln,bool ht):firstname(fn)
,lastname(ln),hasTable(ht){}

void TableTennisPlayer::Name()const
{
    std::cout<<lastname<<" ,"<<firstname;
}

//RatedPlayer methods

RatedPlayer::RatedPlayer(unsigned int r,const string &fn,const string &ln,bool ht):rating(r)
,TableTennisPlayer(fn,ln,ht){}


/*  或者这样写
 RatedPlayer::RatedPlayer(unsigned int r,const string &fn,const string &ln,bool ht):
 ,TableTennisPlayer(fn,ln,ht)
 {
    rating =r;
 }
 */

RatedPlayer::RatedPlayer(unsigned int r ,const TableTennisPlayer &tp):TableTennisPlayer(tp),rating(r){}
//使用TableTennisPlayer 默认构造函数

 
