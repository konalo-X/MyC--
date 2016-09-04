//
//
//  List
//
//  Created by XiongGuang on 16/8/29.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <iostream>
#include<string>
#include "list.h"
using std::cin;
using std::cout;
template<class T>
bool List<T>::isEmpty()
{
    if(size==0)
        return true;
    else
        return false;
        }
template<class T>
bool List<T>::isFull()
{
    if(size==L_SIZE)
        return true;
    else
        return false;
};
template<class T>
bool List<T>::addNode(T &item)
{
    if(size<L_SIZE)
    {
        Node * add=new Node(item);
        size++;
        
        if(first==0)
        {
            first=add;
            first->val=item;
            last=add;
        }
        else
            last->next=add;
        
        last=add;
        return true;
        
    }
    return false;
}
template<class T>
bool List<T>::delNode(T &item)
{
    if (first==0)
    {
        return false;
    }
    else
    {
        size--;
        Node * temp ;
        temp=first;
        item=first->val;
        first=first->next;
        delete temp;
        return true;
    }
}
template<class T>

List<T>::List(int s):size(s)
{
    first=last=0;
}


int main()
{
    List<std::string> name(5);
    std::string str;
    for (int i = 0; i < 5; ++i)
    {
        
        std::cout<<"please input name["<<i+1<<"] : ";
        getline(cin,str);
        name.addNode(str);
    }
    while(name.delNode(str))
    {
        std::cout<<"deling--------"<<str<<std::endl;
    }
      return 0;
}




