//
//  program1.cpp
//  stl1
//
//  Created by 熊光 on 16/9/12.
//  Copyright © 2016年 XiongGuang. All rights reserved.
// 输入单词 最后得到一个按输入顺序排列的单词列表，一个按字母顺序排列的单词列表（）忽略大小写，记录单词输入次数

#include <stdio.h>
#include<iostream>
#include <string>
#include <vector>
#include<ctype.h>
void Show(std::string);
bool  Compare(std::string ,std::string );
std::string  ToLower(std::string );
int main()
{
    using namespace std;
    vector<string> words;
    cout<<"please input word:";
    string input;
    while(cin>>input&&input!="quit")
        words.push_back(input);
    cout<<"the words you input is :\n\t";
    for_each(words.begin(), words.end(),Show);
    sort(words.begin(), words.end(), Compare);//这里有个缺陷
    
    cout<<"\n按字母顺序的单词：\n\t";
    for_each(words.begin(), words.end(),Show);
    
    cout<<"输入的单词个数：\n\t";
    cout<<words.size();
    return 0;
}
void Show(std::string s)
{
    std::cout<<s<<"\t";
}
std::string  ToLower(std::string s)
{
    transform(s.begin(),s.end(),s.begin(),toupper);
    return s;
}
bool Compare(std::string s1,std::string s2 )
{
    s1=ToLower(s1);
    s2=ToLower(s2);
    if(s1>s2)
        return true;
    else
        return false;
}