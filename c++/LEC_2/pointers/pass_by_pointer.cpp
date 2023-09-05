#include <iostream>
void modifyValue(int *ptr)
{
     *ptr=10;

}
 
int main()
{
        
        int num=50;
        modifyValue(&num);
        std::cout<<"Modify num : "<<num<<std::endl;
        return 0;
} 