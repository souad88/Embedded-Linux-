#include<iostream>
int global_x=30;
int main()
{

    int local_x=20;
    global_x=10;
    std::cout<<"local value = "<<local_x<<std::endl;
    std::cout<<"global value = "<<global_x<<std::endl;
    return 0;
}