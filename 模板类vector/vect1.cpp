#include <iostream>
#include<string>
#include<vector>
using namespace std;

const int NUM=5;
int main()
{
    vector<int> ratings(NUM);
    vector<string> titles(NUM);
    cout<<"You will do exactly as told. You will enter\n"
        <<NUM<< " book titles and your ratings(0-10).\n";
    int i;
    for(int i=0; i<NUM; i++)
        {
            cout<<"Enter title #"<<i+1<<": ";
            getline(cin,titles[i]);
            cout<<"Enter your rating (0-10): ";
            cin>>ratings[i];
            cin.get();
        }
    cout<<" Thank you. You entered the following: \n"
        <<" Rating\tBook\n";


    //使用迭代器代替for循环
    //声明两个  迭代器
    vector<int> ::iterator pi;
    vector<string>::iterator ps;
    pi=ratings.begin();
    ps=titles.begin();
    for(pi=ratings.begin(),ps=titles.begin(); pi!=ratings.end(),ps!=titles.end(); pi++,ps++)
        {
            cout<<*pi<<"\t"<<*ps<<endl;
        }



    return 0;
}
//ffffffffffddddfffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff