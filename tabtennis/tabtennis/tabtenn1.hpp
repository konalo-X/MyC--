//
//  tabtenn1.hpp
//  tabtennis
//
//  Created by XiongGuang on 16/8/2.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef tabtenn1_hpp
#define tabtenn1_hpp

#include <stdio.h>
#include<string>
using std::string;
//sample base class
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn="none",const string &ln="none",bool ht=false);
    void Name()const;
    bool HasTable(){return hasTable;}
    void ResetTable(bool v){hasTable=v;}
};

//sample derived class--一个简单地继承类

class RatedPlayer:public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r=0,const string &fn="none",const string &ln="none",
                bool ht=false);
    
    RatedPlayer(unsigned int r,const TableTennisPlayer &tp);
    
    unsigned int Rating()const {return rating;}
    
    void ResetRating(unsigned int r){rating =r;};
};

#endif /* tabtenn1_hpp */
