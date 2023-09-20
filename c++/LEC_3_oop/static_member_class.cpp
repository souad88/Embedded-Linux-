#include <iostream>
using namespace std;
class data_
{
    public:
        data_()
        {

        }
        void print_()
        {
            cout<<value2<<endl;
            cout<<value<<endl;
        }
    static int valuep;
    private:
    static int value;
    static const int value2=5;     
};
int data_::value=0;
int data_::valuep=20;



int main()
{

    data_ d;
    d.print_();
    cout<<data_::valuep; //public can be accessed by this method
    cout<<d.valuep; //or by this method
    return 0;

}