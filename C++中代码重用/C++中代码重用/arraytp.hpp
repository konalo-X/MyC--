//
//  arraytp.hpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/15.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef arraytp_hpp
#define arraytp_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>

template <class Type,int n>
class ArrayTP {
private:
    Type ar[n];
    
    
public:
    ArrayTP(){};
    explicit ArrayTP(const Type & v);
    
    virtual Type & operator[](int i);
    virtual Type operator[](int i) const;
};

template <class Type,int n>
ArrayTP<Type, n>::ArrayTP(const Type &v) {
    for (int i=0; i<n; i++) {
        ar[i]=v;
    }
}
template <class Type,int n>
Type & ArrayTP<Type,n>::operator[](int i) {
    if (i<0||i>=n) {
        std::cerr<<"Error in array limit: "<<i
        <<" is out of range\n";
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

template <class Type,int n>
Type ArrayTP<Type,n>::operator[](int i)const {
    
    if (i<0||i>=n) {
        std::cerr<<"Error in array limit: "<<i
        <<" is out of range\n";
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

#endif /* arraytp_hpp */
