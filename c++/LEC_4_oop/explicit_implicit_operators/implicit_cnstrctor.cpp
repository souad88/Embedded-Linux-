 
#include <iostream>
using namespace std;

class f
{
    public:
     f(){cout<<"uninitialized construct"<<endl;}
     f(int i){cout<<"1- param"<<endl;}
     f(const char*,int t){cout<<"2-param"<<endl;}

};


int main()
{
    f f1;
    f f2(1);
    f f3(2);
    f f4={3}; //implicit conversion {}..of construct from f type to int type via f(int)
    f f5={"hi",0}; //implicit conver of construct to type string
     //equivilante to=f5("hi",0);   
return 0;
}