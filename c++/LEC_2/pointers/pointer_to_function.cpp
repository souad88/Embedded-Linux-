#include <iostream>
void  function()
{
    std::cout<<"pointer to function"<<std::endl;
}
int main()
{
    void (*funcptr)()=&function;
    (*funcptr)();
    (funcptr)();
        return 0;
}