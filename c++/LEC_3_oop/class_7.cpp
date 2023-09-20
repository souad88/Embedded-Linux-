#include <iostream>
using namespace std;
class Data
{
    const int val1;
    const int val2=10;
    public:
    Data(int value1):val1(value1)
    {
            cout<<"value 1:"<<val1<<endl;
    }
};
int main()
{
    Data d(4);
    return 0;
}