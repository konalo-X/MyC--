//
//  about vector valarray and array
//  OtherClass
//  vector 模板类是容器类和算法的一部分，支持面向容器的操作，如排序、插入重新排列、搜索、将数据转移到其他容器等
//  valarray  类模板是面向数学计算。不是STL的一部分。可以使用begin（val），end（val）
//  array 替代数组，让数组效率更高，更安全。表示长度固定的数组支持STL 算法 ，begin（） end（）
//  Created by XiongGuang on 16/9/22.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <array>
#include <valarray>
int main(int argc, const char * argv[]) {
    using namespace std;
    vector<double> v1(10),v2(10),v3(10);
    array<double, 10>a1,a2,a3;
    valarray<double> va1(10),va2(10),va3(10);
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<double>() );
    va3=va1+va2;
    va1={1,9,10,2,3,4,5,6,7,8};
    va1=2*va1;
   // va1=va1.apply(log);
    //sort(&va1[0], &va1[9]);
    sort(begin(va1),end(va1));
    for(int i=0;i<10;i++)
    cout<<va1[i]<<endl;
    return 0;
}
