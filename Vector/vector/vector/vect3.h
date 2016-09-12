//
//  vect3.cpp
//  vector
//
//  Created by XiongGuang on 16/9/7.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include <string>
#include<vector>
#include <algorithm>

struct Review
{
    std::string title;
    int rating;
};
//定义全局非成员函数，重载
bool operator<(const Review &r1,const Review &r2);
//排序
bool worseThan(const Review &r1,const Review & r2);
//插入元素
bool FillReview(Review &rr);
//显示元素
void ShowReview(const Review & rr);



bool operator<(const Review &r1,const Review &r2)
{
    if(r1.title<r2.title)
        return true;
    else if(r1.title==r2.title && r1.rating<r2.rating)
        return true;
    else
        return false;
}

bool worseThan(const Review &r1,const Review &r2)
{
    if(r1.rating<r2.rating)
        return true;
    else
        return false;
}

bool FillReview(Review &rr)
{
    std::cout<<"Enter book title (quit to quit): ";
    std::getline(std::cin, rr.title);
    if(rr.title=="quit")
        return false;
    std::cout<<"Enter book rating: ";
    std::cin>>rr.rating;
    if(!std::cin)
        return false;
    while(std::cin.get()!='\n')
        continue;
    return true;
}
void ShowReview(const Review &rr)
{
    std::cout<<rr.rating<<"\t"<<rr.title<<std::endl;
}