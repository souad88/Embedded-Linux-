#include <iostream>
using namespace std;

class B
{
    public:
        int d;
        B(){}
        B(int x):d(x){}
        friend B operator++(B);
        friend void display(B);   
};
B operator++(B g)
{  
    return ++g.d;       // x++;
}
void display(B g)
{   
    cout<<g.d<<endl;
}
int main()
{   B h(2);
    B b; 
    b=++h;  
    display(b);
    return 0;
}