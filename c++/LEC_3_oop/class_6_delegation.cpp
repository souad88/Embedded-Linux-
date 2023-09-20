#include<iostream>
using namespace std;
class Data
{
    public:
        bool flag=1;
        int value=0;
        Data();
        Data(bool flag);
        Data(bool flag,int value);
};

Data::Data()
{
    cout<<"Default"<<endl;
}
Data::Data(bool flag):Data()
{
    this->flag=flag;
    cout<<"1  param"<<endl;
}
Data::Data(bool flag,int value):Data(flag)
{
    this->value=value;
    cout<<"2 param"<<endl;
}


int main()
{
    
    Data d2(true,3);
    
    return 0;
}
