//
//  main.cpp
//  嵌套类
//
//  Created by XiongGuang on 16/8/27.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include<iostream>
#include<string>
#define MAXLEN 128

class CNode
{
    
    
private:
    friend class Clist;
    int m_Tag;
public:
    char m_Name[MAXLEN];
    
};

class CList
{
public:
    void SetNodeName(CNode &m_Node,const char*pchData)
    {
        if (pchData!=NULL)
        {
            strcpy(m_Node.m_Name,pchData);
        }
    }
    
    void SetNodeTag(CNode &m_Node,int tag)
    {
        m_Node.m_Tag=tag;
    }
};


int main(int argc,char *argv[])
{
    CNode node;
    CList list;
    list.SetNodeTag(node,7);
    return 0;
}


