#include <iostream>
using namespace std;
class foo
{
    private:
        int num=12;
        static int temp;
    public:
        static void fun() //creat local var and access static var only
        {
            temp++;
            int val=13;
        }    
};
int foo::temp=1;
int main()
{


    return 0;
}