#include <iostream>
using namespace std;

void f(int a[],int len)
{
        for(int i=0;i<len;i++)
        {
            if((a[i]%2)==0)
            {
                 cout<<" Even "<<a[i]<<"with index "<<i<<endl;
            }
            else if (a[i]==0)
            {
                cout<<"Zero number"<<a[i]<<"with index "<<i<<endl;
            }
            else
            {
                cout<<"Odd number"<<a[i]<<"with index"<<i<<endl;
            }
        }
}
int main()
{
    int arr[]={100,23,31,54,65,76,70,84,93};
    int arr_length=sizeof(arr)/sizeof(arr[0]);
    f(arr,arr_length);
    return 0;
}