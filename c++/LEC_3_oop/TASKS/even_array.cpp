//check if all the array  is even
#include <iostream>
using namespace std;
int main()
{
    int num_[] = { 1,44,54,32,7,87,2, 7, 6, 5, 4 };
    int n = 5;
    int e;
    for (int i = 0; i < n; i++) {
        
        if (num_[i] % 2 == 0) 
        {
            //cout << num_[i] << " ";
            e++;
        }
        if(e==n)
        {
            cout<<"all array is even"<<endl;
        }
    }
 
    return 0;
}