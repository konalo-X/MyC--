//
//  ues.cpp
//  vector
//
//  Created by XiongGuang on 16/9/8.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include"vect3.h"

int main()
{
    using namespace std;
    
    vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);
    
    
    if (books.size()>0) {
        cout<<"Thank you,You entered the following "
        
        <<books.size()<<" ratings:\n"<<"Rating\tBook\n";
        
        for_each(books.begin(), books.end(), ShowReview);
        
        sort(books.begin(), books.end());//默认升序排序
        
        cout<<" Sorted by title: \nRating\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);
        
        sort(books.begin(), books.end(), worseThan);
        
        cout<<"Sorted by rating:\nRating\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);
        
        random_shuffle(books.begin(), books.end());
        
        cout<<"After shuffling:\nRating\tBook\n";
        for_each(books.begin(), books.end(),ShowReview );
    }
    else
        cout<<"No enteries.  ";
    cout<<"Bye.\n";
    return 0;
}