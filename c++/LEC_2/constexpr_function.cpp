#include <iostream>
using namespace std;
//constexpr : compiler evaluate value at compile time
constexpr int sum(int x,int y)
{
        x=1;
        for(int i=0; i<3; i++)
        {
            x+=i;
        }
    return (x+y);    
}
int main()
{
    constexpr int s_=sum(1,2); //must use constexpr to store result of sum
    cout<<s_<<endl;
    return 0;
}