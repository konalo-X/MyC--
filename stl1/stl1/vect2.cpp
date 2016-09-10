/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vect2.cpp
 * Author: konalo
 *
 * Created on 2016年9月6日, 下午9:02
 */

#include <cstdlib>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Review{
    string  title;
    int rating;
};
bool FillReview(Review &rr);
void ShowReview(const Review &rr);
/*
 * 
 */
int main() {
    vector<Review> books;
    Review temp;
    while(FillReview(temp));
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

void ShowReview(Review &rr)
{
    cout<<rr.rating<<"\t"<<rr.title<<endl;
}
