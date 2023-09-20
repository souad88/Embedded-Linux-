//Create A class that can be use to make backtrace
//for calling functions
#include <iostream>
using namespace std;
class BackTrace
{   string name;
    public:
        BackTrace(string name):name(name)
        {
            cout<<"Enter "<<name<<endl;
        }

        ~BackTrace(){cout<<"Exit "<<name<<endl;}
};
void fun1()
{
    BackTrace b(__PRETTY_FUNCTION__);
}
int main()
{
    BackTrace b(__PRETTY_FUNCTION__);
    fun1();
    return 0;
}
