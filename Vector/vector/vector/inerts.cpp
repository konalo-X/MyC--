//
//  inerts.cpp
//  vector
//
//  Created by XiongGuang on 16/9/8.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>

void output(const std::string &s){std::cout<<s<<" ";}

int main()
{
    using namespace std;
    string s1[4]={"fine","fish","fashion","fate"};
    string s2[2]={"busy","bats"};
    string s3[2]={"silly","singers"};
    
    vector<string> words(4);
    
    copy(s1, s1+4, words.begin());
    for_each(words.begin(), words.end(), output);
    cout<<endl;
    cout<<"construtor anonymous back_insert_iterator object.\n";
    
    copy(s2, s2+2, back_insert_iterator<vector<string>> (words));
    for_each(words.begin(), words.end(), output);
    cout<<endl;
    
    cout<<"construtor annoymous insert_iterator onject.\n";
    copy(s3, s3+2, insert_iterator< vector<string> > (words,words.begin()));
    for_each(words.begin(), words.end(), output);
    cout<<endl;
    
    cout<<"使用输入流：\n";
    copy(istream_iterator<string,char>(cin), istream_iterator<string,char>(),words.begin() );
    for_each(words.begin(), words.end(), output);
    return 0;
    
    
}