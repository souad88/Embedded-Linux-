#include <iostream>
using namespace std;
class add
{
    public:
        void operator()(int a,int b){cout<<"result="<<a+b<<endl;}

};
int main()
{
    add res;
    res(2,3); //call object as function
    
    return 0;
}