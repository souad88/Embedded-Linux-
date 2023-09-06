#include <iostream>
int main()
{
    int temp=10;
    //// capture by value
    [temp](int num){ return num+temp;};
    ///capture by ref
    [&temp](int num)
    {
        temp=20;
        return num+temp;
    };
    //capture all by ref
    [&](int num){
        temp=30;
        return num+temp;
    };
    //capture all by val
    [=](int num){return num+temp;};
    //capture all by value except (temp)by ref
    [=,&temp](int num){return num+temp;};
     
return 0;
}