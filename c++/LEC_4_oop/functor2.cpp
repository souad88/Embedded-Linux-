//geeksforgeeks 
#include <iostream>
#include <algorithm>
using namespace std;
class increment
{
    private:
        int num;
    public:
     increment(int n):num(n){}
     int operator()(int arr_num) const 
     {
            return num+arr_num;
     }    

};
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int to_add=5;
    transform(arr,arr+n,arr,increment(to_add));

    return 0;
}