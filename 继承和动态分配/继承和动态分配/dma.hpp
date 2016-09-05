//
//  dma.hpp
//  继承和动态分配
//
//  Created by XiongGuang on 16/8/11.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef dma_hpp
#define dma_hpp

#include <stdio.h>
#include<iostream>

//base class using DMA
class baseDMA
{
private:
    char * label;
    int rating;
    
public:
    baseDMA(const char * l="null",int r=0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    //重载赋值运算符
    baseDMA & operator=(const baseDMA & rs);
    
    //重载运算符
    friend std::ostream & operator<<(std::ostream & os,const baseDMA & rs);
};

//drived class without DMA
//no destructor needed
//uses implicit assignment operator

class lackDMA:public baseDMA
{
private:
    enum { COL_LEN=4 };
    char color[COL_LEN];
    
public:
    
    lackDMA(const char * c="blank",const char * l="null",int r = 0);
    
    lackDMA(const char * c,const baseDMA & rs);
    
    friend std::ostream & operator<<(std::ostream & os,const lackDMA & rs);
};

//drived class with DMA
class hasDMA:public baseDMA
{
private:
    char * style;
public:
    hasDMA(const char * s="none",const char * l="null",int r=0);
    
    hasDMA(const char * s,const baseDMA & rs);
    
    hasDMA(const hasDMA & hs );
    ~hasDMA();
    
    hasDMA & operator=(const hasDMA & hs);
    
    friend std::ostream & operator<<(std::ostream & os,const hasDMA & hs);
};

#endif /* dma_hpp */
