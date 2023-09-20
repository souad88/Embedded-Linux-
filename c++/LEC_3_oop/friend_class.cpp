#include <iostream>
using namespace std;
class test;
class data
{
    public:
    data()
    {

    }
    private:
    friend class test;//permission to access private numbers
    int value;
};
class test
{
    public:
        void fun()
        {
            d.value=12;
        }
        private:
        data d;
};

int main()
{

    return 0;
}