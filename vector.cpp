//
//  vector.cpp
//  C
//
//  Created by XiongGuang on 16/4/16.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include "vector.hpp"
#include<iostream>
#include<vector>
#include<array>

using namespace std;


int* init_vector(int i) {
    
    vector<int> v(i);//
    //  cin >> i;
    cout << "vector元素個數為:" << i << endl;
    for (int j = 0; j < i; j++) {
        cout << "請輸入第" << j << "個元素:";
        cin>>v[j];
        cin.get();
        
    }
    
    //  cout << p[0] << endl;
    return  &v[0];;
}

int main() {
    cout << "請確定vector元素個數\n";
    int i = 0;
    cin >>  i;
    int *p;
    p= init_vector(i);
    //cout << p[0]<< endl;
    
     for (int j = 0; j < i; j++) {
     cout << "p[" << j << "]= " << p[j] << endl;
    // p++;
     }
    
    //  getchar();
    return 0;
 //   system("pause");
}