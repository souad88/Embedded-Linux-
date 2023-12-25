#include <functional>
#include <thread>
#include <iostream>

using namespace std;
//type1:1-Thread pass functor
class B
{
    public:
        void operator()(int y)
        {
            cout<<"pass functor through a thread"<<y;
        }

};    
int main()
{
    thread th((B()),55);
    th.join();
    return 0;
}