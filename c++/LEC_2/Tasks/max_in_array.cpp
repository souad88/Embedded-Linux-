#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void find_max_(int arr[],int len)
{
        cout<<"MAX of ARRAY="<<*max_element(arr,arr+len)<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int arr_length=sizeof(arr)/sizeof(arr[0]);
    find_max_(arr,arr_length);
}