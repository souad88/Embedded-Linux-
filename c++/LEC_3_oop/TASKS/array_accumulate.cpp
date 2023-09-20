
//calculate accumulate of array 1+2+3+4+5..
#include <iostream>
#include <numeric>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
int main()
{
     int a[]={1,2,3,4}; 
     int sum_=0;
    cout<< accumulate(a,a+4,sum_,sum)<<endl;    
     return 0;
}
