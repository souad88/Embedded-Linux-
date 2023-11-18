//convert object from type of any class type into any primitive data type
#include <iostream>
using namespace std;
class Foo
{
    int i;
    public:
    Foo(){i=20;}
    operator int ();
};
Foo::operator int(){return i;}
int main()
{
    Foo g;
    int f=g; //conver g from Foo type into int data type
    cout<<f<<endl;
}