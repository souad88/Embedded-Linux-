//cppnuts_thread: https://www.youtube.com/watch?v=TPVH_coGAQs&list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp
#include <functional>
#include <thread>
#include <iostream>
using namespace std;
//type1:1-Thread pass static-function

class B
{   
    public:
       void static fun(int y)
       {
         cout<<"static function through a thread"<<y;
       }
};
int main ()
{
    B g;
    thread th(&B::fun,44); //there is no need for calling obj because we call static func
    th.join();
    return 0;
}