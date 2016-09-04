//
//  stacktp.hpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/14.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef stacktp_hpp
#define stacktp_hpp
/*
 Stack 类原型如下：  普通元素栈
 
 typedef unsigned long Item;
 class Stack
 {
 private:
 enum{ MAX=10 };
 Item items[MAX];
 int top;
 public:
 Stack();
 bool isempty() const;
 bool isfull() const;
 
 bool push(const Item & item);//add item to stack,return false if stack full 添加项目
 bool pop(Item & item);//pop top into item,return false id stck empty 移除项目
 };
 */
#include <stdio.h>
#include <iostream>
//定义类模板
template<class Type>
class Stack
{
private:
    enum {MAX=10 };
    Type items[MAX];    //Type 型元素数组
    int top;            //存储元素个数
public:
    Stack();            //构造一个栈
    bool isempty();     //判断是否为空
    bool isfull();      //判断是否存满
    bool push(const Type & item);//存储一个元素
    bool pop(Type & item);//移除一个元素
    
    //定义一个显示元素的函数
    
    void Show() const ;
    
};

//methods
template<class Type>
Stack<Type>::Stack()
{
    top=0;
}

template <typename Type>
bool Stack<Type>::isempty() {
    return top==0;
}

template <class Type>
bool Stack<Type>::isfull() {
    return top==MAX;
}

template <class Type >
bool Stack<Type>::pop( Type &item) {
    if (top>0) {
       item=items[--top];
        return true;
    }
    else
        return false;
}
template <class Type>
bool Stack<Type>::push(const Type &item) {
    if (top<MAX) {
        items[top++]=item;
        return true;
    }
    else
        return false;
}

template <class Type>
void Stack<Type>::Show()const
{
    for (int i=0; i<MAX; i++) {
        std::cout<<"元素："<<i<<": "<<items[i]<<std::endl;;
    }
    
}


#endif /* stacktp_hpp */
