#include <iostream>
using namespace std;

int getnumber()
{
    int num=4;
    return num;
}

int main()
{
    const int num1=getnumber(); //ok
   // constexpr int num2=getnumber(); //not ok compilation error
    
    return 0;
}