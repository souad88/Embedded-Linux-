#include<iostream>
using namespace std;
class Data
{
    public:
        bool flag=1;
        int value=0;
        Data(bool flag);
        void print_int()
        {
            cout<<".....\n";
        }
};
Data::Data(bool flag):flag(flag)
{
    
}