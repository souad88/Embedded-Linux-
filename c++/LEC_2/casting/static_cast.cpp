#include <iostream>
using namespace std;
//static cast ->change between two types of data
//ex1
int main()
{
    float b=5.8;
 //int *q=(int*)&b;//may cause in runtime error
    int f=static_cast<int>(b);
    return 0;
}    
