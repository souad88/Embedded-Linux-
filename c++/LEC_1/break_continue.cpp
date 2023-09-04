#include<iostream>
int main()
{
     for(int i=0; i<=5; ++i)
     {
            if(i==3)
            {
               std::cout<<"skip iteration"<<i<<std::endl;
               continue;
            }
            if(i==5)
            {
                std::cout<<"break the loop"<<i<<std::endl;
                break;
            }
            std::cout<<"iteration"<<i<<std::endl;
     }
     return 0;
}
