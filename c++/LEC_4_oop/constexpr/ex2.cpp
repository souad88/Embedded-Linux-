#include <iostream>
using namespace std;

constexpr int sum(int a,int b)//for optimization:evaluate expression in compile time
{
    return a+b;
}

int main()
{    const int res=sum(3,4);
     cout<<res;
     return 0;
}