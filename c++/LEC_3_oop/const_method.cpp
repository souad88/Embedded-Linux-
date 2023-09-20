#include <iostream>
using namespace std;
class m
 {
    public:
        m(){}
        void fun(int g)const
        {
            cout<<"const method"<<endl;

        }
 };
 int main()
 {
    const m m;


    m.fun(3);
    m.fun(4);
 }