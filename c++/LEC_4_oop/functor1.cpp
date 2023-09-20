//code  academy example
//functors :function object
//for an object to be functor ..must use [data_type operator()(arguments...){

//                                                                              }] in the class
#include <iostream>
using namespace std;
class hello
{
    public:
        void operator()(int times)
        {
                for(int i=1; i<=times; i++)
                {
                    cout<<"hello"<<endl;
                }
        }
};
int main()
{
   hello greetings;
   greetings(3);
    return 0;

}
