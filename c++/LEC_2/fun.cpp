#include <iostream>

void fun(int , int );
void fun(int,float);
void fun(int x ,double y)
{
        std::cout<<x<<" "<<y<<std::endl;

}
void fun (int x,int h)
{
       std::cout<<x<<"  "<<h<<std::endl; 
}
int main()
{
         fun(2,6);
         fun(2,3.7);
         return 0;
}
