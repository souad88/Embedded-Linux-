#include <iostream>

int main()
{
        int *ptr=new int;
        *ptr=42;
        std::cout<<"pointer "<<*ptr<<std::endl;
        delete ptr;
        ptr=nullptr;

}