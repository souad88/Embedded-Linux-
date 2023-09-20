#include <iostream>
using namespace std;

class B
{
    private:
        int d;
    public:
        B():d(0){}
        friend int print_(B) ;   
};
int print_(B b)
{
    b.d=20;
    return b.d; 
}
int main()
{
    B b;
    cout<<print_(b);
    return 0;
}