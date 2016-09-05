//
//  list.h
//  List
//
//  Created by XiongGuang on 16/8/29.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef list_h
#define list_h

#include<iostream>
template<class T>
class List
{
private:
    class Node
    {
    public:
        Node * next;
        T val;
        Node(T &i):val(i),next(0){};
    };
    enum{L_SIZE=10};
    int size;
    Node * first;
    Node * last;
    
public:
    bool isEmpty();
    bool isFull();
    bool addNode(T &item);

    bool delNode(T &item);
    List(int s);
    ~List()
    {
        while(first!=0)
        {
            Node * temp;
            temp=first;
            first=first->next;
            delete temp;
        }
    }
    
};

#endif /* list_h */
