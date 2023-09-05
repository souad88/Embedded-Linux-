#include <iostream>
int main()
{

    int n;
    std::cout<<"Enter number"<<std::endl;
    std::cin>>n;
    if(n<=0)
    {
            if(n==0)
            {
                    std::cout<<"the number is 0"<<std::endl;

            }
            else 
            {
                 std::cout<<"the number is negative"<<std::endl;    
            }
    }
    else 
    {
        std::cout<<"number is positive"<<std::endl;
    }

    return 0;
}