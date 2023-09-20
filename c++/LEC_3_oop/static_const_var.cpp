//if a static var declared as CONST then , it can be
//intialized with intializer in which every expression
//is a constant expression
#include <iostream>
using namespace std;

struct x
{
    const static int n=1;
    const static int k;
};
const int x::k=4;
int main()
{
    

    return 0;
}