#include <iostream>
using namespace std;
class greeting
{
     public:
        void fun()
        {
            cout<<"hello"<<endl;
        }
};
int main()
{
    greeting g;
    g.fun();
    return 0;
}