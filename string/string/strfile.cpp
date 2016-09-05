//
//  strfile.cpp
//  string
//   从文件读取字符
//  Created by XiongGuang on 16/9/1.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<fstream>
#include <string>
#include <cstdlib>

int main()
{
    using namespace std;
    /*
    ifstream fin;
    ofstream fout;
    fout.open("/Users/konalo/C/C/string/string/read4terminal.dat");
    fin.open("/Users/konalo/C/C/string/string/terminal.txt");
    if (fin.is_open()==false) {
        cerr<<"can't open file. Bye!\n";
        exit(EXIT_FAILURE);
    }
    if (fout.is_open()) {
        cout<<"OK";
    }
    string item;
    int count=0;
    getline(fin, item, ':');
    while (fin) {
        ++count;
        cout<<count<<": "<<item<<endl;
        getline(fin, item,'\n');
        
       //fout<<item;
    }
     cout<<count<<item<<"Done! \n";
    fin.close();
     */
    string str="konalo";
    string item;
    ifstream fin;
    int i=0;
    fin.open("/Users/konalo/C/C/string/string/terminal.txt");
    while(fin)
    {
        getline(fin, item);
        i++;
        if(item==str)
            break;
    }
    cout<<"haha ,找到了,在第"<<i<<"行！"<<item<<endl;
    return 0;
}