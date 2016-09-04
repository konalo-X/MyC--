//
//  useTV.cpp
//  友元，异常和其他
//
//  Created by XiongGuang on 16/8/22.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <iostream>
#include "tv.h"


int main()
{
    using std::cout;
    Tv s42;
    cout<<"Initial setting for 42\" TV :\n";
    s42.settings();
    s42.chanup();
    cout<<"\n Adjusted settings for 42\" TV:\n";
    s42.chanup();
    cout<<"\nAddjusted settings for 42\" TV \n";
    s42.settings();
    
    
    Remote grey;
    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    
    cout<<"\n42\" settings after using remote:\n";
    s42.settings();
    
    Tv s58(Tv::ON);
    s58.set_mode();
    grey.set_chan(s58, 28);
    cout<<"\n58\" settings :\n";
    s58.settings();
    return 0;
    
}

