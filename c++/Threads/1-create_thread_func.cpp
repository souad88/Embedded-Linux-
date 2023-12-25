#include <thread>
#include <iostream>
using namespace std;
//type1:1-Thread pass function
void fun(int y)
{
        cout<<"pass function through a thread"<<y;
}
int main ()
{
    thread th(fun,44);
    th.join();
    return 0;
}