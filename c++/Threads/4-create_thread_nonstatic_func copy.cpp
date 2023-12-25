#include <functional>
#include <thread>
#include <iostream>
using namespace std;
//type1:1-Thread pass Non-static-function

class B
{   
    public:
       void fun(int y)
       {
         cout<<"Non-static function through a thread"<<y;
       }
};
int main ()
{
    B g;
    thread th(&B::fun,&g,44); //pass address of function and address of object for nonstatic func
    th.join();
    return 0;
}