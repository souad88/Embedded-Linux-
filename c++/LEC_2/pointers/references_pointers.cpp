#include <iostream>
 
 int main()
 {
    int x(10);
    int &y=x; //..Ref_y is refere to address of x
    int *ptr=&x; //lvalue
    y=3; 
    std::cout<<y<<std::endl;
    std::cout<<&y<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<x<<std::endl;
    std::cout<<&x<<std::endl;
    std::cout<<*ptr<<std::endl;
    //change ref value
    
    y=10;
    std::cout<<"values after change ref value"<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<&y<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<x<<std::endl;
    std::cout<<&x<<std::endl;
    std::cout<<*ptr<<std::endl;
    return 0;
 }