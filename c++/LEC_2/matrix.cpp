#include <iostream>

int main()
{
    int matrix[3][3]={ [0]={[0]=1, [1]=2,  [2]=3},
     [1]={[0]=1, [1]=2,  [2]=3},
     [2]={[0]=1, [1]=2,  [2]=3}
    };

    for(int i=0; i<3; ++i)
    {   for(int j=0;j<3;j++)
         {
            std::cout<<matrix[i][j]<<" ";
         }
        std::cout<<std::endl;
    }

    return 0;

}