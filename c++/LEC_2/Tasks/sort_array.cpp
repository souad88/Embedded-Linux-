#include <iostream>
#include <bits/stdc++.h>
#include <iterator>
#include <functional>
#include <vector>
using namespace std;
void print_array(vector<int >a,int s)
{
    for(int i=0; i<s;i++)
    {
        cout<<a[i]<<endl;
    }
}
void sort_ascending(vector<int >a,int s)
{
     sort(begin(a), end(a),[](int c, int v) {return c > v; });
     print_array(a,s);    
}
void sort_descending(vector<int> a,int s)
{
     sort(begin(a), end(a),[](int c, int v) {return c < v; });
     print_array(a,s);    
}
int main()
{   
    vector<int>a={220,27,35,7,9};
    int max=a[0];
    int min=a[0];
    int s=sizeof(a)/sizeof(a[0]);
    cout<<"sorting Ascending"<<endl;
    sort_ascending(a,s);
    cout<<"Sort Descendig"<<endl;
    sort_descending(a,s);

    return 0;
}