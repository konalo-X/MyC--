//
//  program2.cpp
//  stl1
//
//  Created by 熊光 on 16/9/13.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>

using namespace std;
char toLower(char ch){return tolower(ch);}
string & ToLower(string &st);
void display(const string &s);

int main()
{
    vector<string> words;
    cout<<"Enter the words (enter quit to quit):\n";
    string input;
    while(cin>>input && input!="quit")
        words.push_back(input);
    cout<<"You enetered the following worlds:\n";
    for_each(words.begin(), words.end(), display);
    cout<<endl;
    //将words 移到 set里面，并转化成小写
    set<string>wordset;
   /**************************************************************************************************
    transform(words.begin(), words.end(), wordset.begin(), ToLower);//不能直接使用wordset
    **************************************************************************************************/
    //理由1：关联集合的键被看做常量，对set来说，值就是键  wordset.begin()返回的迭代器是常量迭代器不能作为输出迭代器
    //      2:会覆盖内容,且内存不会扩充
    
    
    //改为如下:
     transform(words.begin(), words.end(),
               insert_iterator<set<string>>(wordset,wordset.begin()),
               ToLower);
    /*
     template <class _InputIterator, class _OutputIterator, class _UnaryOperation>
     inline _LIBCPP_INLINE_VISIBILITY
     _OutputIterator
     transform(_InputIterator __first, _InputIterator __last, _OutputIterator __result, _UnaryOperation __op)
     {
     for (; __first != __last; ++__first, (void) ++__result)
     *__result = __op(*__first);
     return __result;
     }

     */
    cout<<"\nAlphabetic list of words: \n";
    for_each(wordset.begin(), wordset.end(), display);
    cout<<endl;
    
    //将words 和出现次数 保存到map
    map<string, int  >wordmap;
    set<string>::iterator si;
    for (si=wordset.begin(); si!=wordset.end(); si++)
        wordmap[*si]=(int)count(words.begin(), words.end(), *si);
    //display map contents
    cout<<"\nWord freqency:\n";
    for (si=wordset.begin(); si!=wordset.end(); si++) {
        cout<<*si<<" : "<<wordmap[*si]<<endl;
    }
    return 0;
}

string & ToLower(string &st)
{
    transform(st.begin(), st.end(), st.begin(), toLower);
    return st;
}
void display(const string &s)
{
    cout<<s<<"   ";
}
