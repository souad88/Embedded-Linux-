#include <iostream>
using namespace std;
void merge_array_(int a1[],int a2[],int s_1,int s_2)
{
    int s_3=s_1+s_2;
    int a3[s_3];
    for (int i=0; i<s_1; i++)
    {
        a_3[i]=a1[i];
    }
    for (int i = 0; i <s_2; i++)
    {
        a_3[i+s_1]=a2[i];        
    }
    for(int i=0; i<s_3; i++)
    {
       std::cout<<a_3[i]<<std::endl;
    }
}

int main()
{

        int a1[]={11,22,33,45,4,5,65,85,50,65};
        int a2[]={6,6,6,6,67,74,75,76,67,77,79,78};
        int  len_1=sizeof(a1)/size(a1[0]);
        int len_2=sizeof(a2)/size(a2[0]);
        merge_array_(a1,a2,len_1,len_2);
        return 0;

}