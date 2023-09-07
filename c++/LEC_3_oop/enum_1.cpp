#include <iostream>
using namespace std;
//enum class
enum class traffic:unsigned char //
{
    red,
    yellow,
    green
};
int main()
{
    //traffic obj;
    //to print it must use casting 
    //cout<<(int)obj<<endl;
    int g=static_cast<int>(traffic::red);
    traffic t=static_cast<traffic>(1);



}