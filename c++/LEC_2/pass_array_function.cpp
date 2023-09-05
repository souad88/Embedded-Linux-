#include <iostream>

void print_function(int[],int s);
int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    print_function(a,size);
    return 0;
} 
void print_function(int d[],int s)
{
        for(int i=0;i<s;i++)
        {
            std::cout<<d[i]<<std::endl;
        }
}