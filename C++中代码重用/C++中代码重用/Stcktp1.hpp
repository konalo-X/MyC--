//
//  Stcktp1.hpp
//  C++中代码重用
//
//  Created by XiongGuang on 16/8/15.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef Stcktp1_hpp
#define Stcktp1_hpp

#include <stdio.h>

template <class Type>
class Stack {
private:
    enum{SIZE=10};
    int stacksize;
    Type *items; //like  int * p;
    int top;
public:
    explicit Stack(int ss=SIZE);
    Stack(const Stack &st);
    ~Stack(){delete [] items;};
    bool isEmpty();
    bool isFull();
    bool push(const Type &item);
    bool pop(Type &item);
    
    Stack &operator=(Stack &st);//复制构造函数
};

template <class Type>
Stack<Type>::Stack(int ss):stacksize(ss),top(0) {
    items=new Type[stacksize];//创建一个Type类型 指针数组 名为 Items 即：items[satcksize]
}

template <class Type>
Stack<Type> ::Stack(const Stack & st ) {
    return st;
}

template <class Type>
bool Stack<Type>::isEmpty() {
    if(top==0)
        return true;
    else
        return false;
}

template <class Type>
bool Stack<Type>::isFull() {
    if (top==SIZE) {
        return true;
    }
    else
        return false;
}

template <class Type>
bool Stack<Type>::push(const Type &item) {
    if(top<stacksize)
    {
    items[top++]=item;//item 栈底元素
        return true;
    }
    else
        return false;
        
}
template <class Type>
bool Stack<Type>::pop(Type &item) {
    if (top>0) {
        item=items[--top];
        return true ;
    }
    else
        return false;
}

template <class Type>
Stack<Type> & Stack<Type>::operator=(Stack<Type> &st) {
    if(*this==st){
        return *this;
    //delete [] items;
    }
    else
    {
        top=st.top;
        stacksize=st.stacksize;
        items=new Type[stacksize];
        for (int i=0; i<top; i++)
            items[i]=st.items[i];
       
        return *this;
        }
}
#endif /* Stcktp1_hpp */
