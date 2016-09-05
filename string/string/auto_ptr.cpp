//
//  auto_ptr.cpp
//  string
//
//  Created by XiongGuang on 16/9/3.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <iostream>
#include <memory>
int main()
{
    using namespace std;
    auto_ptr<string> films[5]=
    {
        auto_ptr<string> (new string("Fowl Balls")),
        auto_ptr<string> (new string("Duck Walks")),
        auto_ptr<string> (new string("Chicken Run")),
        auto_ptr<string> (new string("Turkey Errors")),
        auto_ptr<string> (new string("Goose Eggs"))
    };
    
    //auto_ptr<string> pwin;
    shared_ptr<string> pwin;
    pwin=move(films[2]);//films[2]失去所有权ownership,films[2]变为空指针
    //move 会移film【2】
    cout<<"The nominees for best avian baseball film are\n";
    for (int i = 0; i < 5; ++i)
    {
        if(i==2)
            continue;
        cout<<*films[i]<<endl;				//引用films[2]会指向空指针
    }
    cout<<"The winner is "<<*pwin<<"! \n";
    cin.get();
    return 0;
    
    ///////////////////////////////
}