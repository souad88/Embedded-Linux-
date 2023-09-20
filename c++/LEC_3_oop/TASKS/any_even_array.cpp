//check if any value of array is even
#include <iostream>
using namespace std;
 
int main()
{
    int num_[] = { 1,3,50,2, 7, 6, 5, 4 };
    int n = 5;
    for (int i = 0; i < n; i++) {
        
        if (num_[i] % 2 == 0) 
        {
            cout << num_[i] << " ";
        }
    }
 
    return 0;
}