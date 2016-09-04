//
//  tv.cpp
//  友元，异常和其他
//
//  Created by XiongGuang on 16/8/23.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "tv.h"


bool Tv::volup()
{
    if (volume<MaxVal) {
        volume++;
        return true;
    }
    else
        return false;
}

bool Tv::voldown()
{
    if (volume>MinVal) {
        volume--;
        return true;
    }
    else
        return false;
}

void Tv::chanup()
{
    if (channel<maxchannel) {
        channel++;
    }
    else
        channel=1;
}

void Tv::chandown()
{
    if (channel>1) {
        channel--;
        
    }
    else
        channel=maxchannel;
}

void Tv::settings()const
{
    using std::cout;
    using std::endl;
    
    cout<<"TV is "<<(state==OFF? "off" :"on ")<<endl;
    if (state==ON) {
        cout<<"Volume setting=" <<volume<<endl;
        cout<<"Channel setting ="<<channel<<endl;
        cout<<"Mode = "
        <<(mode==Antenna? "antenna": "cable" )<<endl;
        cout<<"Input = "
        <<(input==TV? "TV" :"DVD")<<endl;
    }
}