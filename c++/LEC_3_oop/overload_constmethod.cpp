#include <iostream>
using namespace std;
class ovrload
 {
    public:
        
        void fun(int g)const
        {
            cout<<"this is aconst method"<<endl;

        }

        void fun(int g)
        {
            cout<<"this is amethod"<<endl;

        }


 };
int main()
{   
    ovrload o;
    o.fun(3);
    const ovrload t;
    t.fun(4);    
    return 0;
 }