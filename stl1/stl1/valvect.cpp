//
//  valvect.cpp
//  stl1
//
//  Created by 熊光 on 16/9/13.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <valarray>
#include <array>
#include <algorithm>
#include<iterator>

int main()
{
    using namespace std;
    array<int, 10>a;
    int i=0;
   // reverse_iterator<array<int, 10>> it;
    array<int, 10>::reverse_iterator it;
    for (it=a.rbegin();it!=a.rend();it++ ) {
        *it=i++;
    }
    
  //  cout<<*pi<<endl;
 //  for (auto x:a) {
   // int *pi;
   // pi=a.data();
     cout<<a[2]<<endl;
  //  }
    
    return 0;
}
