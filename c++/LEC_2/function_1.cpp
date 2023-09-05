#include <iostream>

float add(float,float);
float sub(float,float);

float add(float a,float b)
{
        return (a+b);
}
float sub(float a, float b)
{
        return (a-b);
}

int main()
{
        float n1;
        float n2;
        float res;
        std::cout<<"enter number 1"<<std::endl;
        std::cin>>n1;
        std::cout<<"enter number 2"<<std::endl;
        std::cin>>n2;
        res=add(n1,n2);
        std::cout<<"Sum= "<<res<<std::endl;
        res=sub(n1,n2);
        std::cout<<"Sub= "<<res<<std::endl;

        return 0;
}