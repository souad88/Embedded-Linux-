
#include <iostream>
#include <iomanip>
#include <ios>
int main()
{
    int num2=52;
    std::cout<<"Number :"<<std::setw(6)<<num2<<std::endl; //setw:setwidth
    double pi=3.14159265358979323846;
    std::cout<<"pi : "<<std::setprecision(4)<<pi<<std::endl;
    double num3=123.234234;
    std::cout<<"value : "<<std::scientific<<num3<<std::endl;

    int num =14;
    std::cout<<"Hex: "<<std::hex<<num<<std::endl;
    std::cout<<"Oct: "<<std::oct<<num<<std::endl;
    std::cout<<"Dec: "<<std::dec<<num<<std::endl;
}