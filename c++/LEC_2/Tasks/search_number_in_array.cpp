#include <iostream>
using namespace std;
int user_element()
{
    int x;
    cout<<"enter element to search for"<<endl;
    cin>>x;
    return x;
}
void search_number_(int a[],int len,int x)
{
        for(int i=0;i<len;i++)
        {
            if(a[i]==x)
            {
                cout<<"your index number is "<<i+1<<endl;
                break;
            }
            else if ((i==len-1)&&(a[i]!=x))
            {
                cout<<"not found!";
                break;             
            }
        }
}
int main()
{
    int arr[]={100,23,31,54,65,76,70,84,93};
    int arr_length=sizeof(arr)/sizeof(arr[0]);
    int x=user_element();
    search_number_(arr,arr_length,x);
}