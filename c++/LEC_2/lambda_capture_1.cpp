#include<iostream>
using namespace std;
int main()
{
    int temp=10;
    int v=8;
    int f=9;
    [&v=temp,f=temp](){
        cout<<v<<endl;
    return v;
    };
    return 0;
}