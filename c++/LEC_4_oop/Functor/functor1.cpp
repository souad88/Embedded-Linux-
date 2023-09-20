#include <iostream>
using namespace std;
class f
{
    public:
        void operator()(){cout<<"hello"<<endl;}

};
int main()
{
    f f1;
    f1(); //call object as function
    
    return 0;
}