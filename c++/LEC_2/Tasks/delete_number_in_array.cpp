#include <iostream>
using namespace std;
int user_element()
{
    int x;
    cout<<"enter element to delete it"<<endl;
    cin>>x;
    return x;
}
void delete_number_(int a[],int len,int x)
{
        for(int i=0; i<len; i++)
        {
          if(a[i]==x)
           { 
             for(int k=i; k<len-1; k++)
             {
                 a[k]=a[k+1];
             }
           i--;
           len--; 
           }
        }
        for(int i=0;i<len-1;i++)
        {
            cout<<a[i]<<endl;
        }
}
int main()
{
    int arr[]={100,23,31,54,65,76,70,84,93};
    int arr_length=sizeof(arr)/sizeof(arr[0]);
    int x=user_element();
    delete_number_(arr,arr_length,x);
}