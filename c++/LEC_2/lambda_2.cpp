//capture
#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int y=12;
    [&x,y](){ 
        x=1;
        return x+y; }();

    return 0;
}