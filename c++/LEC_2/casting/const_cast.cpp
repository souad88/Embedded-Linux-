#include <iostream>
//const cast->change const value to another value constants
int main()
{
    const int c=10;  
    int *f=const_cast<int*>(&c);
    *f=20;
    std::cout<<*f;
        return 0;
}