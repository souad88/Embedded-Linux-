#include <iostream>
int main()
{
    int x=10;
    int *ptr=&x;
    int var=*ptr; //dereferencing var=x
    std::cout<<ptr<<std::endl; //address of x
    std::cout<<*ptr<<std::endl; //val of x
    std::cout<<x<<std::endl;//val x
    std::cout<<&x<<std::endl;//address x
    std::cout<<var<<std::endl; //val x
    return 0;
}