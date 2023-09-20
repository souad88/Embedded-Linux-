#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
 
    int s[]={1,2,3,4,5,6,7,8,9};
    auto v=find(begin(s),end(s),4);
    cout<<*v<<endl;
    return 0;
}