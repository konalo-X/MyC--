//
//  tabtenn0.h --a table-tennis base class
//  tabtennis
//
//  Created by XiongGuang on 16/8/2.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef tabtenn0_h
#define tabtenn0_h
#include<string>
using std::string;
//sample base class

class TabtennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TabtennisPlayer(const string &fn="none",const string &ln="none",bool ht=false);
    void Name()const;
    bool HasTable()const{return hasTable;};
    void ResetTable(bool v){hasTable=v;};
};

#endif /* tabtenn0_h */
