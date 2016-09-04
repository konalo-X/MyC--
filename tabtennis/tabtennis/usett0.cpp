//
//  usett0.cpp
//  tabtennis
//
//  Created by XiongGuang on 16/8/2.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>

#include "tabtenn0.h"
#include <iostream>

int main(void )
{
    using std::cout;
    TabtennisPlayer player1("Chuck","Bilzzard",true);
    TabtennisPlayer player2("Tara","Boomdea",false);
    
    player1.Name();
    if (player1.HasTable()) {
        cout<<":has a table. \n ";
    }
    else
        cout<<"hasn't a table \n";
    
    player2.Name();
    if (player2.HasTable()) {
        cout<<": has a table \n";
        
    }
    else
        cout<<": hasn't a table \n";
    
    
}
