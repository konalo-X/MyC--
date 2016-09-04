//
//  usedma.cpp
//  继承和动态分配
//
//  Created by XiongGuang on 16/8/11.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include "dma.hpp"
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    
    baseDMA shirt("portablelly",8);
    lackDMA balloon("red", "Blimpo",4);
    hasDMA map("Mercator","Buffalo keys",5);
    cout<<"Displsying baseDMA object:\n";
    cout<<shirt<<endl;
    cout<<"Displaying lackDMA object: "<<endl;
    cout<<balloon<<endl;
    cout<<"Displaying hasDMA object:\n";
    cout<<map<<endl;
    lackDMA balloon2(balloon);
    cout<<"Result of lackDMA copy:\n";
    cout<<balloon2<<endl;
    hasDMA map2;
    map2=map;
    cout<<"Result of hasDMA copy\n";
    cout<<map2<<endl;
    return 0;
}
