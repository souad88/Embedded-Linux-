#include <iostream>
using namespace std;
class data_
{
    public:
    data_(){}
    static int sub(int a, int b)
        {
            return a-b;
        }
};
int sub_(int a,int b)
{
    return a-b;
}
void helloworld()
{
    for (int i=0; i<5; i++)
    {
        cout<<"hello world"<<endl;
    }
}
int main()
{
   data_ d;
   helloworld();
    return 0;
}
