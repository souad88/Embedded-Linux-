//fill array 10->10000 withou using array without loop
//using static keyword
#include <iostream>
using namespace std;
class sequence
{
    public:
        static int k;
        sequence()
        {
            cout<<k++<<endl;
        }
};
int sequence::k=10;
int main()
{
        int k=100;
        sequence obj[k-9];
        return 0;   
}