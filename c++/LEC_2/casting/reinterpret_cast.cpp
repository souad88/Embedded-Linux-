//typecsat any pointer to another data 
#include <iostream>
using namespace std;
class A
{
     public:
     void fun_a()
     {
        cout<<"class a"<<endl;
     }
};
class B
{
    public:
    void fun_b()
    {
        cout<<"class b"<<endl;
    }
};
int main()
{
    B *x=new B();
    A *_a=reinterpret_cast<A*>(x);
    _a->fun_a();
    
    return 0;
}
