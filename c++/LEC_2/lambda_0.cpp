#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int>v{1,2,3,4,5,6,7,8};
    for_each(v.begin(),v.end(),[](int i)
     {
        cout<<i<<" ";   
     });

    return 0;
}