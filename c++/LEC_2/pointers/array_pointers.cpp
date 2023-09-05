#include <iostream>
int main()
{
        int arr[]={1,2,3,4,5};
        int *ptr=arr; //*ptr=a[0]
        std::cout<<*ptr<<std::endl;
        return 0;
}