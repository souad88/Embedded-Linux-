//objdump -t --demangle | grep fun
//objdump -t | grep fun
#include <iostream>
int multiply(int,int);
float multiply(float,float);
int multiply(int a,int b)
{
    return(a*b);
}
double multiply(double a,double b)
{
    return(a*b);
}
int main()
{
        int result_0=multiply(3,4);

        std::cout<<"integer multiplication "<<result_0<<std::endl;
        double result_1=multiply(4.5,6.7);
        std::cout<<"float multiplication "<<result_1<<std::endl;
        return 0;
}