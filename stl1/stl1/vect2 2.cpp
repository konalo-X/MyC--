//
//  vect2.cpp
//  vector
//
//  Created by XiongGuang on 16/9/6.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <cstdlib>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Review{
    string  title;
    int rating;
    bool friend operator<(const Review &r1,const Review &r2)
    {
        if(r1.title<r2.title)
            return true;
        else if (r1.title==r2.title&&r1.rating<r2.rating)
            return true;
        else
            return false;
    }
};

bool FillReview(Review &rr);
void ShowReview(const Review &rr);
/*
 *
 */
int main() {
    
    vector<Review> books;
    Review temp;
    while(FillReview(temp))
    books.push_back(temp);
    int num=books.size();
    
    if(num>0)
    {
        cout<<"Thank you,you entered the following: \n"<<"Rating\tBook\n";
        for(int i=0;i<num;i++)
            ShowReview(books[i]);
        cout<<"Reprising :\n"<<" Rating\tBook\n";
        vector<Review>::iterator pr;
        for(pr=books.begin();pr!=books.end();pr++)
            ShowReview(*pr);
        vector<Review> oldlist(books);//使用复制构造函数vector<T> name(vector<T>  &);
        if(num>3)
        {
            //remove 2 items
            books.erase(books.begin()+1,books.begin()+3);
            cout<<"After earsure:\n";
            for(pr=books.begin();pr!=books.end();pr++)
                ShowReview(*pr);
            
            //insert  1 item;
            books.insert(books.begin(),oldlist.begin()+1,oldlist.begin()+2);
            cout<<"After insertion:\n";
            for(pr=books.begin();pr!=books.end();pr++)
                ShowReview(*pr);
            
        }
        
        
        books.swap(oldlist);
        cout<<"Swaping oldlist with books: \n";
        for(pr=books.begin();pr!=books.end();pr++)
            ShowReview(*pr);
        
    }
    else
        cout<<"Nothing entered , nothing gained. \n";
     

    sort(books.begin(),books.end());
    for_each(books.begin(),books.end(),ShowReview);
    
    return 0;
}

bool FillReview(Review &rr)
{
    cout<<"Enter book title (quit to quit): ";
    getline(cin,rr.title);
    if(rr.title=="quit")
        return false;
    cout<<"Enter book rating : ";
    cin>>rr.rating;
    if(!cin)
        return false;
    while(cin.get()!='\n')
        continue;
    return true;
}

void ShowReview(const Review &rr)
{
    cout<<rr.rating<<"\t"<<rr.title<<endl;
}
void show(int a)
{
    cout<<a<<endl;
    
}
