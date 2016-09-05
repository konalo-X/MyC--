// usebrass1.cpp test bank account classes
//compile with brass.cpp
#include "brass.h"
#include<iostream>

int main1()
{
    using std::cout;
    using std::endl;
    Brass Piggy("Procelot Pigg",381299,4000.00);
    BrassPlus Hoggy("Horatio Hogg",382288,3000.00 );
    Piggy.ViewAcct();
    cout<<endl;
    Hoggy.ViewAcct();
    cout<<endl;
    cout<<"Despositing $1000 into the Hong Account:\n";
    Hoggy.Deposit(1000.00);
    cout<<"New Balance :$"<<Hoggy.Balance()<<endl;
    Piggy.Withdraw(4200.00);
    
    cout<<"Piggy account balance :$"<<Piggy.Balance()<<endl;
    
    
    cout<<"Withdrawing $4200 from the Hogg Account :\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();
    return 0;
    
}