//
//  Worker1.h
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/14.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef Worker1_h
#define Worker1_h
#include"Worker0.h"
class SingerWaiter: public Singer,public Waiter
{
    void Set();
    void Show()const;
};

#endif /* Worker1_h */
