#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
//extern "C"
//{
//    #include "cfile.h"
//}
using namespace std;
void fun(int x)
{
    cout<<"func->1 param"<<endl;
}
void fun(int x,int y)
{
    cout<<"func->2param"<<endl;
}
int main()
{
    fun(2);
    fun(4,5);
  //  display();
    return 0;
}