#include <iostream>
struct data
{

    int t;
};
int main()
{
    //1-can assign values
    int n; //default
    int x=10; //copy
    int y(10); //direct
    int z{10}; //value
    //2-{}narrow conversion
    float dec=3.5;
    int value{dec};
    //3-vexing parse
    int v{};
    int v2(); //prototype
    int v3=0;
    //4-synthesize constructor
    data d1; //garbage
    data d2{};//zeros
    std::cout<<d1.t<<std::endl;
    std::cout<<d2.t<<std::endl;

}