#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class ManyFriend {
private:
    T item;
    
public:
    ManyFriend(const T & i):item(i){}
    template<typename C,typename D,typename E>friend void show2(C & c, D &d,E &e);
};

template <typename C,typename D ,typename E>
void show2(C &c,D &d,E &e) {
    cout<<c.item<<", "<<d.item<<", "<<e.item<<endl;
}
template<class T>
using MF=ManyFriend<T>;
int main()
{
   
    MF<int>hfi1(10);
    MF<int>hfi2(20);
    MF<double>hfdb(10.3);
    MF<std::string>hfst("hello world");
    cout<<"hfi1,hfi2,hfst: ";
    show2(hfi1, hfi2,hfst);

    /*
    ManyFriend<int>hfi1(10);
    ManyFriend<int>hfi2(20);
    ManyFriend<double>hfdb(10.3);
    ManyFriend<std::string>hfst("hello world");
    cout<<"hfi1,hfi2,hfst: ";
    show2(hfi1, hfi2,hfst);
    */
   // cout<<"hfi1,hfdb: ";
   // show2(hfi1, hfdb);
    
    return 0;
}